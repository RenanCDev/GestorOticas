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
#include <string.h>
#include <locale.h>
#include <unistd.h>
#include "../util/all.h"


//////
//Menus
//
//Menu principal
//
char menu_principal (void) {
    char op [50];
    char op_max = '7';
    do {
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|                             Menu principal                              |\n");
        printf("|                                                                         |\n");
        printf("|                           1 -> Administrativo                           |\n");
        printf("|                                                                         |\n");
        printf("|                            2 -> Fornecedores                            |\n");
        printf("|                                                                         |\n");
        printf("|                              3 -> Produtos                              |\n");
        printf("|                                                                         |\n");
        printf("|                           4 -> Colaboradores                            |\n");
        printf("|                                                                         |\n");
        printf("|                              5 -> Clientes                              |\n");
        printf("|                                                                         |\n");
        printf("|                               6 -> Vendas                               |\n");
        printf("|                                                                         |\n");
        printf("|                          7 -> Sobre o programa                          |\n");
        printf("|                                                                         |\n");
        printf("|                          0 -> Fechar programa                           |\n");
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        scanf("%s", &*op);
        if ((valid_entrada(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ();
            return '9';
        } 
    }
    while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Menu administrativo
//
char menu_administrativo (void) {
    char op [50];
    char op_max = '3';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|                              Administrador                              |\n");
        printf("|                                                                         |\n");
        printf("|                      1 -> Cadastrar administrador                       |\n");
        printf("|                                                                         |\n");
        printf("|                       2 -> Pesquisar admnistrador                       |\n");
        printf("|                                                                         |\n");
        printf("|                             3 -> Relatórios                             |\n");
        printf("|                                                                         |\n");
        printf("|                      0 -> Voltar ao menu anterior                       |\n");
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        scanf("%s", &*op);
        if ((valid_entrada(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ();
            return '9';
        } 
    }
    while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Menu relatórios
//
char menu_relatorio (void) {
    char op [50];
    char op_max = '6';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|                             Administrativo                              |\n");
        printf("|                                                                         |\n");
        printf("|                     1 -> Relatório administradores                      |\n");
        printf("|                                                                         |\n");
        printf("|                       2 -> Relatório fornecedores                       |\n");
        printf("|                                                                         |\n");
        printf("|                         3 -> Relatório produtos                         |\n");
        printf("|                                                                         |\n");
        printf("|                      4 -> Relatório colaboradores                       |\n");
        printf("|                                                                         |\n");
        printf("|                         5 -> Relatório clientes                         |\n");
        printf("|                                                                         |\n");
        printf("|                          6 -> Relatório vendas                          |\n");
        printf("|                                                                         |\n");
        printf("|                      0 -> Voltar ao menu anterior                       |\n");
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        scanf("%s", &*op);
        if ((valid_entrada(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ();
            return '9';
        } 
    }
    while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Menu secundario universal para 3 opções
//
char menu_sec_uni (char* menu, char* procurar, char* pesquisar) {
    char op [50];
    char op_max = '2';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto(menu, 73, 0));
        printf("|                                                                         |\n");
        printf("|                        1 -> %s |\n", centralizar_texto(procurar, 43, -1));
        printf("|                                                                         |\n");
        printf("|                        2 -> %s |\n", centralizar_texto(pesquisar, 43, -1));
        printf("|                                                                         |\n");
        printf("|                      0 -> Voltar ao menu anterior                       |\n");
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        scanf("%s", &*op);
        if ((valid_entrada(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ();
            return '9';
        } 
    }
    while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Adiciona itens a uma venda
//
char menu_item_venda (void) {
    char op [50];
    char op_max = '2';
    do {
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|                       1 -> Acrescentar novo item                        |\n");
        printf("|                                                                         |\n");
        printf("|                       2 -> Prosseguir com a venda                       |\n");
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        scanf("%s", &*op);
        if ((valid_entrada(op)) && (valid_op(op[0], op_max)) && (op[0] != '0')) {
            return op[0]; 
        } 
        else {
            return '9';
        } 
    }
    while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Forma de pagamento
//
char menu_form_pag (void) {
    char op [50];
    char op_max = '4';
    do {
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|                           Forma de pagamento                            |\n");
        printf("|                                                                         |\n");
        printf("|                              1 -> Dinheiro                              |\n");
        printf("|                                                                         |\n");
        printf("|                                2 -> PIX                                 |\n");
        printf("|                                                                         |\n");
        printf("|                         3 -> Cartão de crédito                          |\n");
        printf("|                                                                         |\n");
        printf("|                          4 -> Cartão de débito                          |\n");
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        scanf("%s", &*op);
        if ((valid_entrada(op)) && (valid_op(op[0], op_max)) && (op[0] != '0')) {
            return op[0]; 
        } 
        else {
            tela_erro ();
            return '9';
        } 
    }
    while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Tela sobre o programa
//
void tela_sobre (void) {
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|               Universidade Federal do Rio Grande do Norte               |\n");
    printf("|                                                                         |\n");
    printf("|                   Centro de Ensino Superior do Seridó                   |\n");
    printf("|                                                                         |\n");
    printf("|             Aluno -- Renan Missias Rodrigues Alves da Costa             |\n");
    printf("|                                                                         |\n");
    printf("|                    Disciplina DCT1106 -- Programação                    |\n");
    printf("|                                                                         |\n");
    printf("|                  Projeto Sistema de Gestão para Óticas                  |\n");
    printf("|                                                                         |\n");
    printf("|               Developed by @RenanMRb - since august, 2023               |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");  
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|         O projeto EAGLE EYES é um projeto de gestão de óticas .         |\n");
    printf("|                                                                         |\n");
    printf("|       Tem o objetivo avaliar o desenvolvedor do segundo período .       |\n");
    printf("|                                                                         |\n");
    printf("|              Avaliador - Doutor Flavius da Luz e Gorgonio               |\n");
    printf("|                                                                         |\n");
    printf("| Disciplina DCT1106 Programação -- Bacharelado de Sistemas de Informação |\n");
    printf("|                                                                         |\n");
    printf("|                             > > ATENÇÃO < <                             |\n");
    printf("|                                                                         |\n");
    printf("|                   Este NÃO é um programa comercial .                    |\n");
    printf("|                                                                         |\n");
    printf("|       O desenolvedor não se responsabiliza por quaisquer danos !        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                        Tecle ENTER para retornar                        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
    limpa_buffer ();
}