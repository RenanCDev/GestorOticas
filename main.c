/* +=========================================================================+
   |             Universidade Federal do Rio Grande do Norte                 |
   |                 Centro de Ensino Superior do Seridó                     |
   |           Aluno -- Renan Missias Rodrigues Alves da Costa               |
   |                  Disciplina DCT1106 -- Programação                      |
   |                Projeto Sistema de Gestão para Óticas                    |
   |             Developed by @RenanMRb - since august, 2023                 |
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
    int op = 9;
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
void tela_apresentacao(void) {
    system("clear");
    printf("+=========================================================================+");
    printf("|             Universidade Federal do Rio Grande do Norte                 |");
    printf("|                 Centro de Ensino Superior do Seridó                     |");
    printf("|           Aluno -- Renan Missias Rodrigues Alves da Costa               |");
    printf("|                  Disciplina DCT1106 -- Programação                      |");
    printf("|                Projeto Sistema de Gestão para Óticas                    |");
    printf("|             Developed by @RenanMRb - since august, 2023                 |");
    printf("+=========================================================================+");
    getchar();  
}


void tela_sobre(void) {
    system("clear");
    printf("+=========================================================================+");
    printf("|         O projeto EAGLE EYES é um projeto de gestão de óticas .         |");
    printf("|            Tem o objetivo de gerir e administrar uma ótica .            |");
    printf("|                        > > ATENÇÃO ! ! ! ! < <                          |");
    printf("|                  Este NÃO é um programa comercial .                     |");
    printf("|      O desenolvedor não se responsabiliza por quaisquer danos !         |");
    printf("+=========================================================================+");
    getchar();

}


int tela_menu_principal(int op) {
    system("clear");
    printf("+=========================================================================+");
    printf("|                       Menu principal - EAGLE EYES                       |");
    printf("|                         1 -> Administrativo <-                          |");
    printf("|                          2 -> Fornecedores <-                           |");
    printf("|                            3 -> Produtos <-                             |");
    printf("|                          4 -> Colaboradores <-                          |");
    printf("|                            5 -> Clientes <-                             |");
    printf("|                         0 -> Fechar programa <-                         |");
    printf("+=========================================================================+");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}


int tela_administrativo(int op) {
    system("clear");
    printf("+=========================================================================+");
    printf("|                       Administrativo - EAGLE EYES                       |");
    printf("|                     1 -> Cadastrar administrador <-                     |");
    printf("|                     2 -> Pesquisar admnistrador <-                      |");
    printf("|                    3 -> Relatorio administradores <-                    |");
    printf("|                     4 -> Relatorio fornecedores <-                      |");
    printf("|                       5 -> Relatorio produtos <-                        |");
    printf("|                     6 -> Relatorio colaboradores <-                     |");
    printf("|                       7 -> Relatorio clientes <-                        |");
    printf("|                     0 -> Voltar ao menu anterior <-                     |");
    printf("+=========================================================================+");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}


int tela_fornecedor(int op) {
    system("clear");
    printf("+=========================================================================+");
    printf("|                        Fornecedores - EAGLE EYES                        |");
    printf("|                       1 -> Cadastrar fornecedor <-                      |");
    printf("|                       2 -> Pesquisar fornecedor <-                      |");
    printf("|                      0 -> Voltar ao menu anterior <-                    |");
    printf("+=========================================================================+");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}


int tela_produto(int op) {
    system("clear");
    printf("+=========================================================================+");
    printf("|                          Produtos - EAGLE EYES                          |");
    printf("|                        1 -> Cadastrar produto <-                        |");
    printf("|                        2 -> Pesquisar produto <-                        |");
    printf("|                     0 -> Voltar ao menu anterior <-                     |");
    printf("+=========================================================================+");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}


int tela_colaborador(int op) {
    system("clear");
    printf("+=========================================================================+");
    printf("|                        Colaboradores - EAGLE EYE                        |");
    printf("|                      1 -> Cadastrar colaborador <-                      |");
    printf("|                      2 -> Pesquisar colaborador <-                      |");
    printf("|                     0 -> Voltar ao menu anterior <-                     |");
    printf("+=========================================================================+");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}


int tela_cliente(int op) {
    system("clear");
    printf("+=========================================================================+");
    printf("|                          Produtos - EAGLE EYES                          |");
    printf("|                        1 -> Cadastrar cliente <-                        |");
    printf("|                        2 -> Pesquisar cliente <-                        |");
    printf("|                     0 -> Voltar ao menu anterior <-                     |");
    printf("+=========================================================================+");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}

