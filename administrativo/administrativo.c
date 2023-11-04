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
#include "../util/all.h"


/////
//Percorre todo o caminho do menu administrativo
//
void modulo_administrativo (void) {
    Admin* administrador;
    setlocale (LC_ALL,"Portuguese_Brazil");
    char op;
        do {
            op = menu_administrativo ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    administrador = cad_admin ();
                    gravar_admin (administrador);
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_admin ();
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
    char* cpf = le_cpf ("Cadastro administrador");
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
    t_cad_ok ("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome);
    tela_cad_concl ();
    return adm;
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


//Pesquisa o cadastro de algum administrador
//
void pesq_admin (void) {
    Admin* adm;
    char* cpf = le_cpf ("Cadastro administrador");
    adm = carregar_admin(cpf);
    if (adm == NULL) {
        tela_erro_dados ();
    }
    else {
    t_cad_ok ("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome);
    limpa_buffer ();
    free(adm);
    }
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
        if ((strcmp(adm->cpf, cpf) == 0)) {
            fclose(fp);
            return adm;
        }
    }
    fclose(fp);
    return NULL;
}