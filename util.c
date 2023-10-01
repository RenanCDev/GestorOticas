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
int valid_op (int op, int op_max) {
    if (op >= 0 && op <= op_max) {
        return 1; } 
    else {
        return 0; } }


//Validação para dígito:
//Verifica se o caractere é digito(retorna "1") ou não(retorna "0")
//
int valid_digt (char num) {
    if (num >= '0' && num <= '9') {
        return 1; } 
    else {
        return 0; } }



//Validação para número de celular:
//Verifica se a string recebida é um numero de celular(retorna "1") ou não(retorna "0")
//
int valid_cel(char* cel) {
    int tam_cel;
    tam_cel = strlen(cel);
    if (tam_cel != 11) {
        return 0;
    }
    for (int i = 0; i < tam_cel; i++) {
        if (!valid_digt(cel[i])) {
            return 0;
        }
    }
    return 1;
}

//Validação para letra:
//Verifica se a letra recebida é caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
//
int valid_letra(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        return 1;
    } 
    else {
        if (letra >= 'a' && letra <= 'z') {
            return 1;
        } 
        else {
            return 0;
        }
    }
}


//Validação para nome:
//Verifica se todos os caracteres recebidos são caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
//
int valid_nome(char* nome) {
    for (int i=0; nome[i]!='\0'; i++) {
        if (!valid_letra(nome[i])) {
            return 0;
        }
    }
    return 1;
}