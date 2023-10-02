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
            op = menu_fornecedor ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                cad_fornec ();
                break;
            case '2':
                getchar ();
                pesq_fornec ();
                break; } }
    while (op != '0'); }


//Cadastra fornecedor
//
void cad_fornec (void) {
    tela_cad_fornec ();
    ent_cnpj ();
    tela_cad_fornec ();
    ent_email ();
    tela_cad_fornec ();
    ent_cel ();
    tela_cad_fornec ();
    ent_nome ();
    tela_cad_fornec ();
    t_exe_cad_forn ();
    tela_cad_concl (); }


//Pesquisa fornecedor
//
void pesq_fornec (void) {
    tela_pesq_fornec ();
    ent_cnpj ();
    t_exe_cad_forn ();
    getchar (); }