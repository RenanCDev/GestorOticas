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
//Funções de entrada de dados
//
//entrada do CPF
//
char ent_cpf (void) {
    char cpf;
    char* pont;
    pont = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF .                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                            CPF: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cpf); 
    printf("cpf: %c\npont: %s\n",cpf, pont);
    getchar();
    if (!valid_cpf(pont)) {
        return 0; }
    return 1;}


char* ent_cp (void) {
    char cpf;
    char* pont;
    pont = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF .                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                            CPF: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cpf); 
    printf("cpf: %c\npont: %s\n",cpf, pont);
    getchar();
    return pont; }


//Entrada do email
//
char ent_email (void) {
    char email;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o E-mail .                            |\n");
    printf("|                                                                         |\n");
    printf("|                   E-mail: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &email); 
    if (!valid_email(pont)) {
        return 0; }
    return 1;}


//Entrada do celular
//
char ent_cel (void) {
    char cel;
    char* pont;
    pont = (char*) malloc(20*sizeof(char));
    int tam = 11;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular .                            |\n");
    printf("|                                                                         |\n");
    printf("|                Insira apenas números, incluindo o ddd !                 |\n");
    printf("|                                                                         |\n");
    printf("|                            Cel.: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cel);
    if (!valid_numeros(pont, tam)) {
       return 0; }
    return 1; }


//Entrada do nome
//
char ent_nome (void) {
    char nome;
    char* pont;
    pont = (char*) malloc(60*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome .                             |\n");
    printf("|                                                                         |\n");
    printf("|               Nome: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &nome);
    if (!valid_nome(pont)) {
       return 0; }
    return 1; }


//Entrada do CNPJ
//
char ent_cnpj (void) {
    char cnpj;
    char* pont;
    pont = (char*) malloc(20*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Digite o CNPJ do fornecedor :                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                          CNPJ: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cnpj); 
    if (!valid_cnpj(pont)) {
        return 0; }
    return 1;}


//Entrada do código de barras
//
char ent_cod_barras (void) {
    char cod_barras;
    char* pont;
    pont = (char*) malloc(20*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras .                       |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                     Código de barras: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cod_barras); 
    if (!valid_cod_barras(pont)) {
       return 0; }
    return 1; }


//Entrada da descrição do produto
//
char ent_desc_produto (void) {
    char desc_produto;
    char* pont;
    pont = (char*) malloc(154*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Descreva o produto .                           |\n");
    printf("|                                                                         |\n");
    printf("|     Descrição do produto: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &desc_produto); 
    if (!valid_nome(pont)) {
       return 0; }
    return 1; }


//Entrada de quantidade de peças
//
char ent_quant (void) {
    char quant;
    char* pont;
    pont = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite a quantidade de peças .                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                          Quantidade de peças: ");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &quant);
    if (!valid_numeros_s(pont)) {
        return 0; }
    return 1; } 


//Entrada do valor de entrada da peça
//
char ent_valor_ent (void) {
    char valor;
    char* pont;
    pont = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Digite o valor de entrada da peça .                   |\n");
    printf("|                                                                         |\n");
    printf("|               Insira apenas números, incluindo centavos !               |\n");
    printf("|                                                                         |\n");
    printf("|                           Valor de compra: R$");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &valor); 
    return 1;}


//Entrada valor de saída da peça
//
char ent_valor_saida (void) {
    char valor;
    char* pont;
    pont = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Digite o valor de saída da peça .                    |\n");
    printf("|                                                                         |\n");
    printf("|               Insira apenas números, incluindo centavos !               |\n");
    printf("|                                                                         |\n");
    printf("|                           Valor de venda: R$");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &valor); 
    return 1;}


//Entrada id da venda
//
char ent_id_venda (void) {
    char id;
    char* pont;
    pont = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o ID da venda .                          |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &id);
    if (!valid_numeros_s(pont)) {
        return 0; } 
    return 1; }