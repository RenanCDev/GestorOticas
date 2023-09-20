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

///
//Entrada de dados
//Dados das pessoas físicas
//CPF
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


//Reentrada CPF
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


//Email
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


//Reentrada email
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


//Cel
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


//Reentrada cel
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


//Nome
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


//Reentrada nome
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


//Data de nascimento
void ent_dat_nasc(void) {
    char dat_nasc;
    char* pont;
    pont = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Digite a data de nascimento :                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &dat_nasc);
    //return dat_nasc;
}


//Reentrada data de nascimento
void re_ent_dat_nasc(void) {
    char dat_nasc;
    char* pont;
    pont = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Data de nascimento inválida ! ! !                    |\n");
    printf("|                                                                         |\n");
    printf("|                      Digite a data de nascimento :                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    scanf("%c", &dat_nasc);
    //return dat_nasc;
}


//Dados das pessoa jurídicas
//Entrada CNPJ
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


//Reentrada CNPJ
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


//Entrada inscrição estadual
void ent_insc_estadual(void) {
    char insc_estadual;
    char* pont;
    pont = (char*) malloc(9*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Digite a IE :                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &insc_estadual);
    //return insc_estadual;
}


//Reentrada inscrição estadual
void re_ent_insc_estadual(void) {
    char insc_estadual;char* pont;
    pont = (char*) malloc(9*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            IE inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                              Digite a IE :                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &insc_estadual);
    //return insc_estadual;
}


//Dados dos endereços
//Entrada CEP
void ent_cep(void) {
    char cep;
    char* pont;
    pont = (char*) malloc(9*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o cep :                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cep);
    //return cep;
}


//Reentrada CEP
void re_ent_cep(void) {
    char cep;
    char* pont;
    pont = (char*) malloc(9*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CEP inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o cep :                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cep);
    //return cep;
}


//Estado
void ent_estado(void) {
    char estado;
    char* pont;
    pont = (char*) malloc(15*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o estado :                            |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &estado);
    //return estado;
}


//Reentrada estado
void re_ent_estado(void) {
    char estado;
    char* pont;
    pont = (char*) malloc(15*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Estado inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o estado :                            |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &estado);
    //return estado;
}


//Cidade
void ent_cidade(void) {
    char cidade;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite a cidade :                            |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cidade);
    //return cidade;
}


//Reentrada cidade
void re_ent_cidade(void) {
    char cidade;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Cidade inválida ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite a cidade :                            |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &cidade);
    //return cidade;
}


//Bairro
void ent_bairro(void) {
    char bairro;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o bairro :                            |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &bairro);
    //return bairro;
}


//Reentrada bairro
void re_ent_bairro(void) {
    char bairro;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Bairro inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o bairro :                            |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &bairro);
    //return bairro;
}


//Rua
void ent_rua(void) {
    char rua;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite a rua :                              |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &rua);
    //return rua;
}


//Reentrada rua
void re_ent_rua(void) {
    char rua;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Rua inválida ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite a rua :                              |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &rua);
    //return rua;
}


//Entrada número
void ent_numero(void) {
    char numero;
    char* pont;
    pont = (char*) malloc(10*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o número da residência:                      |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &numero);
}


//Reentrada número
void re_ent_numero(void) {
    char numero;
    char* pont;
    pont = (char*) malloc(10*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Número inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o número da residência:                      |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &numero);
    //return numero;
}


//Entrada complemento
void ent_complement(void) {
    char complemento;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o complemento :                          |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &complemento);
    //return complemento;
}


//Reentrada complemento
void re_ent_complement(void) {
    char complemento;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Complemento inválido ! ! !                        |\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o complemento :                          |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &complemento);
    //return complemento;
}


//Entrada ponto de referência
void ent_pont_referencia(void) {
    char pont_referencia;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o ponto de referência :                      |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &pont_referencia);
    //return pont_referencia;
}


//Reentrada ponto de referência
void re_ent_pont_referencia(void) {
    char pont_referencia;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Ponto de referência inválido ! ! !                    |\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o ponto de referência :                      |\n");
    printf("|                                                                         |\n");
    scanf("%[0-9A-Za-z@._-]", pont);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    scanf("%c", &pont_referencia);
    //return pont_referencia;
}


//Dados dos produtos
//Código de barras
void ent_cod_barras(void) {
    char cod_barras;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
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


//Reentrada de código de barras
void re_ent_cod_barras(void) {
    char cod_barras;
    char* pont;
    pont = (char*) malloc(30*sizeof(char));
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
    //return vod_barras;
}


//Entrada descrição do produto
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


