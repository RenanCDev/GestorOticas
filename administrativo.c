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
//Percorre todo o caminho do menu administrativo
//
void modulo_administrativo (void) {
    setlocale (LC_ALL,"Portuguese_Brazil");
    char op;
        do {
            op = menu_administrativo ();
        switch (op) {
            case '1':
                cad_admin ();
                break;
            case '2':
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
    char* cpf;
    char* email;
    char* cel;
    char* nome;
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); } }
    while (!valid_cpf(cpf));
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        email = ent_email ();
        if (!valid_email(email)) {
            limpa_buffer ();
            tela_erro (); } }
    while (!valid_email(email));
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        cel = ent_cel ();
        if (!valid_numeros(cel, 11)) {
            limpa_buffer ();
            tela_erro (); } } 
    while (!valid_numeros(cel, 11));
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        nome = ent_nome ();
        if (!valid_nome(nome)) {
            limpa_buffer ();
            tela_erro (); } }
    while (!valid_nome(nome));
    limpa_buffer ();
    tela_cad_admin (ex);
    t_exe_cad_adm ();
    tela_cad_concl (); }


//Pesquisa o cadastro de algum administrador
void pesq_admin (void) {
    char* cpf;
    do {
        limpa_buffer ();
        tela_pesq_admin ();
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); } }
    while (!valid_cpf(cpf));
    t_exe_cad_adm ();
    limpa_buffer (); }