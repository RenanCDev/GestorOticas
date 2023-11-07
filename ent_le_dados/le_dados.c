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
#include <unistd.h>
#include "../util/all.h"


//Funções de leitura de entradas
//Leitura CPF
//
char* le_cpf (char* tela) {
    char* cpf;
    do {
        tela_uni_1 (tela);
        cpf = ent_cpf ();
        if (!valid_cpf(cpf)) {
            tela_erro ();
        } 
    } while (!valid_cpf(cpf)); 
    return cpf;
}
//Leitura email
//
char* le_email (char* tela) {
    char* email;
    do {
        tela_uni_1 (tela);
        email = ent_email ();
        if (!valid_email(email)) {
            tela_erro ();
        } 
    } while (!valid_email(email)); 
    return email;
}
//Leitura celular
//
char* le_cel (char* tela) {
    char* cel;
    do {
        tela_uni_1 (tela);
        cel = ent_cel ();
        if (!valid_numeros(cel, 11)) {
            tela_erro ();
        } 
    } while (!valid_numeros(cel, 11)); 
    return cel;
}
//Leitura nome
//
char* le_nome (char* tela) {
    char* nome;
    do {
        tela_uni_1 (tela);
        nome = ent_nome ();
        if (!valid_nome(nome)) {
            tela_erro ();
        } 
    } while (!valid_nome(nome)); 
    return nome;
}
//Leitura cnpj
//
char* le_cnpj (char* tela) {
    char* cnpj;
    do {
        tela_uni_1 (tela);
        cnpj = ent_cnpj ();
        if (!valid_cnpj(cnpj)) {
            tela_erro ();
        } 
    } while (!valid_cnpj(cnpj)); 
    return cnpj;
}
//Leitura código de barras
//
char* le_cod_barras (char* tela) {
    char* cod_barras;
    do {
        tela_uni_1 (tela);
        cod_barras = ent_cod_barras ();
        if (!valid_cod_barras(cod_barras)) {
            tela_erro ();
        } 
    } while (!valid_cod_barras(cod_barras)); 
    return cod_barras;
}
//Leitura da descrição do produto
//
char* le_desc_prod (char* tela) {
    char* desc_prod;
    do {
        tela_uni_1 (tela);
        desc_prod = ent_desc_produto ();
        if (!valid_nome(desc_prod)) {
            tela_erro ();
        } 
    } while (!valid_nome(desc_prod)); 
    return desc_prod;
}
//Leitura quantidade de peças
//
char* le_quant (char* tela) {
    char* quant;
    do {
        tela_uni_1 (tela);
        quant = ent_quant ();
        if (!valid_numeros_s(quant)) {
            tela_erro ();
        } 
    } while (!valid_numeros_s(quant)); 
    return quant;
}
//Leitura valor de compra
//
char* le_valor_c (char* tela) {
    char* valor_ent;
    do {
        tela_uni_1 (tela);
        valor_ent = ent_valor_ent ();
        if (!valid_numeros_f(valor_ent, 8)) {
            tela_erro ();
        } 
    } while (!valid_numeros_f(valor_ent, 8)); 
    return valor_ent;
}
//Leitura valor de venda
//
char* le_valor_v (char* tela) {
    char* valor_saida;
    do {
        tela_uni_1 (tela);
        valor_saida = ent_valor_saida ();
        if (!valid_numeros_f(valor_saida, 8)) {
            tela_erro ();
        } 
    } while (!valid_numeros_f(valor_saida, 8)); 
    return valor_saida;
}
//Leitura de id da venda
//
char* le_id (char* tela) {
    char* id;
    do {
        tela_uni_1 (tela);
        id = ent_id_venda ();
        if (!valid_numeros_s(id)) {
            tela_erro ();
        } 
    } while (!valid_numeros_s(id)); 
    return id;
}