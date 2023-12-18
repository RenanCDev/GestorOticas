#include "../util/all.h"

void relat_cliente (void) {
    char op2;
    do { 
        op2 = menu_modulo ("Relatórios clientes");
        switch (op2) {
            case '1':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '2':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '3':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '4':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '5':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '6':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '7':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
            case '8':
                tela_banner ();
                relat_cli (op2);
                limpa_buffer ();
                break;
        }
    } while (op2 != '0');
}

void relat_cli (char escolha) {
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        relat_crono_cli (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        relat_alfa_cli(escolha);    
    } else if (escolha == '7') {
        relat_data_cli ();
    } else if (escolha == '8') {
        relat_nome_cli ();
    }
}

void relat_crono_cli (char escolha) {
    FILE *fp;
    Client* cli;
    cli = (Client*) malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "rb");
    int conta_cli_total = 0, conta_cli_ativo = 0, conta_cli_inativo = 0;
    tela_universal ("Relatório cliente em ordem cronológica");
    tela_relat_pessoa ();
    while(fread(cli, sizeof(Client), 1, fp)) {
        conta_cli_total ++;
        if (cli->status == '1') {
            conta_cli_ativo ++;
        } else if (cli->status == '0') {
            conta_cli_inativo ++;
        }
        switch (escolha) {
            case '1':
                relat_pessoa_cli (cli);
                break;
            case '3':
                relat_pessoa_atv_cli (cli);
                break;
            case '5':
                relat_pessoa_inatv_cli (cli);
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_cli_total, conta_cli_ativo, conta_cli_inativo);
}

void relat_alfa_cli (char escolha) {
    FILE *fp;
    Client* cli;
    cli = (Client*) malloc(sizeof(Client));
    fp = fopen("dat/cliente.dat", "rb");
    int conta_cli_total = 0, conta_cli_ativo = 0, conta_cli_inativo = 0;
    Client* lista;
    lista = NULL;
    tela_universal ("Relatório cliente em ordem alfabética");
    tela_relat_pessoa ();
    while(fread(cli, sizeof(Client), 1, fp)) {
        cli->prox = NULL;
        if ((lista == NULL) || (strcmp(cli->nome, lista->nome) < 0)) {
            cli->prox = lista;
            lista = cli;
        } else {
            Client* anterior = lista;
            Client* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, cli->nome) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = cli;
        cli->prox = atual;
        }
    cli = (Client*)malloc(sizeof(Client));
    }
    cli = lista;
    while (cli != NULL) {
        conta_cli_total ++;
        if (cli->status == '1') {
            conta_cli_ativo ++;
        } else if (cli->status == '0') {
            conta_cli_inativo ++;
        }
        switch (escolha) {
            case '2':
                relat_pessoa_cli (cli);
                cli = cli->prox;
                break;
            case '4':
                relat_pessoa_atv_cli (cli);
                cli = cli->prox;
                break;
            case '6':
                relat_pessoa_inatv_cli (cli);
                cli = cli->prox;
                break;
        }
    }
    cli = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(cli);
        cli = lista;
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_cli_total, conta_cli_ativo, conta_cli_inativo);
}

void relat_data_cli (void) {
    FILE *fp;
    Client* cli;
    cli = (Client*) malloc(sizeof(Client));
    char* data;
    char* data_ini = le_data_ini ("Relatório cliente entre datas");
    if (cancel(data_ini)) {
        trat_dat_ent (data_ini);
        char* data_fim = le_data_fim ("Relatório cliente entre datas", data_ini);
        if (cancel(data_fim)) {
            trat_dat_ent (data_fim);
            fp = fopen("dat/cliente.dat", "rb");
            int conta_cli_total = 0, conta_cli_ativo = 0, conta_cli_inativo = 0;
            while(fread(cli, sizeof(Client), 1, fp)) {
                data = cli->data;
                trat_dat_ent (data);
                int ok = compara_datas_relat(data, data_ini, data_fim);
                if (ok == 1) {
                    conta_cli_total ++;
                    if (cli->status == '1') {
                        conta_cli_ativo ++;
                    } else if (cli->status == '0') {
                        conta_cli_inativo ++;
                    }
                    relat_pessoa_cli (cli);
                }
            } 
            fclose(fp);
            limpa_buffer();
            tela_fecha_relat1(conta_cli_total, conta_cli_ativo, conta_cli_inativo);
        }
    }
}

void relat_nome_cli (void) {
    FILE *fp;
    Client* cli;
    cli = (Client*) malloc(sizeof(Client));
    char* nome = le_nome("Relatório cliente por nome");
    if (cancel(nome)) {    
        fp = fopen("dat/cliente.dat", "rb");
        int conta_cli_total = 0, conta_cli_ativo = 0, conta_cli_inativo = 0;
        while(fread(cli, sizeof(Client), 1, fp)) {
            if (strstr(cli->nome, nome) != NULL) {
                conta_cli_total ++;
                if (cli->status == '1') {
                    conta_cli_ativo ++;
                } else if (cli->status == '0') {
                    conta_cli_inativo ++;
                }
                relat_pessoa_cli (cli);
            }
        }
        fclose(fp);
        limpa_buffer();
        tela_fecha_relat1(conta_cli_total, conta_cli_ativo, conta_cli_inativo);
    }
}