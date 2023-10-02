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
//Percorre todo o caminho do menu colaborador
void modulo_colaborador (void) {
    setlocale( LC_ALL, "Portuguese_Brazil");
    char op;
    char op_max = '2';
    do {
        do {
            op = menu_colaborador ();
            if (!valid_op(op, op_max)) {
                tela_erro();
                getchar(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                getchar ();
                cad_colab ();
                break;
            case '2':
                getchar ();
                pesq_colab ();
                break; } }
    while (op != '0'); }


//Cadastra um novo colaborador
//
void cad_colab (void) {
    tela_cad_colab ();
    ent_cpf ();
    tela_cad_colab ();
    ent_email ();
    tela_cad_colab ();
    ent_cel ();
    tela_cad_colab ();
    ent_nome ();
    tela_cad_colab ();
    t_exe_cad_colab ();
    tela_cad_concl (); }


//Pesquisa o cadastro de um colaborador
//
void pesq_colab (void) {
    tela_pesq_colab ();
    ent_cpf ();
    t_exe_cad_colab ();
    getchar (); }