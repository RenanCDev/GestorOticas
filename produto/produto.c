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
#include "../util/all.h"


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
                    limpa_buffer ();
                    cad_produto ();
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_produto ();
                    break; 
            } 
        } while (op != '0'); 
}


//Cadastra produto
//
void cad_produto (void) {
    char* cod_barras;
    char* cnpj;
    char* desc;
    char* quant;
    char* valor_comp;
    char* valor_vend;
    do {
        tela_cad_produto ();
        cod_barras = ent_cod_barras ();
        if (!valid_cod_barras(cod_barras)) {
            tela_erro (); 
        } 
    } while (!valid_cod_barras(cod_barras));
    limpa_buffer ();
    do {
        tela_cad_produto ();
        cnpj = ent_cnpj ();
        if (!valid_cnpj(cnpj)) {
            tela_erro (); 
        } 
    } while (!valid_cnpj(cnpj));
    limpa_buffer ();
    do {
        tela_cad_produto ();
        desc = ent_desc_produto ();
        if (!valid_nome(desc)) {
            tela_erro (); 
        } 
    } while (!valid_nome(desc));
    limpa_buffer ();
    do {
        tela_cad_produto ();
        quant = ent_quant ();
        if (!valid_numeros_s(quant)) {
            tela_erro (); 
        } 
    } while (!valid_numeros_s(quant));
    limpa_buffer ();
    do {
        tela_cad_produto ();
        valor_comp = ent_valor_ent ();
        if (!valid_numeros_s(valor_comp)) {
            tela_erro (); 
        } 
    } while (!valid_numeros_s(valor_comp));
    limpa_buffer ();
    do {
        tela_cad_produto ();
        valor_vend = ent_valor_saida ();
        if (!valid_numeros_s(valor_vend)) {
            tela_erro (); 
        } 
    } while (!valid_numeros_s(valor_vend));
    limpa_buffer ();
    tela_cad_produto ();
    t_exe_cad_prod ();
    tela_cad_concl ();
}


//Pesquisa produto
//
void pesq_produto (void) {
    char* cod_barras;
    do {
        tela_pesq_produto ();
        cod_barras = ent_cod_barras ();
        if (!valid_cod_barras(cod_barras)) {
            tela_erro (); 
        } 
    } while (!valid_cod_barras(cod_barras));
    limpa_buffer ();
    t_exe_cad_prod ();
    limpa_buffer (); 
}