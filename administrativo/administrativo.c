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
                // case '2':
                //     limpa_buffer ();
                //     adm = pesq_admin ();
                //     char edit;
                //     do {
                //         edit = menu_edit("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status);
                //         switch (edit) {
                //             case '1' :
                //             char* email = le_email ("Cadastro administrador");
                //             strcpy(adm->email, email);
                //             limpa_buffer ();
                //             break;
                //             case '2' :
                //             char* cel = le_cel ("Cadastro administrador");
                //             strcpy(adm->cel, cel);
                //             limpa_buffer ();
                //             break;
                //             case '3' :
                //             char* nome = le_nome ("Cadastro administrador");
                //             strcpy(adm->nome, nome);
                //             limpa_buffer ();
                //             case '4' :
                //             char* email = le_email ("Cadastro administrador");
                //             strcpy(adm->email, email);
                //             limpa_buffer ();
                //             break;
                //             }
                //         } while (edit != '0' || edit != '4');
                //     break;
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
        if (!verify_cpf_dat (cpf)) {
            tela_erro_cpf ();
        }
    } while (!verify_cpf_dat (cpf));
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
    tela_cad_concl ();
    return adm;
}


//Pesquisa o cadastro de algum administrador
//
Admin* pesq_admin (void) {
    Admin* adm;
    char* cpf = le_cpf ("Cadastro administrador");
    adm = carregar_admin(cpf);
    if (adm == NULL) {
        tela_erro_dados ();
    }
    else {
    return adm;
    }
}


//Gravador de dados do administrador
//
void gravar_admin (Admin* adm) {
    FILE *fp_adm;
    fp_adm = fopen("dat/administrativo.dat", "ab");
    if (fp_adm == NULL) {
        tela_erro_dados ();
    }
    fwrite(adm, sizeof(Admin), 1, fp_adm);
    fclose(fp_adm);
    free(adm);
}


//Carregador de dados do administrador
//
Admin* carregar_admin(char* cpf) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*)malloc(sizeof(Admin));
    fp = fopen("dat/administrativo.dat", "rb");
    if (fp == NULL) {
        tela_erro_dados();
    }
    while (fread(adm, sizeof(Admin), 1, fp)) {
        if ((!strcmp(adm->cpf, cpf))) {
            fclose(fp);
            return adm;
        }
    }
    fclose(fp);
    return NULL;
}


//Verifica se o cpf ja esta cadastrado (retorna "1") ou não (retorna"0")
//
int verify_cpf_dat (char *cpf) {
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