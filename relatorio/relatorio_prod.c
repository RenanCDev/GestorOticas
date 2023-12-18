#include "../util/all.h"

void relat_produto (void) {
    char op2;
    do { 
        op2 = menu_modulo_prod ("Relatórios produtos");
        switch (op2) {
            case '1':
                tela_banner ();
                relat_crono_pro ();
                limpa_buffer ();
                break;
            case '2':
                tela_banner ();
                relat_alfa_pro ();
                limpa_buffer ();
                break;
            case '3':
                tela_banner ();
                relat_alfa_cod_pro ();
                limpa_buffer ();
                break;
            case '4':
                tela_banner ();
                relat_forn_pro ();
                limpa_buffer ();
                break;
            case '5':
                tela_banner ();
                relat_prec_comp_pro ();
                limpa_buffer ();
                break;
            case '6':
                tela_banner ();
                relat_prec_vend_pro ();
                limpa_buffer ();
                break;
            case '7':
                tela_banner ();
                relat_desc_prod ();
                limpa_buffer ();
                break;
        }
    } while (op2 != '0');
}

void relat_crono_pro (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    int conta_pro_total = 0;
    tela_universal ("Relatório produto em ordem cronológica");
    tela_relat_prod ();
    while(fread(pro, sizeof(Prod), 1, fp)) {
        conta_pro_total ++;
        relat_prod_t (pro);
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat (conta_pro_total);
}

void relat_alfa_pro (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    int conta_pro_total = 0;
    Prod* lista;
    lista = NULL;
    tela_universal ("Relatório produto em ordem alfabética");
    tela_relat_prod ();
    while(fread(pro, sizeof(Prod), 1, fp)) {
        pro->prox = NULL;
        if ((lista == NULL) || (strcmp(pro->desc, lista->desc) < 0)) {
            pro->prox = lista;
            lista = pro;
        } else {
            Prod* anterior = lista;
            Prod* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->desc, pro->desc) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = pro;
        pro->prox = atual;
        }
    pro = (Prod*)malloc(sizeof(Prod));
    }
    pro = lista;
    while (pro != NULL) {
        conta_pro_total ++;
        relat_prod_t (pro);
        pro = pro->prox;
    }
    pro = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(pro);
        pro = lista;
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat(conta_pro_total);
}

void relat_alfa_cod_pro (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    int conta_pro_total = 0;
    Prod* lista;
    lista = NULL;
    tela_universal ("Relatório produto em ordem por código de barras");
    tela_relat_prod ();
    while(fread(pro, sizeof(Prod), 1, fp)) {
        pro->prox = NULL;
        if ((lista == NULL) || (strcmp(pro->cod_barras, lista->cod_barras) < 0)) {
            pro->prox = lista;
            lista = pro;
        } else {
            Prod* anterior = lista;
            Prod* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->cod_barras, pro->cod_barras) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = pro;
        pro->prox = atual;
        }
    pro = (Prod*)malloc(sizeof(Prod));
    }
    pro = lista;
    while (pro != NULL) {
        conta_pro_total ++;
        relat_prod_t (pro);
        pro = pro->prox;
    }
    pro = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(pro);
        pro = lista;
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat(conta_pro_total);
}

void relat_forn_pro (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    char* cnpj = forn_relat("Relatório produto por fornecedor");
    if (cancel(cnpj)) {
        fp = fopen("dat/produto.dat", "rb");
        int conta_pro_total = 0;
        while(fread(pro, sizeof(Prod), 1, fp)) {
            if (strcmp(pro->cnpj, cnpj) == 0) {
                conta_pro_total ++;
                relat_prod_t (pro);
            }
        }
        fclose(fp);
        limpa_buffer();
        tela_fecha_relat (conta_pro_total);
    }
}

void relat_prec_comp_pro (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    int conta_pro_total = 0;
    Prod* lista;
    lista = NULL;
    tela_universal ("Relatório produto por preço de compra");
    tela_relat_prod ();
    while(fread(pro, sizeof(Prod), 1, fp)) {
        pro->prox = NULL;
        if ((lista == NULL) || (strcmp(pro->valor_comp, lista->valor_comp) < 0)) {
            pro->prox = lista;
            lista = pro;
        } else {
            Prod* anterior = lista;
            Prod* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->valor_comp, pro->valor_comp) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = pro;
        pro->prox = atual;
        }
    pro = (Prod*)malloc(sizeof(Prod));
    }
    pro = lista;
    while (pro != NULL) {
        conta_pro_total ++;
        relat_prod_t (pro);
        pro = pro->prox;
    }
    pro = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(pro);
        pro = lista;
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat(conta_pro_total);
}

void relat_prec_vend_pro (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    int conta_pro_total = 0;
    Prod* lista;
    lista = NULL;
    tela_universal ("Relatório produto por preço de venda");
    tela_relat_prod ();
    while(fread(pro, sizeof(Prod), 1, fp)) {
        pro->prox = NULL;
        if ((lista == NULL) || (strcmp(pro->valor_vend, lista->valor_vend) < 0)) {
            pro->prox = lista;
            lista = pro;
        } else {
            Prod* anterior = lista;
            Prod* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->valor_vend, pro->valor_vend) < 0) {
                anterior = atual;
                atual = atual->prox;
            }
        anterior->prox = pro;
        pro->prox = atual;
        }
    pro = (Prod*)malloc(sizeof(Prod));
    }
    pro = lista;
    while (pro != NULL) {
        conta_pro_total ++;
        relat_prod_t (pro);
        pro = pro->prox;
    }
    pro = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(pro);
        pro = lista;
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat(conta_pro_total);
}

void relat_desc_prod (void) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*) malloc(sizeof(Prod));
    char* desc = le_desc_prod("Relatório produto por descrição");
    if (cancel(desc)) {
        fp = fopen("dat/produto.dat", "rb");
        int conta_pro_total = 0;
        tela_relat_prod ();
        while(fread(pro, sizeof(Prod), 1, fp)) {
            if (strstr(pro->desc, desc) != NULL) {
                conta_pro_total ++;
                relat_prod_t (pro);
            }
        }
        fclose(fp);
        limpa_buffer();
        tela_fecha_relat(conta_pro_total);
    }
}