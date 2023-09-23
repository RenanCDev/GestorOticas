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
#include <locale.h>
#include "all.h"


void modulo_administrativo (void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_administrativo();
        switch (op) {
            case 1:
                cad_admin();
                break;
            case 2:
                pesq_admin();
                break;
            case 3:
                relat_admin();
                break;
            case 4:
                relat_fornec();
                break;
            case 5:
                relat_produto();
                break;
            case 6:
                relat_colab();
                break;
            case 7:
                relat_cliente();
                break;
            case 0:
            break;
        }
    }
    while (op != 0);
}


/////
//Função para cadastrar administrador
void cad_admin (void){
    tela_cad_admin();
    ent_cpf();
    tela_cad_admin();
    ent_email();
    tela_cad_admin();
    ent_cel();
    tela_cad_admin();
    ent_nome();
    tela_cad_adm_ok();
}


//Função para pesquisar administrador
void pesq_admin (void) {
    tela_pesq_admin();
    ent_cpf();
    dados_admin();
    getchar();
}


//Função para apresentar o relatório administrador
void relat_admin (void) {
    tela_relat_admin();
    ent_cpf();
    dados_relat_admin();
    getchar();
}


//Função para apresentar o relatório fornecedor
void relat_fornec (void) {
    tela_relat_fornec();
    ent_cnpj();
    dados_relat_fornec();
    getchar();
}


//Função para apresentar o relatório produto
void relat_produto (void) {
    tela_relat_produto();
    ent_cod_barras();
    dados_relat_produto();
    getchar();
}


//Função para apresentar o relatório colaborador
void relat_colab (void) {
    tela_relat_colab();
    ent_cpf();
    dados_relat_colab();
    getchar();
}


//Função para apresentar o relatório cliente
void relat_cliente (void) {
    tela_relat_cliente();
    ent_cpf();
    dados_relat_cliente();
    getchar();
}