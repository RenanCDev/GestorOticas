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
        }
    }
    while (op != 0);
}



//Cadastrar fornecedor
void cad_fornec (void){
    tela_cad_fornec();
    ent_cnpj();
    tela_cad_fornec();
    ent_insc_estadual();
    tela_cad_fornec();
    ent_email();
    tela_cad_fornec();
    ent_cel();
    tela_cad_fornec();
    ent_nome_fantas();
    tela_cad_fornec();
    ent_raz_social();
    tela_cad_fornec();
    ent_cep();
    tela_cad_fornec();
    ent_estado();
    tela_cad_fornec();
    ent_cidade();
    tela_cad_fornec();
    ent_bairro();
    tela_cad_fornec();
    ent_rua();
    tela_cad_fornec();
    ent_numero();
    tela_cad_fornec();
    ent_complement();
    tela_cad_fornec();
    ent_pont_referencia();
    tela_cad_forn_t();
}


//Pesquisar fornecedor
void pesq_fornec (void) {
    tela_pesq_fornec();
    ent_cpf();
    dados_fornec();
    getchar();
}