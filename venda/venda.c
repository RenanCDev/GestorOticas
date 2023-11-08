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
//Percorre todo o caminho do menu venda
//
void modulo_venda (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    do {
        op = menu_sec_uni ("Venda", " 1 -> Cadastrar venda <- ", " 2 -> Pesquisar venda <- ");
        switch (op) {
            case '1':
                limpa_buffer ();
                cad_venda ();
                break;
            case '2':
                limpa_buffer ();
                pesq_venda ();
                break; 
        } 
    } while (op != '0'); 
}


//Cadastra uma nova venda
//
void cad_venda (void) {
    int verify;
    char* cpf;
    char* cod_barras;
    char* quant;
    do {
        tela_uni_1 ("Venda - colaborador");
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); 
        } 
    } while (!valid_cpf(cpf));
    limpa_buffer ();
    do {
        tela_uni_1 ("Venda - cliente");
        info_cliente_0 ();
        cpf = ent_cpf (); 
        if (!valid_cpf(cpf)) {
            tela_erro (); 
        } 
    } while (!valid_cpf(cpf));
    do {
        limpa_buffer ();
        do {
            tela_uni_1 ("Venda - produto");
            cod_barras = ent_cod_barras (); 
            if (!valid_cod_barras(cod_barras)) {
                tela_erro (); 
            } 
        } while (!valid_cod_barras(cod_barras));
        limpa_buffer ();
        do {
            tela_uni_1 ("Venda - quantidade do produto");
            quant = ent_quant (); 
            if (!valid_numeros_s(quant)) {
                tela_erro (); 
            } 
        } while (!valid_numeros_s(quant));
        verify = acresc_item_venda (); 
    } while (!verify);
    limpa_buffer ();
    form_pag ();
    limpa_buffer ();
    tela_uni_1 ("Cadastro - venda");
    t_exe_cad_vend ();
    tela_vend_concl ();
    limpa_buffer (); 
}


//Pesquisa o cadastro de alguma venda
//
void pesq_venda (void) {
    char* id;
    do {
        tela_uni_1 ("Pesquisa - venda");
        id = ent_id_venda (); 
        if (!valid_numeros_s(id)) {
            tela_erro (); 
        } 
    } while (!valid_numeros_s(id));
    limpa_buffer ();
    t_exe_cad_vend ();
    limpa_buffer (); 
}


//Acrescenta itens a uma venda em processo
//
int acresc_item_venda (void) {
    char op;
    char op_max = '2';
        do {
            tela_uni_1 ("Cadatro - venda");
            op = menu_item_venda ();
            if (!valid_op(op, op_max)) {
                tela_erro(); 
            } 
        }   
 while (!valid_op(op, op_max));
        switch (op) {
            case '1':
                return 0;
                break; 
            case '2': 
                return 1;
                break; 
            default: 
                return 0;
                break; 
        } 
}


//Declara a forma de pagamento de uma venda
//
void form_pag (void) {
    char op;
    do {
        tela_uni_1 ("Cadatro - venda");
        op = menu_form_pag ();
        switch (op) {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
        }
        system("clear"); 
    } while ((op != '1') && (op != '2') && (op != '3') && (op != '4')); 
}