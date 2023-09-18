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
#include "ent_dados.h"


///
//Entrada de dados
//Dados das pessoas físicas
//CPF
void ent_cpf(void) {
    char cpf;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cpf;
}


//Reentrada CPF
void re_ent_cpf(void) {
    char cpf;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CPF inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cpf;
}


//Email
void ent_email(void) {
    char email;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o email :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return email;
}


//Reentrada email
void re_ent_email(void) {
    char email;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Email inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o email :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return email;
}


//Cel
void ent_cel(void) {
    char cel;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cel;
}


//Reentrada cel
void re_ent_cel(void) {
    char cel;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Celular inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cel;
}


//Nome
void ent_nome(void) {
    char nome;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return nome;
}


//Reentrada nome
void re_ent_nome(void) {
    char nome;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Nome inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return nome;
}


//Data de nascimento
void ent_dat_nasc(void) {
    char dat_nasc;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Digite a data de nascimento :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return dat_nasc;
}


//Reentrada data de nascimento
void re_ent_dat_nasc(void) {
    char dat_nasc;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Data de nascimento inválida ! ! !                    |\n");
    printf("|                                                                         |\n");
    printf("|                      Digite a data de nascimento :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return dat_nasc;
}


//Dados das pessoa jurídicas
//Entrada CNPJ
void ent_cnpj(void) {
    char cnpj;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CNPJ :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cnpj;
}


//Reentrada CNPJ
void re_ent_cnpj(void) {
    char cnpj;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CNPJ inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CNPJ :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cnpj;
}


//Entrada inscrição estadual
void ent_insc_estadual(void) {
    char insc_estadual;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Digite a IE :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return insc_estadual;
}


//Dados dos endereços
//Entrada CEP
void ent_cep(void) {
    char cep;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o cep :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cep;
}


//Reentrada CEP
void re_ent_cep(void) {
    char cep;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CEP inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o cep :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cep;
}


//Estado
void ent_estado(void) {
    char estado;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o estado :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return estado;
}


//Reentrada estado
void re_ent_estado(void) {
    char estado;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Estado inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o estado :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return estado;
}


//Cidade
void ent_cidade(void) {
    char cidade;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite a cidade :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cidade;
}


//Reentrada cidade
void re_ent_cidade(void) {
    char cidade;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Cidade inválida ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite a cidade :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cidade;
}


//Bairro
void ent_bairro(void) {
    char bairro;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o bairro :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return bairro;
}


//Reentrada bairro
void re_ent_bairro(void) {
    char bairro;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Bairro inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o bairro :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return bairro;
}


//Rua
void ent_rua(void) {
    char rua;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite a rua :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return rua;
}


//Reentrada rua
void re_ent_rua(void) {
    char rua;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Rua inválida ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite a rua :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return rua;
}


//Entrada número
void ent_numero(void) {
    char numero;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o número :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return numero;
}


//Reentrada número
void re_ent_numero(void) {
    char numero;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Número inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o número :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return numero;
}


//Entrada complemento
void ent_complement(void) {
    char complemento;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o complemento :                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return complemento;
}


//Reentrada complemento
void re_ent_complement(void) {
    char complemento;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Complemento inválido ! ! !                        |\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o complemento :                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return complemento;
}


//Entrada ponto de referência
void ent_pont_referencia(void) {
    char pont_referencia;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o ponto de referência :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return pont_referencia;
}


//Reentrada ponto de referência
void re_ent_pont_referencia(void) {
    char pont_referencia;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Ponto de referência inválido ! ! !                    |\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o ponto de referência :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return pont_referencia;
}


//Reentrada inscrição estadual
void re_ent_insc_estadual(void) {
    char insc_estadual;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            IE inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                              Digite a IE :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return insc_estadual;
}


//Dados dos produtos
//Código de barras
void ent_cod_barras(void) {
    char cod_barras;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras :                       |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cod_barras;
}


//Reentrada de código de barras
void re_ent_cod_barras(void) {
    char cod_barras;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Código de barras inválido ! ! !                     |\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras :                       |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return vod_barras;
}