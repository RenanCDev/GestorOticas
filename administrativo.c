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
//Percorre todo o caminho do menu administrativo
//
void modulo_administrativo (void) {
    setlocale (LC_ALL,"Portuguese_Brazil");
    char op;
    char op_max = '3';
    do {
        do {
            op = menu_administrativo ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                cad_admin ();
                break;
            case '2':
                getchar ();
                pesq_admin ();
                break;
            case '3':
                modulo_relatorio ();
                break; } }
    while (op != '0'); }


//Cadastra um novo administrador
//
void cad_admin (void) {
    char ex[22] = "Cadastro administrador";
    tela_cad_admin (ex);
    ent_cpf ();
    tela_cad_admin (ex);
    ent_email ();
    tela_cad_admin (ex);
    ent_cel ();
    tela_cad_admin (ex);
    ent_nome ();
    tela_cad_admin (ex);
    t_exe_cad_adm ();
    tela_cad_concl (); }


//Pesquisa o cadastro de algum administrador
void pesq_admin (void) {
    tela_pesq_admin ();
    ent_cpf ();
    t_exe_cad_adm ();
    getchar (); }