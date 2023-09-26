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
            default:
                tela_erro();
                break;
        }
    }
    while (op != 0);
}



//Função para cadastrar colaborador
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
    t_exe_cad_colab();
    tela_cad_colab_ok();
}


//Função para pesquisar colaborador
void pesq_colab (void) {
    tela_pesq_colab();
    ent_cpf();
    t_exe_cad_colab();
    getchar();
}