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


void modulo_colaborador (void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_colaborador();
        switch (op) {
            case 1:
                cad_colab();
                break;
            case 2:
                pesq_colab();
                break;
            case 0:
            break;
        }
    }
    while (op != 0);
}



//Cadastrar colaborador
void cad_colab (void){
    tela_cad_colab();
    ent_cpf();
    tela_cad_colab();
    ent_email();
    tela_cad_colab();
    ent_cel();
    tela_cad_colab();
    ent_nome();
    tela_cad_colab();
    ent_dat_nasc();
    tela_cad_colab();
    ent_cep();
    tela_cad_colab();
    ent_estado();
    tela_cad_colab();
    ent_cidade();
    tela_cad_colab();
    ent_bairro();
    tela_cad_colab();
    ent_rua();
    tela_cad_colab();
    ent_numero();
    tela_cad_colab();
    ent_complement();
    tela_cad_colab();
    ent_pont_referencia();
    tela_cad_colab();
}


//Pesquisar colaborador
void pesq_colab (void) {
    tela_pesq_colab();
    ent_cpf();
    dados_colab();
    getchar();
}