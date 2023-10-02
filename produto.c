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
//Percorre todo o caminho do menu produto
//
void modulo_produto (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '2';
    do {
        do {
            op = menu_produto ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                cad_produto ();
                break;
            case '2':
                getchar ();
                pesq_produto ();
                break; } }
    while (op != '0'); }


//Cadastra produto
//
void cad_produto (void) {
    tela_cad_produto ();
    ent_cod_barras ();
    tela_cad_produto ();
    ent_cnpj ();
    tela_cad_produto ();
    ent_desc_produto ();
    tela_cad_produto ();
    ent_quant ();
    tela_cad_produto ();
    ent_valor_ent ();
    tela_cad_produto ();
    ent_valor_saida ();
    tela_cad_produto ();
    t_exe_cad_prod ();
    tela_cad_concl (); }


//Pesquisa produto
//
void pesq_produto (void) {
    tela_pesq_produto ();
    ent_cod_barras ();
    t_exe_cad_prod ();
    getchar (); }