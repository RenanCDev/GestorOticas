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
//Percorre todo o caminho do menu cliente
void modulo_cliente (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '2';
    do {
        do {
            op = menu_cliente ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                cad_cliente ();
                break;
            case '2':
                getchar ();
                pesq_cliente ();
                break; } }
    while (op != '0'); }


//Cadastra um novo cliente
//
void cad_cliente (void) {
    tela_cad_cliente ();
    ent_cpf ();
    tela_cad_cliente ();
    ent_email ();
    tela_cad_cliente ();
    ent_cel ();
    tela_cad_cliente ();
    ent_nome ();
    tela_cad_cliente ();
    t_exe_cad_cliente ();
    tela_cad_concl (); }


//Pesquisa o cadastro de um cliente
//
void pesq_cliente (void) {
    tela_pesq_cliente ();
    ent_cpf ();
    t_exe_cad_cliente ();
    getchar (); }