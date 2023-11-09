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
//Funções de entrada de dados
//
//entrada do CPF
//
char* ent_cpf (void) {
    char* cpf;
    cpf = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF .                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 11 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|          No caso do cadastro zero insira 11 caracters zeros .           |\n");
    printf("|                                                                         |\n");
    printf("|                            CPF: ");
    scanf("%[ 0-9A-Za-z@._- ]", cpf);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cpf;
}


//Entrada do email
//
char* ent_email (void) {
    char* email;
    email = (char*) malloc(40*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o E-mail .                            |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 40 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                   E-mail: ");
    scanf("%[0-9A-Za-z@._-]", email);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return email;
}


//Entrada do celular
//
char* ent_cel (void) {
    char* cel;
    cel = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular .                            |\n");
    printf("|                                                                         |\n");
    printf("|                Insira apenas números, incluindo o ddd !                 |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 11 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                            Cel.: ");
    scanf("%[0-9A-Za-z@._-]", cel);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cel; 
}


//Entrada do nome
//
char* ent_nome (void) {
    char* nome;
    nome = (char*) malloc(40*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome .                             |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 40 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|               Nome: ");
    scanf(" %50[^\n]", nome);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return nome; 
}


//Entrada do CNPJ
//
char* ent_cnpj (void) {
    char* cnpj;
    cnpj = (char*) malloc(14*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Digite o CNPJ do fornecedor :                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 14 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|          No caso do cadastro zero insira 14 caracters zeros .           |\n");
    printf("|                                                                         |\n");
    printf("|                          CNPJ: ");
    scanf("%[0-9A-Za-z@._-]", cnpj);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cnpj; 
}


//Entrada do código de barras
//
char* ent_cod_barras (void) {
    char* cod_barras;
    cod_barras = (char*) malloc(13*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras .                       |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 13 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|          No caso do cadastro zero insira 13 caracters zeros .           |\n");
    printf("|                                                                         |\n");
    printf("|                     Código de barras: ");
    scanf("%[0-9A-Za-z@._-]", cod_barras);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cod_barras; 
}


//Entrada da descrição do produto
//
char* ent_desc_produto (void) {
    char* desc;
    desc = (char*) malloc(40*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Descreva o produto .                           |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 40 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|     Descrição do produto: ");
    scanf("%[0-9A-Za-z@._-]", desc);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return desc; 
}


//Entrada de quantidade de peças
//
char* ent_quant (void) {
    char* quant;
    quant = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite a quantidade de peças .                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                          Quantidade de peças: ");
    scanf("%[0-9A-Za-z@._-]", quant);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return quant; 
} 


//Entrada do valor de entrada da peça
//
char* ent_valor_ent (void) {
    char* valor;
    valor = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Digite o valor de entrada da peça .                   |\n");
    printf("|                                                                         |\n");
    printf("|               Insira apenas números, incluindo centavos !               |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                           Valor de compra: R$ ");
    scanf("%[0-9A-Za-z@._-]", valor);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
    return valor; 
}


//Entrada valor de saída da peça
//
char* ent_valor_saida (void) {
    char* valor;
    valor = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Digite o valor de saída da peça .                    |\n");
    printf("|                                                                         |\n");
    printf("|               Insira apenas números, incluindo centavos !               |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                           Valor de venda: R$ ");
    scanf("%[0-9A-Za-z@._-]", valor);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return valor; 
}


//Entrada id da venda
//
char* ent_id_venda (void) {
    char* id;
    id = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Digite o ID .                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                                  ID :");
    scanf("%[0-9A-Za-z@._-]", id);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return id; 
}