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
void tela_cad_admin(void) {
    system("clear");
    tela_banner();
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


//Telas de desenvolvimento
//Pesquisar administrador em desenvolvimento
void dados_admin(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                Aqui aparecerá os dados do administrador                 |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Relatório administrador em desenvolvimento
void dados_relat_admin(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|          Aqui aparecerá os dados do relatório do administrador          |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Relatório fornecedor em desenvolvimento
void dados_relat_fornec(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|           Aqui aparecerá os dados do relatório do fornecedor            |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Relatório produto em desenvolvimento
void dados_relat_produto(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|             Aqui aparecerá os dados do relatório do produto             |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Relatório colaborador em desenvolvimento
void dados_relat_colab(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|           Aqui aparecerá os dados do relatório do colaborador           |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Relatório cliente em desenvolvimento
void dados_relat_cliente(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|             Aqui aparecerá os dados do relatório do cliente             |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Pesquisar fornecedor em desenvolvimento
void dados_fornec(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                  Aqui aparecerá os dados do fornecedor                  |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Pesquisar produto em desenvolvimento
void dados_produto(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Aqui aparecerá os dados do produto                    |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Pesquisar colaborador em desenvolvimento
void dados_colab(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                 Aqui aparecerá os dados do colaborador                  |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}

//Pesquisar cliente em desenvolvimento
void dados_cliente(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Aqui aparecerá os dados do cliente                    |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela cadastro administrador ok em desenvolvimento
void tela_cad_adm_ok(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|            Aqui aparecerá o cadastro do administrador . . .             |\n");
    printf("|                                                                         |\n");
    printf("|                    Cadastro concluido com sucesso !                     |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela cadastro fornecedor ok em desenvolvimento
void tela_cad_forn_ok(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|              Aqui aparecerá o cadastro do fornecedor . . .              |\n");
    printf("|                                                                         |\n");
    printf("|                    Cadastro concluido com sucesso !                     |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela cadastro produto ok em desenvolvimento
void tela_cad_prod_ok(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|               Aqui aparecerá o cadastro do produto . . .                |\n");
    printf("|                                                                         |\n");
    printf("|                    Cadastro concluido com sucesso !                     |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela cadastro colaborador ok em desenvolvimento
void tela_cad_colab_ok(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|             Aqui aparecerá o cadastro do colaborador . . .              |\n");
    printf("|                                                                         |\n");
    printf("|                    Cadastro concluido com sucesso !                     |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela cadastro cliente ok em desenvolvimento
void tela_cad_cliente_ok(void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|               Aqui aparecerá o cadastro do cliente . . .                |\n");
    printf("|                                                                         |\n");
    printf("|                    Cadastro concluido com sucesso !                     |\n");
    printf("|                                                                         |\n");
    printf("|                          EM DESENVOLVIMENTO!!!                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}