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
    

//Inclui todas as importações e declarações necessárias no programa
#include "../util/all.h"


//Módulo clientes: cadastro e pesquisa de clientes
void modulo_cliente (void) {
    Client* cliente;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Cliente", " 1 -> Cadastrar cliente <- ", " 2 -> Pesquisar cliente <- ");
            switch (op) {
                case '1':
                    limpa_buffer ();
                    cliente = cad_client (); //Cria a struct Client
                    gravar_client (cliente); //Grava a struct Client em arquivo
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_client (); //Pesquisa a struct Client em arquivo
                    break; 
            } 
        } while (op != '0'); 
}


//Percorre o algoritmo para cadastrar um novo administrador adequadamente
Client* cad_client (void) {
    Client* cli;
    cli = (Client*)malloc((sizeof(Client)));
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro cliente");
        if (carregar_cli (cpf) != NULL) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (carregar_cli (cpf) != NULL);
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
    cli->status = '1';
    tela_pessoas ("Cadastro cliente", cli->cpf, cli->email, cli->cel, cli->nome, cli->status);
    tela_ok ();
    return cli;
}


//Percorre o algoritmo para pesquisar um cliente adequadamente
Client* pesq_client (void) {
    Client* cli;
    char* cpf;
    do{
        cpf = le_cpf ("Pesquisa cliente");
        cli = carregar_cli (cpf);
        if (cli == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while (cli == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro cliente", cli->cpf, cli->email, cli->cel, cli->nome, cli->status);
            if ((edit >= '1') && (edit <= '4')) {
                regravar_cli (cli, edit);
                tela_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
    return cli;
}


//Percorre o algoritmo para gravar um cliente em arquivo adequadamente
void gravar_client (Client* cli) {
    FILE *fp_cli;
    fp_cli = fopen("dat/cliente.dat", "ab");
    do {
        fwrite(cli, sizeof(Client), 1, fp_cli);
    } while (fwrite(cli, sizeof(Client), 1, fp_cli) != 1);
    fclose(fp_cli);
    free(cli);
}


//Percorre o algoritmo para carregar um cliente do arquivo adequadamente
Client* carregar_cli (char* cpf) {
    FILE* fp;
    Client* cli;
    cli = (Client*)malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "rb");
    while (fread(cli, sizeof(Client), 1, fp)) {
        if ((!strcmp(cli->cpf, cpf)) && (cli->status == '1')) {
            fclose(fp);
            return cli;
        }
    }
    fclose(fp);
    return NULL;
}


//Percorre o algoritmo para regravar um cliente em arquivo adequadamente
void regravar_cli(Client* cli, char op) {
    FILE* fp;
    Client* nova_ent;
    nova_ent = (Client*)malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Client), 1, fp);
        if (strcmp(nova_ent->cpf, cli->cpf) == 0) {
            edit_cad_cli(cli, op);
            fseek(fp, -1 * sizeof(Client), SEEK_CUR);
            fwrite(cli, sizeof(Client), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


//Percorre o algoritmo para editar ou fazer a exclusão lógica do cliente em arquivo adequadamente
void edit_cad_cli (Client* cli, char op) {
    switch (op) {
        case '1' :
            limpa_buffer ();
            char* email = le_email ("Cadastro cliente");
            strcpy(cli->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro cliente");
            strcpy(cli->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro cliente");
            strcpy(cli->nome, nome);
            break;
        case '4' :
            cli->status = '0';
            break;
    }
}