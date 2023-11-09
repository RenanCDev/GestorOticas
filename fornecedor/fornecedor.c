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


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>
#include "../util/all.h"


/////
//Percorre todo o caminho do menu fornecedor
//
void modulo_fornecedor (void) {
    Fornec* fornecedor;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Fornecedor", " 1 -> Cadastrar fornecedor <- ", " 2 -> Pesquisar fornecedor <- ");            switch (op) {
                case '1':
                    limpa_buffer ();
                    fornecedor = cad_fornec ();
                    gravar_fornec (fornecedor);
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_fornec ();
                    break; 
            }
        } while (op != '0'); 
}


//Cadastra fornecedor
//
Fornec* cad_fornec (void) {
    Fornec* forn;
    forn = (Fornec*)malloc((sizeof(Fornec)));
    char* cnpj = le_cnpj ("Cadastro fornecedor");
    strcpy(forn->cnpj, cnpj);
    limpa_buffer ();
    char* email = le_email ("Cadastro fornecedor");
    strcpy(forn->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro fornecedor");
    strcpy(forn->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro fornecedor");
    strcpy(forn->nome, nome);
    forn->status = '1';
    t_cad_ok ("Cadastro fornecedor", forn->cnpj, forn->email, forn->cel, forn->nome, forn->status);
    tela_op_ok ();
    return forn;
}


//Gravador de dados do fornecedor
//
void gravar_fornec (Fornec* forn) {
    FILE *fp_forn;
    fp_forn = fopen("dat/fornecedor.dat", "ab");
    if (fp_forn == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(forn, sizeof(Fornec), 1, fp_forn);
    fclose(fp_forn);
    free(forn);
}



//Pesquisa o cadastro de algum fornecedor
//
void pesq_fornec (void) {
    Fornec* forn;
    char* cnpj = le_cnpj ("Pesquisa fornecedor");
    forn = carregar_fornec(cnpj);
    if (forn == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    else {
    t_cad_ok ("Cadastro fornecedor", forn->cnpj, forn->email, forn->cel, forn->nome, forn->status);
    limpa_buffer ();
    free(forn);
    }
}


//Carregador de dados do fornecedor
//
Fornec* carregar_fornec(char* cnpj) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "rb");
    if (fp == NULL) {
        tela_erro_dados("SAVE/ LOADING de dados incompleto ou com problema");
    }
    while (fread(forn, sizeof(Fornec), 1, fp)) {
        if ((strcmp(forn->cnpj, cnpj) == 0)) {
            fclose(fp);
            return forn;
        }
    }
    fclose(fp);
    return NULL;
}