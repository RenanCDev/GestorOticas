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
//Funções de entrada de dados
//entrada do CPF
void ent_cpf(void) {
    char cpf;
    char* pont;
    pont = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cpf);
    //return cpf;
}


//Reentrada do CPF
void re_ent_cpf(void) {
    char cpf;
    char* pont;
    pont = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CPF inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cpf);
    //return cpf;
}


//Entrada do email
void ent_email(void) {
    char email;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o email :                             |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &email);
    //return email;
}


//Reentrada do email
void re_ent_email(void) {
    char email;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Email inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o email :                             |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &email);
    //return email;
}


//Entrada do celular
void ent_cel(void) {
    char cel;
    char* pont;
    pont = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular :                            |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cel);
    //return cel;
}


//Reentrada do celular
void re_ent_cel(void) {
    char cel;
    char* pont;
    pont = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Celular inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular :                            |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &cel);
    //return cel;
}


//Entrada do nome
void ent_nome(void) {
    char nome;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome :                             |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &nome);
    //return nome;
}


//Reentrada do nome
void re_ent_nome(void) {
    char nome;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Nome inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome :                             |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &nome);
    //return nome;
}


//Entrada do CNPJ
void ent_cnpj(void) {
    char cnpj;
    char* pont;
    pont = (char*) malloc(14*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CNPJ :                             |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cnpj);
    //return cnpj;
}


//Reentrada do CNPJ
void re_ent_cnpj(void) {
    char cnpj;
    char* pont;
    pont = (char*) malloc(14*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CNPJ inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CNPJ :                             |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cnpj);
    //return cnpj;
}


//Entrada do código de barras
void ent_cod_barras(void) {
    char cod_barras;
    char* pont;
    pont = (char*) malloc(44*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras :                       |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cod_barras);
    //return cod_barras;
}


//Reentrada do código de barras
void re_ent_cod_barras(void) {
    char cod_barras;
    char* pont;
    pont = (char*) malloc(44*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Código de barras inválido ! ! !                     |\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras :                       |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cod_barras);
    //return cod_barras;
}


//Entrada da descrição do produto
void ent_desc_produto(void) {
    char desc_produto;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Descreva o produto :                           |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &desc_produto);
    //return desc_produto;
}

