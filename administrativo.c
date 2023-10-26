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


/////
//Include do material necessario
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "all.h"


//Percorre todo o caminho do menu administrativo
//
void modulo_administrativo (void) {
    setlocale (LC_ALL,"Portuguese_Brazil");
    char op;
        do {
            op = menu_administrativo ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    cad_admin ();
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_admin ();
                    break;
                case '3':
                    modulo_relatorio ();
                    break; 
            } 
        } while (op != '0'); 
}


//Cadastra um novo administrador
//
void cad_admin (void) {
    char* cpf;
    char* email;
    char* cel;
    char* nome;
    char ex[22] = "Cadastro administrador";
    do {
        tela_cad_admin (ex);
        cpf = ent_cpf ();
        if (!valid_cpf(cpf)) {
            tela_erro ();
        } 
    } while (!valid_cpf(cpf));
    limpa_buffer ();
    do {
        tela_cad_admin (ex);
        email = ent_email ();
        if (!valid_email(email)) {
            tela_erro (); 
        } 
    } while (!valid_email(email));
    limpa_buffer ();
    do {
        tela_cad_admin (ex);
        cel = ent_cel ();
        if (!valid_numeros(cel, 11)) {
            tela_erro (); 
        } 
    }  while (!valid_numeros(cel, 11));
    limpa_buffer ();
    do {
        tela_cad_admin (ex);
        nome = ent_nome ();
        if (!valid_nome(nome)) {
            tela_erro (); 
        } 
    } while (!valid_nome(nome));
    limpa_buffer ();
    tela_cad_admin (ex);
    t_exe_cad_adm ();
    tela_cad_concl (); 
}


//Pesquisa o cadastro de algum administrador
//
void pesq_admin (void) {
    char* cpf;
    do {
        tela_pesq_admin ();
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
        tela_erro (); 
        } 
    } while (!valid_cpf(cpf));
    limpa_buffer ();
    t_exe_cad_adm ();
    limpa_buffer (); 
}