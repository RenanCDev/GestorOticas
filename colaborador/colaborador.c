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
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro colaborador");
        if (!verify_cpf_dat_colab (cpf)) {
            tela_erro_dado_c ();
        }
    } while (!verify_cpf_dat_colab (cpf));
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


//Pesquisa o cadastro de algum colaborador
//
Colab* pesq_colab (void) {
    Colab* col;
    char* cpf;
    do{
        cpf = le_cpf ("Pesquisa colaborador");
        col = carregar_colab (cpf);
        if (col == NULL) {
            tela_erro_dados ("Cadastro inexistente");
        }
    } while (col == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro colaborador", col->cpf, col->email, col->cel, col->nome, col->status);
            if ((edit >= '1') && (edit <= '3')) {
                regravar_colab (col, edit);
                tela_op_ok ();
            }
            else {
                excluir_colab (col->cpf);
                tela_op_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
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
        if ((!strcmp(col->cpf, cpf) && (col->status == '1'))) {
            fclose(fp);
            return col;
        }
    }
    fclose(fp);
    return NULL;
}


//Verifica se o cpf ja esta cadastrado (retorna "1") ou não (retorna"0")
//
int verify_cpf_dat_colab (char *cpf) {
    FILE* fp;
    Colab* col;
    col = (Colab *)malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "rb");
    while (fread(col, sizeof(Colab), 1, fp)) {
        if ((strcmp(col->cpf, cpf) == 0) && col->status == '1') {
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return 1;
}


void regravar_colab(Colab* col, char op) {
    FILE* fp;
    Colab* nova_ent;
    nova_ent = (Colab*)malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Colab), 1, fp);
        if (strcmp(nova_ent->cpf, col->cpf) == 0) {
            edit_cad_colab(col, op);
            fseek(fp, -1 * sizeof(Colab), SEEK_CUR);
            fwrite(col, sizeof(Colab), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


void excluir_colab(char* cpf)  {
    Colab* col;
    col = (Colab*)malloc(sizeof(Colab));
    col = carregar_colab(cpf);
    col->status = '0';
    remove_colab(col);
    free(col);
    free(cpf);
}


void remove_colab(Colab* col) {
    FILE *fp;
    Colab* col_op;
    col_op = (Colab*)malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "r+b");
    while (!feof(fp)) {
        fread(col_op, sizeof(Colab), 1, fp);
        if ((strcmp(col_op->cpf, col->cpf) == 0) && (col_op->status != '0')) {
            col_op->status = '0';
            fseek(fp, -1 * sizeof(Colab), SEEK_CUR);
            fwrite(col_op, sizeof(Colab), 1, fp);
        }
    }
    fclose(fp);
    free(col_op);
}


void edit_cad_colab (Colab* col, char op) {
    switch (op) {
        case '1' :
            limpa_buffer ();
            char* email = le_email ("Cadastro colaborador");
            strcpy(col->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro colaborador");
            strcpy(col->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro colaborador");
            strcpy(col->nome, nome);
        case '4' :
            limpa_buffer ();
            excluir_colab(col->cpf);
    }
}