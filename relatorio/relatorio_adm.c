#include "../util/all.h"

void relat_admin (void) {
    char op2;
    do { 
        op2 = menu_modulo ("Relatórios administrativos");
        switch (op2) {
            case '1':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '2':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '3':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '4':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '5':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '6':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '7':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
            case '8':
                tela_banner ();
                relat_adm (op2);
                limpa_buffer ();
                break;
        }
    } while (op2 != '0');
}

void relat_adm (char escolha) {
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        relat_crono_adm (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        relat_alfa_adm(escolha);    
    } else if (escolha == '7') {
        relat_data_adm ();
    } else if (escolha == '8') {
        relat_nome_adm ();
    }
}

void relat_crono_adm (char escolha) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*) malloc(sizeof(Admin));
    fp = fopen("administrativo/administrativo.dat", "rb");
    int conta_adm_total = 0, conta_adm_ativo = 0, conta_adm_inativo = 0;
    tela_universal ("Relatório administrativo em ordem cronológica");
    tela_relat_pessoa ();
    while(fread(adm, sizeof(Admin), 1, fp)) {
        conta_adm_total ++;
        if (adm->status == '1') {
            conta_adm_ativo ++;
        } else if (adm->status == '0') {
            conta_adm_inativo ++;
        }
        switch (escolha) {
            case '1':
                relat_pessoa_adm (adm);
                break;
            case '3':
                relat_pessoa_atv_adm (adm);
                break;
            case '5':
                relat_pessoa_inatv_adm (adm);
                break;
        }
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_adm_total, conta_adm_ativo, conta_adm_inativo);
}

void relat_alfa_adm (char escolha) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*) malloc(sizeof(Admin));
    fp = fopen("administrativo/administrativo.dat", "rb");
    int conta_adm_total = 0, conta_adm_ativo = 0, conta_adm_inativo = 0;
    Admin* lista;
    lista = NULL;
    tela_universal ("Relatório administrativo em ordem alfabética");
    tela_relat_pessoa ();
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
        conta_adm_total ++;
        if (adm->status == '1') {
            conta_adm_ativo ++;
        } else if (adm->status == '0') {
            conta_adm_inativo ++;
        }
        switch (escolha) {
            case '2':
                relat_pessoa_adm (adm);
                adm = adm->prox;
                break;
            case '4':
                relat_pessoa_atv_adm (adm);
                adm = adm->prox;
                break;
            case '6':
                relat_pessoa_inatv_adm (adm);
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
    tela_fecha_relat1(conta_adm_total, conta_adm_ativo, conta_adm_inativo);
}

void relat_data_adm (void) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*) malloc(sizeof(Admin));
    char* data;
    char* data_ini = le_data_ini ("Relatório administrativo entre datas");
    if (cancel(data_ini)) {
        trat_dat_ent (data_ini);
        char* data_fim = le_data_fim ("Relatório administrativo entre datas", data_ini);
        if (cancel(data_fim)) {
            trat_dat_ent (data_fim);
            fp = fopen("administrativo/administrativo.dat", "rb");
            int conta_adm_total = 0, conta_adm_ativo = 0, conta_adm_inativo = 0;
            while(fread(adm, sizeof(Admin), 1, fp)) {
                data = adm->data;
                trat_dat_ent (data);
                int ok = compara_datas_relat(data, data_ini, data_fim);
                if (ok == 1) {
                    conta_adm_total ++;
                    if (adm->status == '1') {
                        conta_adm_ativo ++;
                    } else if (adm->status == '0') {
                        conta_adm_inativo ++;
                    }
                    relat_pessoa_adm (adm);
                }
            } 
            fclose(fp);
            limpa_buffer();
            tela_fecha_relat1(conta_adm_total, conta_adm_ativo, conta_adm_inativo);
        }
    }
}

void relat_nome_adm (void) {
    FILE *fp;
    Admin* adm;
    adm = (Admin*) malloc(sizeof(Admin));
    char* nome = le_nome("Relatório administrativo por nome");
    if (cancel(nome)) {
        fp = fopen("administrativo/administrativo.dat", "rb");
        int conta_adm_total = 0, conta_adm_ativo = 0, conta_adm_inativo = 0;
        while(fread(adm, sizeof(Admin), 1, fp)) {
            if (strstr(adm->nome, nome) != NULL) {
                conta_adm_total ++;
                if (adm->status == '1') {
                    conta_adm_ativo ++;
                } else if (adm->status == '0') {
                    conta_adm_inativo ++;
                }
                relat_pessoa_adm (adm);
            }
        }
        fclose(fp);
        limpa_buffer();
        tela_fecha_relat1(conta_adm_total, conta_adm_ativo, conta_adm_inativo);
    }
}