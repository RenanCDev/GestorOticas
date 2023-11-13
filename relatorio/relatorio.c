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
#include <unistd.h>
#include "../util/all.h"


/////
//Percorre todo o caminho do menu relatorio
//
void modulo_relatorio (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_relatorio ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    relat_admin ();
                    break;
                case '2':
                    limpa_buffer ();
                    relat_fornec ();
                    break;
                case '3':
                    limpa_buffer ();
                    relat_produto ();
                    break;
                case '4':
                    limpa_buffer ();
                    relat_colab ();
                    break;
                case '5':
                    limpa_buffer ();
                    relat_cliente ();
                    break;
                case '6':
                    limpa_buffer ();
                    relat_venda ();
                    break;
            }
        } while (op != '0'); 
}


//Funções para apresentar os relatórios
//
//Relatório administrador
//
void relat_admin (void) {
    char* cpf;
    do {
        tela_uni_1 ("Relatório admministrador");
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); 
        } 
    } while (!valid_cpf(cpf));
    limpa_buffer ();
    t_exe_relat_adm (); 
    limpa_buffer (); 
}


//Relatório fornecedor
//
void relat_fornec (void) {
    char* cnpj;
    do {
        tela_uni_1 ("Relatório fornecedor");
        cnpj = ent_cnpj (); 
        if (!valid_cnpj(cnpj)) {
            tela_erro (); 
        } 
    } while (!valid_cnpj(cnpj));
    limpa_buffer ();
    t_exe_relat_forn (); 
    limpa_buffer ();
}


//Relatório produto
//
void relat_produto (void) {
    char* cod_barras;
    do {
        tela_uni_1 ("Relatório produto");
        cod_barras = ent_cod_barras (); 
        if (!valid_cod_barras(cod_barras)) {
            tela_erro (); 
        } 
    } while (!valid_cod_barras(cod_barras));
    limpa_buffer ();
    t_exe_relat_prod (); 
    limpa_buffer ();
}


//Relatório colaborador
//
void relat_colab (void) {
    char* cpf;
    do {
        tela_uni_1 ("Relatório colaborador");
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); 
        } 
    } while (!valid_cpf(cpf));
    limpa_buffer ();
    t_exe_relat_colab (); 
    limpa_buffer ();
}


//Relatório cliente
//
void relat_cliente (void) {
    char* cpf;
    do {
        tela_uni_1 ("Relatório cliente");
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); 
        } 
    } while (!valid_cpf(cpf));
    limpa_buffer ();
    t_exe_relat_client (); 
    limpa_buffer ();
}


//Relatório vendas
//
void relat_venda (void) {
    char* id;
    do {
        tela_uni_1 ("Relatório venda");
        id = ent_id_venda (); 
        if (!valid_numeros_s(id)) {
            tela_erro (); 
        } 
    } while (!valid_numeros_s(id));
    limpa_buffer ();
    // t_exe_cad_vend (); 
    limpa_buffer ();
}