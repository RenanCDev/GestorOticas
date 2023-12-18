#include "../util/all.h"

void relat_venda (void) {
    char op2;
    do { 
        op2 = menu_modulo_vend ("Relatórios vendas");
        switch (op2) {
            case '1':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '2':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '3':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '4':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '5':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '6':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '7':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
            case '8':
                tela_banner ();
                relat_ven (op2);
                limpa_buffer ();
                break;
        }
    } while (op2 != '0');
}

void relat_ven (char escolha) {
    if ((escolha == '1') || (escolha == '3') || (escolha == '5')) {
        relat_crono_ven (escolha);
    } else if ((escolha == '2') || (escolha == '4') || (escolha == '6')) {
        // relat_alfa_ven(escolha);    
    } else if (escolha == '7') {
        // relat_data_ven ();
    } else if (escolha == '8') {
        // relat_nome_ven ();
    }
}

void relat_crono_ven (char escolha) {
    FILE *fp;
    Vend* ven;
    ven = (Vend*) malloc(sizeof(Vend));
    fp = fopen("dat/venda.dat", "rb");
    int conta_ven_total = 0, conta_ven_ativo = 0, conta_ven_inativo = 0;
    tela_universal ("Relatório venda em ordem cronológica");
    tela_relat_vend ();
    int id = 0;
    Vend* lista;
    lista = NULL;
    while(fread(ven, sizeof(Vend), 1, fp)) {
        if (ven->id != id) {
            conta_ven_total ++;
            if ((ven->status == '1')) {
                conta_ven_ativo ++;
            } else if ((ven->status == '0')) {
                conta_ven_inativo ++;
            }
            id = ven->id;
        }
        ven->prox = NULL;
        if ((lista == NULL) || (ven->id == lista->id)) {
            ven->prox = lista;
            lista = ven;
        } else {
            Vend* anterior = lista;
            Vend* atual = lista->prox;
                int round = 0;
            while ((atual != NULL) && (atual->id < ven->id)) {
                anterior = atual;
                atual = atual->prox;
                if (atual != NULL) {
                round ++;
                }
            }
        anterior->prox = ven;
        ven->prox = atual;
        }
    ven = (Vend*)malloc(sizeof(Vend));
    }
    ven = lista;
    id = 1;
    while (ven != NULL) {
        switch (escolha) {
            case '1':
                if (ven->id == id) {
                    relat_vend_t (ven);
                    id++;
                }
                ven = ven->prox;
                break;
            case '3':
                if (ven->id == id) {
                    relat_vend_t_at (ven);
                    id++;
                }
                ven = ven->prox;
                break;
            case '5':
                if (ven->id == id) {
                    relat_vend_t_inat (ven);
                    id++;
                }
                ven = ven->prox;
                break;
        }
    }
    ven = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(ven);
        ven = lista;
    }
    fclose(fp);
    limpa_buffer();
    tela_fecha_relat1(conta_ven_total, conta_ven_ativo, conta_ven_inativo);
}

void relat_data_ven (void) {
    FILE *fp;
    Vend* ven;
    ven = (Vend*) malloc(sizeof(Vend));
    char* data;
    char* data_ini = le_data_ini ("Relatório venda entre datas");
    if (cancel(data_ini)) {
        trat_dat_ent (data_ini);
        char* data_fim = le_data_fim ("Relatório venda entre datas", data_ini);
        if (cancel(data_fim)) {
            trat_dat_ent (data_fim);
            fp = fopen("dat/venda.dat", "rb");
            int conta_ven_total = 0, conta_ven_ativo = 0, conta_ven_inativo = 0;
            while(fread(ven, sizeof(Vend), 1, fp)) {
                data = ven->data;
                trat_dat_ent (data);
                int ok = compara_datas_relat(data, data_ini, data_fim);
                if (ok == 1) {
                    conta_ven_total ++;
                    if (ven->status == '1') {
                        conta_ven_ativo ++;
                    } else if (ven->status == '0') {
                        conta_ven_inativo ++;
                    }
                    relat_vend_t (ven);
                }
            } 
            fclose(fp);
            limpa_buffer();
            tela_fecha_relat1(conta_ven_total, conta_ven_ativo, conta_ven_inativo);
        }
    }
}

// void relat_nome_ven (void) {
//     FILE *fp;
//     Vend* ven;
//     ven = (Vend*) malloc(sizeof(Vend));
//     char* nome = le_nome("Relatório venda por nome");
//     if (cancel(nome)) {
//         fp = fopen("dat/venda.dat", "rb");
//         int conta_ven_total = 0, conta_ven_ativo = 0, conta_ven_inativo = 0;
//         while(fread(ven, sizeof(Vend), 1, fp)) {
//             if (strstr(ven->nome, nome) != NULL) {
//                 conta_ven_total ++;
//                 if (ven->status == '1') {
//                     conta_ven_ativo ++;
//                 } else if (ven->status == '0') {
//                     conta_ven_inativo ++;
//                 }
//                 relat_pessoa_vend (ven);
//             }
//         }
//         fclose(fp);
//         limpa_buffer();
//         tela_fecha_relat1(conta_ven_total, conta_ven_ativo, conta_ven_inativo);
//     }
// }