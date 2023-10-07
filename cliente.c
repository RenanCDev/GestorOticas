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
            limpa_buffer ();
            op = menu_cliente ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                cad_cliente ();
                break;
            case '2':
                pesq_cliente ();
                break; } }
    while (op != '0'); }


//Cadastra um novo cliente
//
void cad_cliente (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_cad_cliente ();
        verify = ent_cpf ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_cliente ();
        verify = ent_email ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_cliente ();
        verify = ent_cel ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_cliente ();
        verify = ent_nome ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    limpa_buffer ();
    tela_cad_cliente ();
    t_exe_cad_cliente ();
    tela_cad_concl (); }


//Pesquisa o cadastro de um cliente
//
void pesq_cliente (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_pesq_cliente ();
        verify = ent_cpf ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    t_exe_cad_cliente (); }