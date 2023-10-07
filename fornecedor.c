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
//Percorre todo o caminho do menu fornecedor
//
void modulo_fornecedor (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '2';
    do {
        do {
            limpa_buffer ();
            op = menu_fornecedor ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                cad_fornec ();
                break;
            case '2':
                pesq_fornec ();
                break; } }
    while (op != '0'); }


//Cadastra fornecedor
//
void cad_fornec (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        verify = ent_cnpj ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        verify = ent_email ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        verify = ent_cel ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        verify = ent_nome ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    t_exe_cad_forn ();
    tela_cad_concl (); }


//Pesquisa fornecedor
//
void pesq_fornec (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_pesq_fornec ();
        verify = ent_cnpj ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    t_exe_cad_forn (); }