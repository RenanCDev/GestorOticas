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
#include "../util/all.h"

/////
//Percorre todo o caminho do menu cliente
//
void modulo_cliente (void) {
    Client* cliente;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_cliente ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    cliente = cad_client ();
                    gravar_client (cliente);
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_client ();
                    break; 
            } 
        } while (op != '0'); 
}


//Cadastra um novo cliente
//
Client* cad_client (void) {
    Client* cli;
    cli = (Client*)malloc((sizeof(Client)));
    char* cpf = le_cpf ("Cadastro cliente");
    strcpy(cli->cpf, cpf);
    limpa_buffer ();
    char* email = le_email ("Cadastro cliente");
    strcpy(cli->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro cliente");
    strcpy(cli->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro cliente");
    strcpy(cli->nome, nome);
    t_cad_ok ("Cadastro cliente", cli->cpf, cli->email, cli->cel, cli->nome);
    tela_cad_concl ();
    return cli;
}


//Gravador de dados do cliente
//
void gravar_client (Client* cli) {
    FILE *fp_cli;
    fp_cli = fopen("dat/cliente.dat", "ab");
    if (fp_cli == NULL) {
        tela_erro_dados ();
    }
    fwrite(cli, sizeof(Client), 1, fp_cli);
    fclose(fp_cli);
    free(cli);
}


//Pesquisa o cadastro de algum cliente
//
void pesq_client (void) {
    Client* cli;
    char* cpf = le_cpf ("Pesquisa cliente");
    cli = carregar_client(cpf);
    if (cli == NULL) {
        tela_erro_dados ();
    }
    else {
    t_cad_ok ("Cadastro cliente", cli->cpf, cli->email, cli->cel, cli->nome);
    limpa_buffer ();
    free(cli);
    }
}


//Carregador de dados do cliente
//
Client* carregar_client (char* cpf) {
    FILE *fp;
    Client* cli;
    cli = (Client*)malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "rb");
    if (fp == NULL) {
        tela_erro_dados();
    }
    while (fread(cli, sizeof(Client), 1, fp)) {
        if ((strcmp(cli->cpf, cpf) == 0)) {
            fclose(fp);
            return cli;
        }
    }
    fclose(fp);
    return NULL;
}