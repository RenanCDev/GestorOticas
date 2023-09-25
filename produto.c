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
#include "menus.h"
#include "telas.h"
#include "ent_dados.h"
#include "produto.h"


void modulo_produto (void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_produto();
        switch (op) {
            case 1:
                cad_produto();
                break;
            case 2:
                pesq_produto();
                break;
            case 0:
                break;
            default:
                tela_erro();
                break;
        }
    }
    while (op != 0);
}


//Função cadastrar produto
void cad_produto (void){
    tela_cad_produto();
    ent_cod_barras();
    tela_cad_produto();
    ent_desc_produto();
    tela_cad_prod_ok();
}


//Função pesquisar produto
void pesq_produto (void) {
    tela_pesq_produto();
    ent_cod_barras();
    dados_produto();
    getchar();
}