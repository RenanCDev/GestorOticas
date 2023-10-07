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
//Percorre todo o caminho do menu venda
//
void modulo_venda (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '2';
    do {
        do {
            limpa_buffer ();
            op = menu_venda ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                cad_venda ();
                break;
            case '2':
                pesq_venda ();
                break; } }
    while (op != '0'); }


//Cadastra uma nova venda
//
void cad_venda (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_venda_colab ();
        verify = ent_cpf (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_venda_produt ();
        verify = ent_cod_barras (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_venda_q_prod ();
        verify = ent_quant (); 
        if (!verify) {
            tela_erro ();
        acresc_item_venda (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_venda_cliente ();
        info_cliente_0 ();
        verify = ent_cpf (); 
        if (!verify) {
            tela_erro ();
        form_pag ();  } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_relat_admin ();
        verify = ent_cpf (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    limpa_buffer ();
    t_exe_cad_vend ();
    tela_vend_concl (); }


//Pesquisa o cadastro de alguma venda
//
void pesq_venda (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_pesq_venda ();
        verify = ent_id_venda (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    limpa_buffer ();
    t_exe_cad_vend (); }


//Acrescenta itens a uma venda em processo
//
void acresc_item_venda (void) {
    char op;
    char op_max = '2';
    do {
        do {
            tela_cad_venda ();
            limpa_buffer ();
            op = menu_item_venda ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
            int verify;
            do {
                limpa_buffer ();
                tela_cad_venda ();
                tela_venda_produt ();
                verify = ent_cod_barras (); 
                if (!verify) {
                    tela_erro (); } }
            while (!verify);
            limpa_buffer ();
            do {
                limpa_buffer ();
                tela_cad_venda ();
                tela_venda_q_prod ();
                verify = ent_quant (); 
                if (!verify) {
                    tela_erro (); } }
            while (!verify);
            limpa_buffer ();
            break; } }
    while (op != '2'); }


//Declara a forma de pagamento de uma venda
//
void form_pag (void) {
    char op;
    char op_max = '4';
    do {
        do {
            limpa_buffer ();
            tela_cad_venda ();
            op = menu_form_pag ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
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