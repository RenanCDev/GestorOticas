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
    
#include "../util/all.h"

/////
//Percorre todo o caminho do menu cliente
//
void modulo_cliente (void) {
    Client* cliente;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Cliente", " 1 -> Cadastrar cliente <- ", " 2 -> Pesquisar cliente <- ");
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
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro cliente");
        if (!verify_cpf_dat_cli (cpf)) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (!verify_cpf_dat_cli (cpf));
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


//Pesquisa o cadastro de algum cliente
//
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
            if ((edit >= '1') && (edit <= '3')) {
                regravar_cli (cli, edit);
                tela_ok ();
            }
            else if (edit == '4') {
                excluir_cli (cli->cpf);
                tela_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
    return cli;
}


//Gravador de dados do cliente
//
void gravar_client (Client* cli) {
    FILE *fp_cli;
    fp_cli = fopen("dat/cliente.dat", "ab");
    if (fp_cli == NULL) {
        tela_erro ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(cli, sizeof(Client), 1, fp_cli);
    fclose(fp_cli);
    free(cli);
}


//Carregador de dados do cliente
//
Client* carregar_cli(char* cpf) {
    FILE *fp;
    Client* cli;
    cli = (Client*)malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "rb");
    if (fp == NULL) {
        tela_erro ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    while (fread(cli, sizeof(Client), 1, fp)) {
        if ((!strcmp(cli->cpf, cpf)) && (cli->status == '1')) {
            fclose(fp);
            return cli;
        }
    }
    fclose(fp);
    return NULL;
}


//Verifica se o cpf ja esta cadastrado (retorna "1") ou não (retorna"0")
//
int verify_cpf_dat_cli (char *cpf) {
    FILE* fp;
    Client* cli;
    cli = (Client*)malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "rb");
    while (fread(cli, sizeof(Client), 1, fp)) {
        if ((strcmp(cli->cpf, cpf) == 0) && cli->status == '1') {
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return 1;
}


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


void excluir_cli(char* cpf)  {
    Client* cli;
    cli = (Client*)malloc(sizeof(Client));
    cli = carregar_cli(cpf);
    cli->status = '0';
    remove_cli(cli);
    free(cli);
    free(cpf);
}


void remove_cli(Client* cli) {
    FILE *fp;
    Client* cli_op;
    cli_op = (Client*)malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "r+b");
    while (!feof(fp)) {
        fread(cli_op, sizeof(Client), 1, fp);
        if ((strcmp(cli_op->cpf, cli->cpf) == 0) && (cli_op->status != '0')) {
            cli_op->status = '0';
            fseek(fp, -1 * sizeof(Client), SEEK_CUR);
            fwrite(cli_op, sizeof(Client), 1, fp);
        }
    }
    fclose(fp);
    free(cli_op);
}


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
            limpa_buffer ();
            excluir_cli(cli->cpf);
            break;
    }
}