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


/////
//Percorre todo o caminho do menu relatorio
//
void modulo_relatorio (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '6';
    do {
        do {
            limpa_buffer ();
            op = menu_relatorio ();
            if (!valid_op(op, op_max)) {
                limpa_buffer ();
                tela_erro(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                relat_admin ();
                break;
            case '2':
                relat_fornec ();
                break;
            case '3':
                relat_produto ();
                break;
            case '4':
                relat_colab ();
                break;
            case '5':
                relat_cliente ();
                break;
            case '6':
                relat_venda ();
                break; } }
    while (op != '0'); }


//Funções para apresentar os relatórios
//
//Relatório administrador
//
void relat_admin (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_relat_admin ();
        verify = ent_cpf (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    limpa_buffer ();
    t_exe_relat_adm (); }


//Relatório fornecedor
//
void relat_fornec (void) {
    int verify;
    tela_relat_fornec ();
    ent_cnpj ();
    t_exe_relat_forn ();
    getchar (); }


//Relatório produto
//
void relat_produto (void) {
    tela_relat_produto ();
    ent_cod_barras ();
    t_exe_relat_prod ();
    getchar (); }


//Relatório colaborador
//
void relat_colab (void) {
    tela_relat_colab ();
    ent_cpf ();
    t_exe_relat_colab ();
    getchar (); }


//Relatório cliente
//
void relat_cliente (void) {
    tela_relat_cliente ();
    ent_cpf ();
    t_exe_relat_client ();
    getchar (); }


//Relatório vendas
//
void relat_venda (void) {
    tela_relat_venda ();
    ent_id_venda ();
    t_exe_cad_vend ();
    getchar (); }