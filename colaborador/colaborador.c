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
//Percorre todo o caminho do menu colaborador
//
void modulo_colaborador (void) {
    Colab* colaborador;
    setlocale( LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Colaborador", " 1 -> Cadastrar colaborador <- ", " 2 -> Pesquisar colaborador <- ");
            switch (op) {
                case '1':
                    limpa_buffer ();
                    colaborador = cad_colab ();
                    gravar_colab (colaborador);
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_colab ();
                    break; 
            } 
        } while (op != '0'); 
}


//Cadastra um novo colaborador
//
Colab* cad_colab (void) {
    Colab* col;
    col = (Colab*)malloc((sizeof(Colab)));
    char* cpf = le_cpf ("Cadastro colaborador");
    strcpy(col->cpf, cpf);
    limpa_buffer ();
    char* email = le_email ("Cadastro colaborador");
    strcpy(col->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro colaborador");
    strcpy(col->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro colaborador");
    strcpy(col->nome, nome);
    col->status = '1';
    t_cad_ok ("Cadastro colaborador", col->cpf, col->email, col->cel, col->nome, col->status);
    tela_op_ok ();
    return col;
}


//Gravador de dados do colaborador
//
void gravar_colab (Colab* col) {
    FILE *fp_col;
    fp_col = fopen("dat/colaborador.dat", "ab");
    if (fp_col == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(col, sizeof(Colab), 1, fp_col);
    fclose(fp_col);
    free(col);
}


//Pesquisa o cadastro de algum colaborador
//
void pesq_colab (void) {
    Colab* col;
    char* cpf = le_cpf ("Pesquisa colaborador");
    col = carregar_colab(cpf);
    if (col == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    else {
    t_cad_ok ("Cadastro colaborador", col->cpf, col->email, col->cel, col->nome, col->status);
    limpa_buffer ();
    free(col);
    }
}


//Carregador de dados do colaborador
//
Colab* carregar_colab(char* cpf) {
    FILE *fp;
    Colab* col;
    col = (Colab*)malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "rb");
    if (fp == NULL) {
        tela_erro_dados("SAVE/ LOADING de dados incompleto ou com problema");
    }
    while (fread(col, sizeof(Colab), 1, fp)) {
        if ((strcmp(col->cpf, cpf) == 0)) {
            fclose(fp);
            return col;
        }
    }
    fclose(fp);
    return NULL;
}