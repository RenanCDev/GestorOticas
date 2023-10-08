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
//Percorre todo o caminho do menu produto
//
void modulo_produto (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_produto ();
        switch (op) {
            case '1':
                cad_produto ();
                break;
            case '2':
                pesq_produto ();
                break; } }
    while (op != '0'); }


//Cadastra produto
//
void cad_produto (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_cad_produto ();
        verify = ent_cod_barras ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_produto ();
        verify = ent_cnpj ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_produto ();
        verify = ent_desc_produto ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_produto ();
        verify = ent_quant ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_produto ();
        verify = ent_valor_ent ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_cad_produto ();
        verify = ent_valor_saida ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    limpa_buffer ();
    t_exe_cad_prod ();
    tela_cad_concl ();
    limpa_buffer (); }


//Pesquisa produto
//
void pesq_produto (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_pesq_produto ();
        verify = ent_cod_barras ();
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    t_exe_cad_prod ();
    limpa_buffer (); }