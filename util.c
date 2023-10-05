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
#include <string.h>
#include "all.h"


/////
//Funções de validação:
//Valida opção:
//Verifica se a entrada informada esta dentro das opções possíveis(retorna "1") ou não(retorna "0")
//

int valid_op (char op, char op_max) {
    if (op >= '0' && op <= op_max) {
        return 1; } 
    else {
        return 0; } }

// ADAPTADA DE - VALIDAÇÃO PARA DIGITO - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para dígito:
//Verifica se o caractere é digito(retorna "1") ou não(retorna "0")
//

int valid_digt (char num) {
    if (num >= '0' && num <= '9') {
        return 1; } 
    else {
        return 0; } }

// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para números com tamanho exigido:
//Verifica se a string recebida contém apenas números no tamanho exigido(retorna "1") ou não(retorna "0")
//

int valid_numeros(char* variavel, int tam) {
    int tam_variavel;
    tam_variavel = strlen(variavel);
    if (tam_variavel != tam) {
        return 0; }
    for (int i = 0; i < tam; i++) {
        if (!valid_digt(variavel[i])) {
            return 0; } }
    return 1; }

// ADAPTADA - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para CPF:
//Verifica se a string recebida é um CPF válido(retorna "1") ou não(retorna "0")
//

int valid_cpf (char* cpf) {
    int i, j, digito1 = 0, digito2 = 0;
    if (strlen(cpf) != 11)
        return 0;
    else if((strcmp (cpf,"00000000000") == 0) || (strcmp (cpf,"11111111111") == 0) || (strcmp (cpf,"22222222222") == 0) ||
            (strcmp (cpf,"33333333333") == 0) || (strcmp (cpf,"44444444444") == 0) || (strcmp (cpf,"55555555555") == 0) ||
            (strcmp (cpf,"66666666666") == 0) || (strcmp (cpf,"77777777777") == 0) || (strcmp (cpf,"88888888888") == 0) ||
            (strcmp (cpf,"99999999999") == 0) || (strcmp (cpf,"12345678909") == 0))
        return 0; //se o CPF estiver dentre os mencionados acima, ele é considerado cpf de teste.
    else
    {
        //digito 1
        for (i = 0, j = 10; i < strlen (cpf) - 2; i++, j--) //multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        digito1 %= 11;
        if (digito1 < 2)
            digito1 = 0;
        else
            digito1 = 11 - digito1;
        if ((cpf[9] - 48) != digito1)
            return 0; //se o digito 1 não for o mesmo que o da validação CPF é inválido
        else
        //digito 2
        {
            for (i = 0, j = 11; i < strlen (cpf) - 1; i++, j--) //multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                    digito2 += (cpf[i] - 48) * j;
        digito2 %= 11;
        if (digito2 < 2)
            digito2 = 0;
        else
            digito2 = 11 - digito2;
        if ((cpf[10]-48) != digito2)
            return 0; } } //se o digito 2 não for o mesmo que o da validação CPF é inválido
    return 1; }

// AUTOR: EDUARDO EDSON // GIT: https://github.com/eduardoedson


//Limpa buffer
//

void limpa_buffer (void) {
    int entrada;
    do {
        entrada = fgetc(stdin); }
    while (entrada != EOF && entrada != '\n');

} // AUTOR: GUILHERME BERNAL /// STACKOVERFLOW: https://pt.stackoverflow.com/questions/9427/limpeza-do-buffer-do-teclado-ap%C3%B3s-scanf

//Verifica bissexto:
//Verifica se o ano for bissexto(divisível por 4, não divisível por ...
//100 ou divisível por 400)(retorna "1") ou não(retorna "0")
//

int verif_bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1; }
    else if (aa % 400 == 0) {
    return 1; }
    else {
        return 0; } }
// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Verifica data:
//Verifica se dia, mês e ano correspondem a uma data válida, inclusive
//em anos bissextos(retorna "1"), ou não (retorna "0")
//

int verif_data (int dd, int mm, int aa) {
  int maior_dia;
  if (aa < 0 || mm < 1 || mm > 12) {
    return 0; }
  if (mm == 2) {
    if (verif_bissexto(aa)) { 
        maior_dia = 29; }
    else { 
        maior_dia = 28; } }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maior_dia = 30; }
    else {
    maior_dia = 31; }
  if (dd < 1 || dd > maior_dia) {
    return 0; }
  return 1; } 

// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Valida data:
//Verifica se a string recebida corresponde a uma data válida (apenas dígitos
//e no formato: ddmmaaaa)(retorna "1") ou não(retorna "0")
//

int valid_data (char* data) {
  int tam, dia, mes, ano;
  tam = strlen (data);
  if (tam != 10) {
    return 0; }
  for (int i = 0; i < tam; i++) {
    if (!valid_digt(data[i]) && (data[2] != '/') && (data[5] != '/')) {
      return 0; } }
  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[3] - '0') * 10 + (data[4] - '0');
  ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + 
        (data[8] - '0') * 10 + (data[9] - '0');
  if (!verif_data(dia, mes, ano)) {
    return 0; }
  return 1; }

//AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para letra:
//Verifica se a letra recebida é caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
//

int valid_letra (char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        return 1; } 
    else {
        if (letra >= 'a' && letra <= 'z') {
            return 1; } 
        else {
            return 0; } } }

// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para nome:
//Verifica se todos os caracteres recebidos são caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
//

int valid_nome (char* nome) {
    for (int i=0; nome[i] != '\0'; i++) {
        if (!valid_letra(nome[i])) {
            return 0; } } 
        return 1; }

// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Valida E-mail
//Verifica se a string recebida corresponde a um email válido(retorna "1")
//ou não(retorna "0")
//
int valid_email(char* email) {
    char usuario[256], site[256], dominio[256];
    if (sscanf(email, "%[^@ \t\n]@%[^. \t\n].%3[^ \t\n]", usuario, site, dominio ) != 3 )
        return 0;
    return 1; }
// AUTOR: LACOBUS // STACKOVERFLOW: https://pt.stackoverflow.com/questions/310096/como-validar-um-e-mail-em-c