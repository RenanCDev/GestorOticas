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


void modulo_fornecedor (void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_fornecedor();
        switch (op) {
            case 1:
                cad_fornec();
                break;
            case 2:
                pesq_fornec();
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



//Função cadastrar fornecedor
void cad_fornec (void){
    tela_cad_fornec();
    ent_cnpj();
    tela_cad_fornec();
    ent_email();
    tela_cad_fornec();
    ent_cel();
    tela_cad_fornec();
    ent_nome();
    tela_cad_forn_ok();
}


//Função pesquisar fornecedor
void pesq_fornec (void) {
    tela_pesq_fornec();
    ent_cpf();
    dados_fornec();
    getchar();
}