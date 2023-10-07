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
//Programa principal
//
int main (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op0;
    char op_max = '7';
    do {
        do {
            op0 = menu_principal ();
            if (!valid_op(op0, op_max)) {
                tela_erro ();
                getchar (); } }     
        while (!valid_op(op0, op_max));
        switch (op0) {
            case '1':
            char b [] = "87";
            printf("%d\n",b[1]);
            getchar ();
            getchar ();
            getchar ();
                modulo_administrativo ();
                limpa_buffer ();
                break;
            case '2':
                modulo_fornecedor ();
                limpa_buffer ();
                break;
            case '3':
                modulo_produto ();
                limpa_buffer ();
                break;
            case '4':
                modulo_colaborador ();
                limpa_buffer ();
                break;
            case '5':
                modulo_cliente ();
                limpa_buffer ();
                break;
            case '6':
                modulo_venda ();
                limpa_buffer ();
                break;
            case '7':
                tela_sobre ();
                getchar ();
                getchar ();
                limpa_buffer ();
                break; } }
    while (op0 != '0');
    return 0; }