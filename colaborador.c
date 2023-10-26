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
#include <string.h>
#include <locale.h>
#include "all.h"


/////
//Percorre todo o caminho do menu colaborador
//
void modulo_colaborador (void) {
    setlocale( LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_colaborador ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    cad_colab ();
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_colab ();
                    break; 
                } 
            }
    while (op != '0'); 
    }


//Cadastra um novo colaborador
//
void cad_colab (void) {
    char* cpf;
    char* email;
    char* cel;
    char* nome;
    do {
        tela_cad_colab ();
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); 
            } 
        }
    while (!valid_cpf(cpf));
    limpa_buffer ();
    do {
        tela_cad_colab ();
        email = ent_email ();
        if (!valid_email(email)) {
            tela_erro (); 
            } 
        }
    while (!valid_email(email));
    limpa_buffer ();
    do {
        tela_cad_colab ();
        cel = ent_cel ();
        if (!valid_numeros(cel, 11)) {
            tela_erro (); 
            } 
        } 
    while (!valid_numeros(cel, 11));
    limpa_buffer ();
    do {
        tela_cad_colab ();
        nome = ent_nome ();
        if (!valid_nome(nome)) {
            tela_erro (); 
            } 
        }
    while (!valid_nome(nome));
    limpa_buffer ();
    tela_cad_colab ();
    t_exe_cad_colab ();
    tela_cad_concl (); }


//Pesquisa o cadastro de um colaborador
//
void pesq_colab (void) {
    char* cpf;
    do {
        tela_pesq_colab ();
        cpf = ent_cpf ();
        if (!valid_cpf(cpf)) {
            tela_erro (); 
            } 
        }
    while (!valid_cpf(cpf));
    limpa_buffer ();
    t_exe_cad_colab ();
    limpa_buffer (); 
    }