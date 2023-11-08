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
        printf("|%s|\n", centralizar_texto ("Menu principal", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Administrativo <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Poduto <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Colaborador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Cliente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("7 -> Sobre o programa <-", 73, 0));
        printf("|                                                                         |\n");
printf("|%s|\n", centralizar_texto ("0 -> Fechar o programa <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
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
        printf("|%s|\n", centralizar_texto ("Administrativo", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Cadastrar administrador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Pesquisar administrador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Relatório <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
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
        printf("|%s|\n", centralizar_texto ("Administrativo", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Relatório administrador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Relatório fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Relatório produto <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Relatório colaborador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Relatório cliente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Relatório venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
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
        printf("|%s|\n", centralizar_texto(procurar, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto(pesquisar, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Menu relatórios
//
char menu_edit (char* titulo, char* cpf, char* email, char* cel, char* nome, char status) {
    char op [50];
    char op_max = '5';
    do {
        system("clear");
        //tela_banner ();
        t_cad_ok (titulo, cpf, email, cel, nome, status);
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Editar/ Excluir", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Editar email <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Editar cel <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Editar nome <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Excluir cadastro <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max)));
}


//Adiciona itens a uma venda
//
char menu_item_venda (void) {
    char op [50];
    char op_max = '2';
    do {
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Acrescentar novo item <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Prosseguir com a venda <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
}


//Forma de pagamento
//
char menu_form_pag (void) {
    char op [50];
    char op_max = '4';
    do {
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Forma de pagamento", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Dinheiro <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Pix <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Cartão de crédito <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Cartão de débito <-", 73, 0));
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
    } while ((!valid_entrada(op)) || (valid_op(op[0], op_max))); 
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