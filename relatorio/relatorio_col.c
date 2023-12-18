#include "../util/all.h"

void relat_colab (void) {
    char op2;
    do { 
        op2 = menu_modulo ("Relatórios colaboradores");
        switch (op2) {
            case '1':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '2':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '3':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '4':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '5':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '6':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '7':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
            case '8':
                tela_banner ();
                relat_col (op2);
                limpa_buffer ();
                break;
        }
    } while (op2 != '0');
}

void relat_col (char escolha) {
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        relat_crono_col (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        relat_alfa_col(escolha);    
    } else if (escolha == '7') {
        relat_data_col ();
    } else if (escolha == '8') {
        relat_nome_col ();
    }
}

void relat_crono_col (char escolha) {
    FILE *fp;
    Colab* col;
    col = (Colab*) malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "rb");
    int conta_col_total = 0, conta_col_ativo = 0, conta_col_inativo = 0;
    tela_universal ("Relatório colaborador em ordem cronológica");
    tela_relat_pessoa ();
    while(fread(col, sizeof(Colab), 1, fp)) {
        conta_col_total ++;
        if (col->status == '1') {
            conta_col_ativo ++;
        } else if (col->status == '0') {
            conta_col_inativo ++;
        }
        switch (escolha) {
            case '1':
                relat_pessoa_col (col);
                break;
            case '3':
                relat_pessoa_atv_col (col);
                break;
            case '5':
                relat_pessoa_inatv_col (col);
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_col_total, conta_col_ativo, conta_col_inativo);
}

void relat_alfa_col (char escolha) {
    FILE *fp;
    Colab* col;
    col = (Colab*) malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "rb");
    int conta_col_total = 0, conta_col_ativo = 0, conta_col_inativo = 0;
    Colab* lista;
    lista = NULL;
    tela_universal ("Relatório colaborador em ordem alfabética");
    tela_relat_pessoa ();
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
        conta_col_total ++;
        if (col->status == '1') {
            conta_col_ativo ++;
        } else if (col->status == '0') {
            conta_col_inativo ++;
        }
        switch (escolha) {
            case '2':
                relat_pessoa_col (col);
                col = col->prox;
                break;
            case '4':
                relat_pessoa_atv_col (col);
                col = col->prox;
                break;
            case '6':
                relat_pessoa_inatv_col (col);
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
    tela_fecha_relat1(conta_col_total, conta_col_ativo, conta_col_inativo);
}

void relat_data_col (void) {
    FILE *fp;
    Colab* col;
    col = (Colab*) malloc(sizeof(Colab));
    char* data;
    char* data_ini = le_data_ini ("Relatório colaborador entre datas");
    if (cancel(data_ini)) {
        trat_dat_ent (data_ini);
        char* data_fim = le_data_fim ("Relatório colaborador entre datas", data_ini);
        if (cancel(data_fim)) {
            trat_dat_ent (data_fim);
            fp = fopen("dat/colaborador.dat", "rb");
            int conta_col_total = 0, conta_col_ativo = 0, conta_col_inativo = 0;
            while(fread(col, sizeof(Colab), 1, fp)) {
                data = col->data;
                trat_dat_ent (data);
                int ok = compara_datas_relat(data, data_ini, data_fim);
                if (ok == 1) {
                    conta_col_total ++;
                    if (col->status == '1') {
                        conta_col_ativo ++;
                    } else if (col->status == '0') {
                        conta_col_inativo ++;
                    }
                    relat_pessoa_col (col);
                }
            } 
            fclose(fp);
            limpa_buffer();
            tela_fecha_relat1(conta_col_total, conta_col_ativo, conta_col_inativo);
        }
    }
}

void relat_nome_col (void) {
    FILE *fp;
    Colab* col;
    col = (Colab*) malloc(sizeof(Colab));
    char* nome = le_nome("Relatório colaborador por nome");
    if (cancel(nome)) {
        fp = fopen("dat/colaborador.dat", "rb");
        int conta_col_total = 0, conta_col_ativo = 0, conta_col_inativo = 0;
        while(fread(col, sizeof(Colab), 1, fp)) {
            if (strstr(col->nome, nome) != NULL) {
                conta_col_total ++;
                if (col->status == '1') {
                    conta_col_ativo ++;
                } else if (col->status == '0') {
                    conta_col_inativo ++;
                }
                relat_pessoa_col (col);
            }
        }
        fclose(fp);
        limpa_buffer();
        tela_fecha_relat1(conta_col_total, conta_col_ativo, conta_col_inativo);
    }
}