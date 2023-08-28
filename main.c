/*  +=========================================================================+
    |                                                                         |
    |             Universidade Federal do Rio Grande do Norte                 |
    |                                                                         |
    |                 Centro de Ensino Superior do Seridó                     |
    |                                                                         |
    |           Aluno -- Renan Missias Rodrigues Alves da Costa               |
    |                                                                         |
    |                  Disciplina DCT1106 -- Programação                      |
    |                                                                         |
    |                Projeto Sistema de Gestão para Óticas                    |
    |                                                                         |
    |             Developed by @RenanMRb - since august, 2023                 |
    |                                                                         |
    +=========================================================================+ */


#include <stdio.h>
#include <stdlib.h>


/////
//Assinaturas das funções
void tela_apresentacao(void);
void tela_sobre(void);
int tela_menu_principal(int op);
int tela_administrativo(int op);
int tela_fornecedor(int op);
int tela_produto(int op);
int tela_colaborador(int op);
int tela_cliente(int op);


/////
//Programa principal
int main(void) {
    int op;
    tela_apresentacao();
    tela_sobre();
    tela_menu_principal(op);
    tela_administrativo(op);
    tela_fornecedor(op);
    tela_produto(op);
    tela_colaborador(op);
    tela_cliente(op);
    return 0;
}


/////
//Funções telas
//Apresentação
void tela_apresentacao(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|             Universidade Federal do Rio Grande do Norte                 |\n");
    printf("|                                                                         |\n");
    printf("|                 Centro de Ensino Superior do Seridó                     |\n");
    printf("|                                                                         |\n");
    printf("|           Aluno -- Renan Missias Rodrigues Alves da Costa               |\n");
    printf("|                                                                         |\n");
    printf("|                  Disciplina DCT1106 -- Programação                      |\n");
    printf("|                                                                         |\n");
    printf("|                Projeto Sistema de Gestão para Óticas                    |\n");
    printf("|                                                                         |\n");
    printf("|             Developed by @RenanMRb - since august, 2023                 |\n");
    printf("|                                                                         |\n");
    printf("+========================================================================+\n");
    getchar();  
}


//Sobre
void tela_sobre(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|         O projeto EAGLE EYES é um projeto de gestão de óticas .         |\n");
    printf("|            Tem o objetivo de gerir e administrar uma ótica .            |\n");
    printf("|                                                                         |\n");
    printf("|                            > > ATENÇÃO < <                              |\n");
    printf("|                                                                         |\n");
    printf("|                  Este NÃO é um programa comercial .                     |\n");
    printf("|      O desenolvedor não se responsabiliza por quaisquer danos !         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();

}


//Menu principal
int tela_menu_principal(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Menu principal - EAGLE EYES                       |\n");
    printf("|                                                                         |\n");
    printf("|                         1 -> Administrativo <-                          |\n");
    printf("|                          2 -> Fornecedores <-                           |\n");
    printf("|                            3 -> Produtos <-                             |\n");
    printf("|                          4 -> Colaboradores <-                          |\n");
    printf("|                            5 -> Clientes <-                             |\n");
    printf("|                         0 -> Fechar programa <-                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    getchar();
    return op;
}


//Caminho administrativo
int tela_administrativo(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Administrativo - EAGLE EYES                       |\n");
    printf("|                                                                         |\n");
    printf("|                     1 -> Cadastrar administrador <-                     |\n");
    printf("|                     2 -> Pesquisar admnistrador <-                      |\n");
    printf("|                    3 -> Relatorio administradores <-                    |\n");
    printf("|                     4 -> Relatorio fornecedores <-                      |\n");
    printf("|                       5 -> Relatorio produtos <-                        |\n");
    printf("|                     6 -> Relatorio colaboradores <-                     |\n");
    printf("|                       7 -> Relatorio clientes <-                        |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    getchar();
    return op;
}


//Cadastrar administrador
int cpf, dat_nacimento, cel;
char nome, endereco, email;
int cadastro_cliente() {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Cliente - Cadastro - EAGLE EYES                     |\n");
    printf("|                                                                         |\n");
    printf("|                     1 -> Cadastrar administrador <-                     |\n");
    printf("|                     2 -> Pesquisar admnistrador <-                      |\n");
    printf("|                    3 -> Relatorio administradores <-                    |\n");
    printf("|                     4 -> Relatorio fornecedores <-                      |\n");
    printf("|                       5 -> Relatorio produtos <-                        |\n");
    printf("|                     6 -> Relatorio colaboradores <-                     |\n");
    printf("|                       7 -> Relatorio clientes <-                        |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


int tela_fornecedor(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                        Fornecedores - EAGLE EYES                        |\n");
    printf("|                                                                         |\n");
    printf("|                       1 -> Cadastrar fornecedor <-                      |\n");
    printf("|                       2 -> Pesquisar fornecedor <-                      |\n");
    printf("|                      0 -> Voltar ao menu anterior <-                    |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    getchar();
    return op;
}


int tela_produto(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Produtos - EAGLE EYES                          |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar produto <-                        |\n");
    printf("|                        2 -> Pesquisar produto <-                        |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    getchar();
    return op;
}


int tela_colaborador(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                        Colaboradores - EAGLE EYE                        |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar colaborador <-                      |\n");
    printf("|                      2 -> Pesquisar colaborador <-                      |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    getchar();
    return op;
}


int tela_cliente(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Clientes - EAGLE EYES                          |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar cliente <-                        |\n");
    printf("|                        2 -> Pesquisar cliente <-                        |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    getchar();
    return op;
}


/////
//Telas universais
//Cpf
int cpf(int cpf) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            CPF - EAGLE EYES                             |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite seu CPF :                              |\n", &cpf);
    printf("|                                                                         |\n");
    printf("|                     1 -> Cadastrar administrador <-                     |\n");
    printf("+=========================================================================+\n");
}