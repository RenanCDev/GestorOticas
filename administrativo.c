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
            limpa_buffer ();
            op = menu_administrativo ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
        while (!valid_op(op, op_max));
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
    int verify;
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        verify = ent_cpf ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        verify = ent_email ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        verify = ent_cel ();
        if (!verify) {
            tela_erro (); } } 
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_admin (ex);
        verify = ent_nome ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    limpa_buffer ();
    tela_cad_admin (ex);
    t_exe_cad_adm ();
    tela_cad_concl (); }


//Pesquisa o cadastro de algum administrador
void pesq_admin (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_pesq_admin ();
        verify = ent_cpf ();
        if (!verify); }
    while (!verify);
    t_exe_cad_adm (); }