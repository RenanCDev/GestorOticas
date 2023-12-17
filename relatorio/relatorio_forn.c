#include "../util/all.h"

void relat_fornec (void) {
    char op2;
    do { 
        op2 = menu_modulo ("Relatórios fornecedores");
        switch (op2) {
            case '1':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '2':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '3':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '4':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '5':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '6':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '7':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
            case '8':
                tela_banner ();
                relat_forn (op2);
                limpa_buffer ();
                break;
        }
    } while (op2 != '0');
}

void relat_forn (char escolha) {
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        relat_crono_forn (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        relat_alfa_forn(escolha);    
    } else if (escolha == '7') {
        relat_data_forn ();
    } else if (escolha == '8') {
        relat_nome_forn ();
    }
}

void relat_crono_forn (char escolha) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*) malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "rb");
    int conta_forn_total = 0, conta_forn_ativo = 0, conta_forn_inativo = 0;
    tela_universal ("Relatório fornecedor em ordem cronológica");
    tela_relat_pessoa ();
    while(fread(forn, sizeof(Fornec), 1, fp)) {
        conta_forn_total ++;
        if (forn->status == '1') {
            conta_forn_ativo ++;
        } else if (forn->status == '0') {
            conta_forn_inativo ++;
        }
        switch (escolha) {
            case '1':
                relat_pessoa_forn (forn);
                break;
            case '3':
                relat_pessoa_atv_forn (forn);
                break;
            case '5':
                relat_pessoa_inatv_forn (forn);
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_forn_total, conta_forn_ativo, conta_forn_inativo);
}

void relat_alfa_forn (char escolha) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*) malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "rb");
    int conta_forn_total = 0, conta_forn_ativo = 0, conta_forn_inativo = 0;
    Fornec* lista;
    lista = NULL;
    tela_universal ("Relatório fornecedor em ordem alfabética");
    tela_relat_pessoa ();
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
        conta_forn_total ++;
        if (forn->status == '1') {
            conta_forn_ativo ++;
        } else if (forn->status == '0') {
            conta_forn_inativo ++;
        }
        switch (escolha) {
            case '2':
                relat_pessoa_forn (forn);
                forn = forn->prox;
                break;
            case '4':
                relat_pessoa_atv_forn (forn);
                forn = forn->prox;
                break;
            case '6':
                relat_pessoa_inatv_forn (forn);
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
    tela_fecha_relat1(conta_forn_total, conta_forn_ativo, conta_forn_inativo);
}

void relat_data_forn (void) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*) malloc(sizeof(Fornec));
    char* data;
    char* data_ini = le_data_ini ("Relatório fornecedor entre datas");
    if (!cancel(data_ini)) {
    }
    trat_dat_ent (data_ini);
    char* data_fim = le_data_fim ("Relatório fornecedor entre datas", data_ini);
    if (!cancel(data_ini)) {
    }
    trat_dat_ent (data_fim);
    fp = fopen("dat/fornecedor.dat", "rb");
    int conta_forn_total = 0, conta_forn_ativo = 0, conta_forn_inativo = 0;
    while(fread(forn, sizeof(Fornec), 1, fp)) {
        data = forn->data;
        trat_dat_ent (data);
        int ok = compara_datas_relat(data, data_ini, data_fim);
        if (ok == 1) {
            conta_forn_total ++;
            if (forn->status == '1') {
                conta_forn_ativo ++;
            } else if (forn->status == '0') {
                conta_forn_inativo ++;
            }
            relat_pessoa_forn (forn);
        }
    } 
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_forn_total, conta_forn_ativo, conta_forn_inativo);
}

void relat_nome_forn (void) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*) malloc(sizeof(Fornec));
    char* nome = le_nome("Relatório fornecedor por nome");
    fp = fopen("dat/fornecedor.dat", "rb");
    int conta_forn_total = 0, conta_forn_ativo = 0, conta_forn_inativo = 0;
    while(fread(forn, sizeof(Fornec), 1, fp)) {
        if (strstr(forn->nome, nome) != NULL) {
            conta_forn_total ++;
            if (forn->status == '1') {
                conta_forn_ativo ++;
            } else if (forn->status == '0') {
                conta_forn_inativo ++;
            }
            relat_pessoa_forn (forn);
        }
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_forn_total, conta_forn_ativo, conta_forn_inativo);
}