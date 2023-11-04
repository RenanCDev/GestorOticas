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