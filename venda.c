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


void modulo_venda (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '2';
    do {
        do {
            op = menu_venda ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                cad_venda ();
                break;
            case '2':
                getchar ();
                pesq_venda ();
                break; } }
    while (op != '0'); }


void cad_venda (void) {
    tela_cad_venda ();
    tela_venda_colab ();
    ent_cpf ();
    tela_cad_venda ();
    tela_venda_produt ();
    ent_cod_barras ();
    tela_cad_venda ();
    tela_venda_q_prod ();
    ent_quant ();
    acresc_item_venda ();
    tela_cad_venda ();
    tela_venda_cliente ();
    info_cliente_0 ();
    ent_cpf ();
    form_pag ();
    tela_cad_venda ();
    t_exe_cad_vend ();
    tela_vend_concl (); }


void pesq_venda (void) {
    tela_pesq_venda ();
    ent_id_venda ();
    t_exe_cad_vend ();
    getchar (); }


void acresc_item_venda (void) {
    char op;
    char op_max = '2';
    do {
        do {
            tela_cad_venda ();
            op = menu_item_venda ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                tela_cad_venda ();
                tela_venda_produt ();
                ent_cod_barras ();
                tela_cad_venda ();
                tela_venda_q_prod ();
                ent_quant ();
                break; } }
    while (op != '2'); }


void form_pag (void) {
    char op;
    char op_max = '4';
    do {
        do {
            tela_cad_venda ();
            op = menu_form_pag ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                break;
            case '2':
                getchar ();
                break;
            case '3':
                getchar ();
                break;
            case '4':
                getchar ();
                break; }
    system("clear"); }
    while ((op != '1') && (op != '2') && (op != '3') && (op != '4')); }