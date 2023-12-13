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
//Percorre todo o caminho do menu relatorio
//
void modulo_relatorio (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_relatorio ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    relat_admin ();
                    break;
                case '2':
                    limpa_buffer ();
                    relat_fornec ();
                    break;
                case '3':
                    limpa_buffer ();
                    relat_produto ();
                    break;
                case '4':
                    limpa_buffer ();
                    relat_colab ();
                    break;
                case '5':
                    limpa_buffer ();
                    relat_cliente ();
                    break;
                case '6':
                    limpa_buffer ();
                    relat_venda ();
                    break;
            }
        } while (op != '0'); 
}


//Funções para apresentar os relatórios
//
//Relatório administrador
//
void relat_admin (void) {
    char op2;
    int conta;
    do { 
        op2 = menu_modulo ("Relatórios administrativos");
        switch (op2) {
            case '1':
                tela_banner ();
                conta = relat_adm (op2);
                tela_fecha_relat(conta);
                break;
            case '2':
                tela_banner ();
                conta = relat_adm (op2);
                tela_fecha_relat(conta);
                break;
            case '3':
                tela_banner ();
                conta = relat_adm (op2);
                tela_fecha_relat(conta);
                break;
            case '4':
                tela_banner ();
                conta = relat_adm (op2);
                tela_fecha_relat(conta);
                break;
            case '5':
                tela_banner ();
                conta = relat_adm (op2);
                tela_fecha_relat(conta);
                break;
            case '6':
                tela_banner ();
                conta = relat_adm (op2);
                tela_fecha_relat(conta);
                break;
        }
    limpa_buffer (); 
    } while (op2 != '0');
}


//Relatório fornecedor
//
void relat_fornec (void) {
    char op2;
    int conta;
    do { 
        op2 = menu_modulo ("Relatórios fornecedor");
        switch (op2) {
            case '1':
                tela_banner ();
                conta = relat_forn (op2);
                tela_fecha_relat(conta);
                break;
            case '2':
                tela_banner ();
                conta = relat_forn (op2);
                tela_fecha_relat(conta);
                break;
            case '3':
                tela_banner ();
                conta = relat_forn (op2);
                tela_fecha_relat(conta);
                break;
            case '4':
                tela_banner ();
                conta = relat_forn (op2);
                tela_fecha_relat(conta);
                break;
            case '5':
                tela_banner ();
                conta = relat_forn (op2);
                tela_fecha_relat(conta);
                break;
            case '6':
                tela_banner ();
                conta = relat_forn (op2);
                tela_fecha_relat(conta);
                break;
        }
    limpa_buffer (); 
    } while (op2 != '0');
}


//Relatório produto
//
void relat_produto (void) {
    char op2;
    int conta;
    do { 
        op2 = menu_modulo_prod ("Relatórios produto");
        switch (op2) {
            case '1':
                tela_banner ();
                conta = relat_prod (op2);
                tela_fecha_relat(conta);
                break;
            case '2':
                tela_banner ();
                conta = relat_prod (op2);
                tela_fecha_relat(conta);
                break;
            case '3':
                tela_banner ();
                conta = relat_prod (op2);
                tela_fecha_relat(conta);
                break;
            case '4':
                tela_banner ();
                conta = relat_prod (op2);
                tela_fecha_relat(conta);
                break;
            case '5':
                tela_banner ();
                conta = relat_prod (op2);
                tela_fecha_relat(conta);
                break;
            case '6':
                tela_banner ();
                conta = relat_prod (op2);
                tela_fecha_relat(conta);
                break;
        }
    limpa_buffer (); 
    } while (op2 != '0');
}


//Relatório colaborador
//
void relat_colab (void) {
    char op2;
    int conta;
    do { 
        op2 = menu_modulo ("Relatórios colaborador");
        switch (op2) {
            case '1':
                tela_banner ();
                conta = relat_col (op2);
                tela_fecha_relat(conta);
                break;
            case '2':
                tela_banner ();
                conta = relat_col (op2);
                tela_fecha_relat(conta);
                break;
            case '3':
                tela_banner ();
                conta = relat_col (op2);
                tela_fecha_relat(conta);
                break;
            case '4':
                tela_banner ();
                conta = relat_col (op2);
                tela_fecha_relat(conta);
                break;
            case '5':
                tela_banner ();
                conta = relat_col (op2);
                tela_fecha_relat(conta);
                break;
            case '6':
                tela_banner ();
                conta = relat_col (op2);
                tela_fecha_relat(conta);
                break;
        }
    limpa_buffer (); 
    } while (op2 != '0');
}


//Relatório cliente
//
void relat_cliente (void) {
    char op2;
    int conta;
    do { 
        op2 = menu_modulo ("Relatórios cliente");
        switch (op2) {
            case '1':
                tela_banner ();
                conta = relat_cli (op2);
                tela_fecha_relat(conta);
                break;
            case '2':
                tela_banner ();
                conta = relat_cli (op2);
                tela_fecha_relat(conta);
                break;
            case '3':
                tela_banner ();
                conta = relat_cli (op2);
                tela_fecha_relat(conta);
                break;
            case '4':
                tela_banner ();
                conta = relat_cli (op2);
                tela_fecha_relat(conta);
                break;
            case '5':
                tela_banner ();
                conta = relat_cli (op2);
                tela_fecha_relat(conta);
                break;
            case '6':
                tela_banner ();
                conta = relat_cli (op2);
                tela_fecha_relat(conta);
                break;
        }
    limpa_buffer (); 
    } while (op2 != '0');
}


//Relatório vendas
//
void relat_venda (void) {
    char op2;
    int conta;
    do { 
        op2 = menu_modulo_vend ("Relatórios venda");
        switch (op2) {
            case '1':
                tela_banner ();
                conta = relat_vend (op2);
                tela_fecha_relat(conta);
                break;
            case '2':
                tela_banner ();
                conta = relat_vend (op2);
                tela_fecha_relat(conta);
                break;
            case '3':
                tela_banner ();
                conta = relat_vend (op2);
                tela_fecha_relat(conta);
                break;
            case '4':
                tela_banner ();
                conta = relat_vend (op2);
                tela_fecha_relat(conta);
                break;
            case '5':
                tela_banner ();
                conta = relat_vend (op2);
                tela_fecha_relat(conta);
                break;
            case '6':
                tela_banner ();
                conta = relat_vend (op2);
                tela_fecha_relat(conta);
                break;
        }
    limpa_buffer (); 
    } while (op2 != '0');
}


int relat_adm (char escolha) {
    int conta;
    tela_universal ("Relatório administrativo");
    tela_relat_pessoa ();
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        conta = relat_crono_adm (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        conta = relat_alfa_adm(escolha);    
    }
    return conta;
}

int relat_forn (char escolha) {
    int conta;
    tela_universal ("Relatório fornecedor");
    tela_relat_pessoa ();
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        conta = relat_crono_forn (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        conta = relat_alfa_forn (escolha);    
    }
    return conta;
}

int relat_prod (char escolha) {
    int conta;
    tela_universal ("Relatório produto");
    tela_relat_prod ();
    if ((escolha == '1')) /*|| (escolha == '3') || (escolha == '5'))*/ {
        conta = relat_crono_pro (escolha);
    } /*else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        conta = relat_alfa_forn (escolha);    
    }*/
    return conta;
}

int relat_col (char escolha) {
    int conta;
    tela_universal ("Relatório colaborador");
    tela_relat_pessoa ();
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        conta = relat_crono_col (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        conta = relat_alfa_col (escolha);    
    }
    return conta;
}

int relat_cli (char escolha) {
    int conta;
    tela_universal ("Relatório cliente");
    tela_relat_pessoa ();
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        conta = relat_crono_cli (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        conta = relat_alfa_cli (escolha);    
    }
    return conta;
}

int relat_vend (char escolha) {
    int conta;
    tela_universal ("Relatório venda");
    tela_relat_vend ();
    if ((escolha == '1')) /*|| (escolha == '3') || (escolha == '5'))*/ {
        conta = relat_crono_ven (escolha);
    } /*else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        conta = relat_alfa_forn (escolha);    
    }*/
    return conta;
}


int relat_crono_adm (char escolha) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*) malloc(sizeof(Admin));
    int conta;
    fp = fopen("dat/administrativo.dat", "rb");
    int conta_adm_total = 0, conta_adm_ativo = 0, conta_adm_inativo = 0;
    while(fread(adm, sizeof(Admin), 1, fp)) {
        switch (escolha) {
            case '1':
                conta_adm_total += 1;
                relat_pessoa_adm (adm);
                conta = conta_adm_total;
                break;
            case '3':
                conta_adm_ativo += 1;
                relat_pessoa_atv_adm (adm);
                conta = conta_adm_ativo;
                break;
            case '5':
                conta_adm_inativo += 1;
                relat_pessoa_inatv_adm (adm);
                conta = conta_adm_inativo;
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_alfa_adm (char escolha) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*) malloc(sizeof(Admin));
    int conta;
    fp = fopen("dat/administrativo.dat", "rb");
    int conta_adm_total = 0, conta_adm_ativo = 0, conta_adm_inativo = 0;
    Admin* lista;
    lista = NULL;
    while(fread(adm, sizeof(Admin), 1, fp)) {
        adm->prox = NULL;
        if ((lista == NULL) || (strcmp(adm->nome, lista->nome) < 0)) {
            adm->prox = lista;
            lista = adm;
        } else {
            Admin* anterior = lista;
            Admin* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, adm->nome) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = adm;
        adm->prox = atual;
        }
    adm = (Admin*)malloc(sizeof(Admin));
    }
    adm = lista;
    while (adm != NULL) {
        switch (escolha) {
            case '2':
                conta_adm_total += 1;
                relat_pessoa_adm (adm);
                conta = conta_adm_total;
                adm = adm->prox;
                break;
            case '4':
                conta_adm_ativo += 1;
                relat_pessoa_atv_adm (adm);
                conta = conta_adm_ativo;
                adm = adm->prox;
                break;
            case '6':
                conta_adm_inativo += 1;
                relat_pessoa_inatv_adm (adm);
                conta = conta_adm_inativo;
                adm = adm->prox;
                break;
        }
    }
    adm = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(adm);
        adm = lista;
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_crono_forn (char escolha) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*) malloc(sizeof(Fornec));
    int conta;
    fp = fopen("dat/fornecedor.dat", "rb");
    int conta_forn_total = 0, conta_forn_ativo = 0, conta_forn_inativo = 0;
    while(fread(forn, sizeof(Fornec), 1, fp)) {
        switch (escolha) {
            case '1':
                conta_forn_total += 1;
                relat_pessoa_forn (forn);
                conta = conta_forn_total;
                break;
            case '3':
                conta_forn_ativo += 1;
                relat_pessoa_atv_forn (forn);
                conta = conta_forn_ativo;
                break;
            case '5':
                conta_forn_inativo += 1;
                relat_pessoa_inatv_forn (forn);
                conta = conta_forn_inativo;
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_alfa_forn (char escolha) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*) malloc(sizeof(Fornec));
    int conta;
    fp = fopen("dat/fornecedor.dat", "rb");
    int conta_forn_total = 0, conta_forn_ativo = 0, conta_forn_inativo = 0;
    Fornec* lista;
    lista = NULL;
    while(fread(forn, sizeof(Fornec), 1, fp)) {
        forn->prox = NULL;
        if ((lista == NULL) || (strcmp(forn->nome, lista->nome) < 0)) {
            forn->prox = lista;
            lista = forn;
        } else {
            Fornec* anterior = lista;
            Fornec* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, forn->nome) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = forn;
        forn->prox = atual;
        }
    forn = (Fornec*)malloc(sizeof(Fornec));
    }
    forn = lista;
    while (forn != NULL) {
        switch (escolha) {
            case '2':
                conta_forn_total += 1;
                relat_pessoa_forn (forn);
                conta = conta_forn_total;
                forn = forn->prox;
                break;
            case '4':
                conta_forn_ativo += 1;
                relat_pessoa_atv_forn (forn);
                conta = conta_forn_ativo;
                forn = forn->prox;
                break;
            case '6':
                conta_forn_inativo += 1;
                relat_pessoa_inatv_forn (forn);
                conta = conta_forn_inativo;
                forn = forn->prox;
                break;
        }
    }
    forn = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(forn);
        forn = lista;
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_crono_col (char escolha) {
    FILE *fp;
    Colab* col;
    col = (Colab*) malloc(sizeof(Colab));
    int conta;
    fp = fopen("dat/colaborador.dat", "rb");
    int conta_col_total = 0, conta_col_ativo = 0, conta_col_inativo = 0;
    while(fread(col, sizeof(Colab), 1, fp)) {
        switch (escolha) {
            case '1':
                conta_col_total += 1;
                relat_pessoa_col (col);
                conta = conta_col_total;
                break;
            case '3':
                conta_col_ativo += 1;
                relat_pessoa_atv_col (col);
                conta = conta_col_ativo;
                break;
            case '5':
                conta_col_inativo += 1;
                relat_pessoa_inatv_col (col);
                conta = conta_col_inativo;
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_alfa_col (char escolha) {
    FILE *fp;
    Colab* col;
    col = (Colab*) malloc(sizeof(Colab));
    int conta;
    fp = fopen("dat/colaborador.dat", "rb");
    int conta_col_total = 0, conta_col_ativo = 0, conta_col_inativo = 0;
    Colab* lista;
    lista = NULL;
    while(fread(col, sizeof(Colab), 1, fp)) {
        col->prox = NULL;
        if ((lista == NULL) || (strcmp(col->nome, lista->nome) < 0)) {
            col->prox = lista;
            lista = col;
        } else {
            Colab* anterior = lista;
            Colab* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, col->nome) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = col;
        col->prox = atual;
        }
    col = (Colab*)malloc(sizeof(Colab));
    }
    col = lista;
    while (col != NULL) {
        switch (escolha) {
            case '2':
                conta_col_total += 1;
                relat_pessoa_col (col);
                conta = conta_col_total;
                col = col->prox;
                break;
            case '4':
                conta_col_ativo += 1;
                relat_pessoa_atv_col (col);
                conta = conta_col_ativo;
                col = col->prox;
                break;
            case '6':
                conta_col_inativo += 1;
                relat_pessoa_inatv_col (col);
                conta = conta_col_inativo;
                col = col->prox;
                break;
        }
    }
    col = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(col);
        col = lista;
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_crono_cli (char escolha) {
    FILE *fp;
    Client* cli;
    cli = (Client*) malloc(sizeof(Client));
    int conta;
    fp = fopen("dat/cliente.dat", "rb");
    int conta_cli_total = 0, conta_cli_ativo = 0, conta_cli_inativo = 0;
    while(fread(cli, sizeof(Client), 1, fp)) {
        switch (escolha) {
            case '1':
                conta_cli_total += 1;
                relat_pessoa_cli (cli);
                conta = conta_cli_total;
                break;
            case '3':
                conta_cli_ativo += 1;
                relat_pessoa_atv_cli (cli);
                conta = conta_cli_ativo;
                break;
            case '5':
                conta_cli_inativo += 1;
                relat_pessoa_inatv_cli (cli);
                conta = conta_cli_inativo;
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_alfa_cli (char escolha) {
    FILE *fp;
    Client* cli;
    cli = (Client*) malloc(sizeof(Client));
    int conta;
    fp = fopen("dat/cliente.dat", "rb");
    int conta_cli_total = 0, conta_cli_ativo = 0, conta_cli_inativo = 0;
    Client* lista;
    lista = NULL;
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
        switch (escolha) {
            case '2':
                conta_cli_total += 1;
                relat_pessoa_cli (cli);
                conta = conta_cli_total;
                cli = cli->prox;
                break;
            case '4':
                conta_cli_ativo += 1;
                relat_pessoa_atv_cli (cli);
                conta = conta_cli_ativo;
                cli = cli->prox;
                break;
            case '6':
                conta_cli_inativo += 1;
                relat_pessoa_inatv_cli (cli);
                conta = conta_cli_inativo;
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
    return conta;
}

int relat_crono_pro (char escolha) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    int conta;
    fp = fopen("dat/produto.dat", "rb");
    int conta_pro_total = 0;
    while(fread(pro, sizeof(Prod), 1, fp)) {
        switch (escolha) {
            case '1':
                conta_pro_total += 1;
                relat_prod_t (pro);
                conta = conta_pro_total;
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}

int relat_crono_ven (char escolha) {
    FILE *fp;
    Vend* ven;
    ven = (Vend*) malloc(sizeof(Vend));
    int conta;
    fp = fopen("dat/venda.dat", "rb");
    int conta_ven_total = 0;
    while(fread(ven, sizeof(Vend), 1, fp)) {
        switch (escolha) {
            case '1':
                conta_ven_total += 1;
                relat_vend_t (ven);
                conta = conta_ven_total;
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    return conta;
}