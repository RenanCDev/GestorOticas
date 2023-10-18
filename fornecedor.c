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
//Percorre todo o caminho do menu fornecedor
//
void modulo_fornecedor (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_fornecedor ();
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
    char* cnpj;
    char* email;
    char* cel;
    char* nome;
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        cnpj = ent_cnpj ();
        if (!valid_cnpj(cnpj)) {
            tela_erro (); } }
    while (!valid_cnpj(cnpj));
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        email = ent_email ();
        if (!valid_email(email)) {
            limpa_buffer ();
            tela_erro (); } }
    while (!valid_email(email));
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        cel = ent_cel ();
        if (!valid_numeros(cel, 11)) {
            limpa_buffer ();
            tela_erro (); } }
    while (!valid_numeros(cel, 11));
    do {
        limpa_buffer ();
        tela_cad_fornec ();
        nome = ent_nome ();
        if (!valid_nome(nome)) {
            limpa_buffer ();
            tela_erro (); } }
    while (!valid_nome(nome));
    limpa_buffer ();
    tela_cad_fornec ();
    t_exe_cad_forn ();
    tela_cad_concl (); }


//Pesquisa fornecedor
//
void pesq_fornec (void) {
    char* cnpj;
    do {
        limpa_buffer ();
        tela_pesq_fornec ();
        cnpj = ent_cnpj ();
        if (!valid_cnpj(cnpj)) {
            tela_erro (); } }
    while (!valid_cnpj(cnpj));
    limpa_buffer (); 
    t_exe_cad_forn ();
    limpa_buffer (); }