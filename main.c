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
#include "telas_princip.h"
#include "telas.h"
#include "ent_dados.h"
#include "menus.h"


/////
//Assinaturas das funções
void cad_admin(void);


/////
//Programa principal
int main(void) {
    int op;
    setlocale(LC_ALL, "Portuguese_Brazil");
    {
    tela_sobre();
    tela_apresentacao();
    do {
        op = menu_principal();
        switch (op) {
            case 1:
                do {
                    op = menu_administrativo();
                    switch (op) {
                        case 1:
                            cad_admin();
                            break;
                        case 2:
                            //pesquisar administrador
                            break;
                        case 3:
                            //relatorio administradores
                            break;
                        case 4:
                            //relatorio fornecedores
                            break;
                        case 5:
                            //relatorio produtos
                            break;
                        case 6:
                            //relatorio colaboradores
                            break;
                        case 7:
                            //relatorio clientes
                            break;
                        case 0:
                            break;
                    }   
                }   
                while (op != 0);
                break;
            case 2:
                op = menu_fornecedor();
                break;
            case 3:
                op = menu_produto();
                break;
            case 4:
                op = menu_colaborador();
                break;
            case 5:
                op = menu_cliente();
                break;
            case 0:
                 break;
            }
        }
    while (op != 0);
    return 0;
    }
}


//Cadastrar administrador
void cad_admin(void) {
    tela_cad_admin();
    ent_cpf();
    tela_cad_admin();
    ent_nome();
    tela_cad_admin();
    ent_cel();
    tela_cad_admin();
    ent_dat_nasc();
    tela_cad_admin();
    ent_email();
    tela_cad_admin();
    ent_cep();
    tela_cad_admin();
    ent_estado();
    tela_cad_admin();
    ent_cidade();
    tela_cad_admin();
    ent_bairro();
    tela_cad_admin();
    ent_rua();
    tela_cad_admin();
    ent_numero();
    tela_cad_admin();
    ent_complement();
    tela_cad_admin();
    ent_pont_referencia();
}