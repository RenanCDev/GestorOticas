/*  ("+=========================================================================+\n")
    ("|                                                                         |\n")
    ("|               Universidade Federal do Rio Grande do Norte               |\n")
    ("|                                                                         |\n")
    ("|                   Centro de Ensino Superior do Seridó                   |\n")
    ("|                                                                         |\n")
    ("|             Aluno -- Renan Missias Rodrigues Alves da Costa             |\n")
    ("|                                                                         |\n")
    ("|                    Disciplina DCT1106 -- Programação                    |\n")
    ("|                                                                         |\n")
    ("|                  Projeto Sistema de Gestão para Óticas                  |\n")
    ("|                                                                         |\n")
    ("|               Developed by @RenanMRb - since august, 2023               |\n")
    ("|                                                                         |\n")
    ("+=========================================================================+\n")  */


/////
//Include do material necessario
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>
#include "../util/all.h"


/////
//Percorre todo o caminho do menu administrativo
//
void modulo_administrativo (void) {
    Admin* adm;
    setlocale (LC_ALL,"Portuguese_Brazil");
    char op;
        do {
            op = menu_administrativo ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    adm = cad_admin ();
                    gravar_admin (adm);
                    break;
                case '2':
                    limpa_buffer ();
                    adm = pesq_admin ();
                    break;
                case '3':
                    modulo_relatorio ();
                    break; 
            } 
        } while (op != '0'); 
}


//Cadastra um novo administrador
//
Admin* cad_admin (void) {
    Admin* adm;
    adm = (Admin*)malloc((sizeof(Admin)));
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro administrador");
        if (!verify_cpf_dat_adm (cpf)) {
            tela_erro_dado_c ();
        }
    } while (!verify_cpf_dat_adm (cpf));
    strcpy(adm->cpf, cpf);
    limpa_buffer ();
    char* email = le_email ("Cadastro administrador");
    strcpy(adm->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro administrador");
    strcpy(adm->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro administrador");
    strcpy(adm->nome, nome);
    adm->status = '1';
    t_cad_ok ("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status);
    tela_op_ok ();
    return adm;
}


//Pesquisa o cadastro de algum administrador
//
Admin* pesq_admin (void) {
    Admin* adm;
    char* cpf;
    do{
        cpf = le_cpf ("Pesquisa administrador");
        adm = carregar_adm (cpf);
        if (adm == NULL) {
            tela_erro_dados ("Cadastro inexistente");
        }
    } while (adm == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status);
            if ((edit >= '1') && (edit <= '3')) {
                regravar_adm (adm, edit);
                tela_op_ok ();
            }
            else if (edit == '4') {
                excluir_adm (adm->cpf);
                tela_op_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
    return adm;
}


//Gravador de dados do administrador
//
void gravar_admin (Admin* adm) {
    FILE *fp_adm;
    fp_adm = fopen("dat/administrativo.dat", "ab");
    if (fp_adm == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(adm, sizeof(Admin), 1, fp_adm);
    fclose(fp_adm);
    free(adm);
}


//Carregador de dados do administrador
//
Admin* carregar_adm(char* cpf) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*)malloc(sizeof(Admin));
    fp = fopen("dat/administrativo.dat", "rb");
    if (fp == NULL) {
        tela_erro_dados("SAVE/ LOADING de dados incompleto ou com problema");
    }
    while (fread(adm, sizeof(Admin), 1, fp)) {
        if ((!strcmp(adm->cpf, cpf) && (adm->status == '1'))) {
            fclose(fp);
            return adm;
        }
    }
    fclose(fp);
    return NULL;
}


//Verifica se o cpf ja esta cadastrado (retorna "1") ou não (retorna"0")
//
int verify_cpf_dat_adm (char *cpf) {
    FILE* fp;
    Admin* adm;
    adm = (Admin *)malloc(sizeof(Admin));
    fp = fopen("dat/administrativo.dat", "rb");
    while (fread(adm, sizeof(Admin), 1, fp)) {
        if ((strcmp(adm->cpf, cpf) == 0) && adm->status == '1') {
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return 1;
}


void regravar_adm(Admin* adm, char op) {
    FILE* fp;
    Admin* nova_ent;
    nova_ent = (Admin*)malloc(sizeof(Admin));
    fp = fopen("dat/administrativo.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Admin), 1, fp);
        if (strcmp(nova_ent->cpf, adm->cpf) == 0) {
            edit_cad_adm(adm, op);
            fseek(fp, -1 * sizeof(Admin), SEEK_CUR);
            fwrite(adm, sizeof(Admin), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


void excluir_adm(char* cpf)  {
    Admin* adm;
    adm = (Admin*)malloc(sizeof(Admin));
    adm = carregar_adm(cpf);
    adm->status = '0';
    remove_adm(adm);
    free(adm);
    free(cpf);
}


void remove_adm(Admin* adm) {
    FILE *fp;
    Admin* adm_op;
    adm_op = (Admin*)malloc(sizeof(Admin));
    fp = fopen("dat/administrativo.dat", "r+b");
    while (!feof(fp)) {
        fread(adm_op, sizeof(Admin), 1, fp);
        if ((strcmp(adm_op->cpf, adm->cpf) == 0) && (adm_op->status != '0')) {
            adm_op->status = '0';
            fseek(fp, -1 * sizeof(Admin), SEEK_CUR);
            fwrite(adm_op, sizeof(Admin), 1, fp);
        }
    }
    fclose(fp);
    free(adm_op);
}


void edit_cad_adm (Admin* adm, char op) {
    switch (op) {
        case '1' :
            limpa_buffer ();
            char* email = le_email ("Cadastro administrador");
            strcpy(adm->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro administrador");
            strcpy(adm->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro administrador");
            strcpy(adm->nome, nome);
        case '4' :
            limpa_buffer ();
            excluir_adm(adm->cpf);
    }
}