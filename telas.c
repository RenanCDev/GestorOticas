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
//Funções tela
//Tela banner
void tela_banner(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   #######                                #######                        |\n");
    printf("|   #         ##    ####  #      ######    #       #   # ######  ####     |\n");
    printf("|   #        #  #  #    # #      #         #        # #  #      #         |\n");
    printf("|   #####   #    # #      #      #####     #####     #   #####   ####     |\n");
    printf("|   #       ###### #  ### #      #         #         #   #           #    |\n");
    printf("|   #       #    # #    # #      #         #         #   #      #    #    |\n");
    printf("|   ####### #    #  ####  ###### ######    #######   #   ######  ####     |\n");   
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Telas módulo administrativo
//Tela cadastrar administrador
void tela_cad_admin(char *pont) {
    system("clear");
    tela_banner();
    pont = (char*) malloc(26*sizeof(char));
    printf ("%c\n", *pont);
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Cadastro administrador                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela pesquisar administrador
void tela_pesq_admin(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Pesquisar administrador                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório administradores
void tela_relat_admin(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Relatório administrador                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório fornecedores
void tela_relat_fornec(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Relatório fornecedor                           |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório produtos
void tela_relat_produto(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Relatório produtos                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório colaboradores
void tela_relat_colab(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Relatório colaboradores                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório clientes
void tela_relat_cliente(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Relatório clientes                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório clientes
void tela_relat_venda(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Relatório vendas                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Telas do módulo fornecedor
//Tela cadastrar fornecedor
void tela_cad_fornec(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Cadastro fornecedor                           |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela pesquisar fornecedor
void tela_pesq_fornec(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Pesquisar fornecedor                           |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela cadastrar produto
void tela_cad_produto(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Cadastro produto                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela pesquisar produto
void tela_pesq_produto(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Pesquisar produto                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela cadastrar colaborador
void tela_cad_colab(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Cadastro colaborador                           |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela pesquisar colaborador
void tela_pesq_colab(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Pesquisar colaborador                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela cadastrar cliente
void tela_cad_cliente(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Cadastro cliente                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela pesquisar produto
void tela_pesq_cliente(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Pesquisar cliente                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Telas para vendas
//Tela cadastrar venda
void tela_cad_venda(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Cadastro venda                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela pesquisar venda
void tela_pesq_venda(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Pesquisar venda                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela colaborador venda
void tela_venda_colab(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Venda - colaborador                           |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela produto venda
void tela_venda_produt(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Venda - produto                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela quantidade do produto venda
void tela_venda_q_prod(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Venda - Quantidade do produto                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela cliente venda
void tela_venda_cliente(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Venda - cliente                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela Erro
void tela_erro(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           ENTRADA INVÁLIDA !                            |\n");
    printf("|                                                                         |\n");
    printf("|                  Tecle ENTER para inserir nova entrada                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela cadastro concluído
void tela_cad_concl(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    CADASTRO CONCLUÍDO COM SUCESSO !                     |\n");
    printf("|                                                                         |\n");
    printf("|                         Tecle ENTER para seguir                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela venda concluída
void tela_vend_concl(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      VENDA CONCLUÍDO COM SUCESSO !                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Tecle ENTER para seguir                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}

//Informativos
//Informativo venda para cliente sem cadastro
void info_cliente_0(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   No caso do cliente não ter cadastro                   |\n");
    printf("|                                                                         |\n");
    printf("|          insira -> 0 <-, logo após tecle ENTER para prosseguir          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Telas Exemplos
//Tela exemplo cadastro administrador
void t_exe_cad_adm(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Administrador : Administrador Exemplo de eyes                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo relatório administrador
void t_exe_relat_adm(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Administrador : Administrador Exemplo de eyes                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 01 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 02 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 03 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 04 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 05 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo relatório administrador
void t_exe_relat_forn(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CNPJ : XX.XXX.XXX/0001-XX                                             |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo de eyes                               |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 01 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 02 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 03 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 04 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 05 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo relatório administrador
void t_exe_relat_prod(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : 0 00000 00000 0                                    |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo Eagle                                 |\n");
    printf("|                                                                         |\n");
    printf("|   Descrição do produto : **** ******* ******** *******                  |\n");
    printf("|                                                                         |\n");
    printf("|   Estoque atual : 9999                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 999,99 R$                                           |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 1888,88 R$                                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa do produto . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa do produto . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa do produto . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo relatório colaborador
void t_exe_relat_colab(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Colaborador : Colaborador Exemplo de eyes                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 01 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 02 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 03 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 04 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 05 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}

//Tela exemplo relatório cliente
void t_exe_relat_client(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Cliente : Cliente Exemplo de eyes                                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 01 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 02 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 03 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 04 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 05 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo cadastro fornecedor
void t_exe_cad_forn(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CNPJ : XX.XXX.XXX/0001-XX                                             |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo de eyes                               |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo cadastro pproduto
void t_exe_cad_prod(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : 0 00000 00000 0                                    |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo Eagle                                 |\n");
    printf("|                                                                         |\n");
    printf("|   Descrição do produto : **** ******* ******** *******                  |\n");
    printf("|                                                                         |\n");
    printf("|   Estoque atual : 9999                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 999,99 R$                                           |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 1888,88 R$                                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo cadastro colaborador
void t_exe_cad_colab(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Colaborador : Colaborador Exemplo de eyes                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo cadastro cliente
void t_exe_cad_cliente(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Cliente : Cliente Exemplo de eyes                                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela exemplo cadastro venda
void t_exe_cad_vend(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Colaborador CPF : XXX.XXX.XXX-XX                                      |\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : 0 00000 00000 0                                    |\n");
    printf("|                                                                         |\n");
    printf("|   Descrição do produto : **** ******* ******** *******                  |\n");
    printf("|                                                                         |\n");
    printf("|   Quantidade de peças : 5                                               |\n");
    printf("|                                                                         |\n");
    printf("|   Valor da peça / Valor total : 99,00 R$ x 5 = 495,00 R$                |\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : 0 00000 00000 0                                    |\n");
    printf("|                                                                         |\n");
    printf("|   Descrição do produto : **** ******* ******** *******                  |\n");
    printf("|                                                                         |\n");
    printf("|   Quantidade de peças : 10                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Valor da peça / Valor total : 1000,00 R$ x 5 = 10.000,00 R$           |\n");
    printf("|                                                                         |\n");
    printf("|   Valor total da venda : 10.495,00 R$                                   |\n");
    printf("|                                                                         |\n");
    printf("|   Cliente CPF : XXX.XXX.XXX-XX                                          |\n");
    printf("|                                                                         |\n");
    printf("|   Metodo de pagamento : PIX                                             |\n");
    printf("|                                                                         |\n");
    printf("|   ID da venda : XXXXXXXXXX-XX-XX                                        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}