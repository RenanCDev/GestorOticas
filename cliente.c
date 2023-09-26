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


void modulo_cliente(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_cliente();
        switch (op) {
            case 1:
                cad_cliente();
                break;
            case 2:
                pesq_cliente();
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



//Função  para cadastrar clienteorador
void cad_cliente (void){
    tela_cad_cliente();
    ent_cpf();
    tela_cad_cliente();
    ent_email();
    tela_cad_cliente();
    ent_cel();
    tela_cad_cliente();
    ent_nome();
    tela_cad_cliente();
    t_exe_cad_cliente();
    tela_cad_concl();
}


//Função para pesquisar clienteorador
void pesq_cliente (void) {
    tela_pesq_cliente();
    ent_cpf();
    t_exe_cad_cliente();
    getchar();
}