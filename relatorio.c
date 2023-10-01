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
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '6';
    do {
        do {
            op = menu_relatorio ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                relat_admin ();
                break;
            case '2':
                getchar ();
                relat_fornec ();
                break;
            case '3':
                getchar ();
                relat_produto ();
                break;
            case '4':
                getchar ();
                relat_colab ();
                break;
            case '5':
                getchar ();
                relat_cliente ();
                break;
            case '6':
                getchar ();
                relat_venda ();
                break; } }
    while (op != '0'); }


/////
//Funções paaraa apresentar os relatórios
//Função para apresentar o relatório administrador
void relat_admin (void) {
    tela_relat_admin ();
    ent_cpf ();
    t_exe_relat_adm ();
    getchar (); }


//Função para apresentar o relatório fornecedor
void relat_fornec (void) {
    tela_relat_fornec ();
    ent_cnpj ();
    t_exe_relat_forn ();
    getchar (); }


//Função para apresentar o relatório produto
void relat_produto (void) {
    tela_relat_produto ();
    ent_cod_barras ();
    t_exe_relat_prod ();
    getchar (); }


//Função para apresentar o relatório colaborador
void relat_colab (void) {
    tela_relat_colab ();
    ent_cpf ();
    t_exe_relat_colab ();
    getchar (); }


//Função para apresentar o relatório cliente
void relat_cliente (void) {
    tela_relat_cliente ();
    ent_cpf ();
    t_exe_relat_client ();
    getchar (); }


//Função para apresentar o relatório vendas
void relat_venda (void) {
    tela_relat_venda ();
    ent_id_venda ();
    t_exe_cad_vend ();
    getchar (); }