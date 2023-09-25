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


void modulo_relatorio (void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_relatorio();
        switch (op) {
            case 1:
                relat_admin();
                break;
            case 2:
                relat_fornec();
                break;
            case 3:
                relat_produto();
                break;
            case 4:
                relat_colab();
                break;
            case 5:
                relat_cliente();
                break;
            case 0:
                break;
            default:
                tela_erro();
                break;
        }
    }
    while (op != 0);
}

/////
//Funções paaraa apresentar os relatórios
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