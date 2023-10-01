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


//////
//Funções menus
//Função menu principal
char menu_principal (void) {
    char op;
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Menu principal                              |\n");
    printf("|                                                                         |\n");
    printf("|                         1 -> Administrativo <-                          |\n");
    printf("|                                                                         |\n");
    printf("|                          2 -> Fornecedores <-                           |\n");
    printf("|                                                                         |\n");
    printf("|                            3 -> Produtos <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                          4 -> Colaboradores <-                          |\n");
    printf("|                                                                         |\n");
    printf("|                            5 -> Clientes <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                             6 -> Vendas <-                              |\n");
    printf("|                                                                         |\n");
    printf("|                        7 -> Sobre o programa <-                         |\n");
    printf("|                                                                         |\n");
    printf("|                         0 -> Fechar programa <-                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu administrativo
char menu_administrativo (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Administrativo                              |\n");
    printf("|                                                                         |\n");
    printf("|                     1 -> Cadastrar administrador <-                     |\n");
    printf("|                                                                         |\n");
    printf("|                     2 -> Pesquisar admnistrador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                           3 -> Relatórios <-                            |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu relatórios
char menu_relatorio (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Administrativo                              |\n");
    printf("|                                                                         |\n");
    printf("|                    1 -> Relatório administradores <-                    |\n");
    printf("|                                                                         |\n");
    printf("|                     2 -> Relatório fornecedores <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                       3 -> Relatório produtos <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     4 -> Relatório colaboradores <-                     |\n");
    printf("|                                                                         |\n");
    printf("|                       5 -> Relatório clientes <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        6 -> Relatório vendas <-                         |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu fornecedor
char menu_fornecedor (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Fornecedores                               |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar fornecedor <-                       |\n");
    printf("|                                                                         |\n");
    printf("|                      2 -> Pesquisar fornecedor <-                       |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu produto
char menu_produto (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                                Produtos                                 |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar produto <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar produto <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu colaborador
char menu_colaborador (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Colaboradores                              |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar colaborador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                      2 -> Pesquisar colaborador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu cliente
char menu_cliente (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                                Clientes                                 |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função menu venda
char menu_venda (void) {
    char op;
    system("clear");
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                                 Vendas                                  |\n");
    printf("|                                                                         |\n");
    printf("|                         1 -> Cadastrar venda <-                         |\n");
    printf("|                                                                         |\n");
    printf("|                         2 -> Pesquisar venda <-                         |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função adicionar item a venda
char menu_item_venda (void) {
    char op;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Acrescentar novo item <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                     2 -> Prosseguir com a venda <-                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Função forma de pagamento
char menu_form_pag (void) {
    char op;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Forma de pagamento                            |\n");
    printf("|                                                                         |\n");
    printf("|                            1 -> Dinheiro <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                               2 -> PIX <-                               |\n");
    printf("|                                                                         |\n");
    printf("|                        3 -> Cartão de crédito <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        4 -> Cartão de débito <-                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%c", &op);
    return op; }


//Tela sobre o programa
void tela_sobre (void) {
    system("clear");
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
    printf("|            Tem o objetivo de gerir e administrar uma ótica .            |\n");
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
    printf("+=========================================================================+\n"); }