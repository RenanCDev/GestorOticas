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
#include <unistd.h>
#include "../util/all.h"

/////
//Percorre todo o caminho do menu venda
//
void modulo_venda (void) {
    Vend* venda;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    do {
        op = menu_sec_uni ("Venda", " 1 -> Cadastrar venda <- ", " 2 -> Pesquisar venda <- ");
        switch (op) {
            case '1':
                limpa_buffer ();
                venda = cad_vend ();
                gravar_vend(venda);
                break;
            case '2':
                limpa_buffer ();
                // pesq_vend ();
                break; 
        } 
    } while (op != '0'); 
}


//Cadastra venda
//
Vend* cad_vend (void) {
    Vend* ven;
    ven = (Vend*)malloc((sizeof(Vend)));
    char* cpf;
    char* cod_barras;
    char* quant;
    int quant_e;
    int quant_c;
    int quant_t;
    float v_vend;
    float v_vend_t;
    char status;
    do {
        cpf = le_cpf ("Cadastro venda - cliente");
        if (verify_cpf_dat_cli (cpf)) {
            tela_erro_dado_i ();
        }
    } while (verify_cpf_dat_cli (cpf));
    strcpy(ven->cpf_cli, cpf);
    limpa_buffer ();
    do {
        cpf = le_cpf ("Cadastro venda - colaborador");
        if (verify_cpf_dat_colab (cpf)) {
            tela_erro_dado_i ();
        }
    } while (verify_cpf_dat_colab (cpf));
    strcpy(ven->cpf_col, cpf);
    limpa_buffer ();
    do {
        cod_barras = le_cod_barras ("Cadastro venda");
        if (verify_cod_barras_dat_prod (cod_barras)) {
            tela_erro_dado_i ();
        }
    } while (verify_cod_barras_dat_prod (cod_barras));
    Prod* pro;
    pro = (Prod*)malloc((sizeof(Prod)));
    strcpy(ven->cod_barras, pro->cod_barras);
    strcpy(ven->desc, pro->desc);
    do {
        quant = le_quant ("Cadastro venda");
        quant_e = atoi(quant);
        quant_c = atoi(pro->quant);
        quant_t = quant_c - quant_e;
        if (quant_t < 0) {
            tela_erro ();
        } 
    } while (quant_t < 0);
    strcpy(ven->quant, quant);
    snprintf(pro->quant, sizeof(pro->quant), "%d", quant_t);
    regravar_prod_q (pro);
    strcpy(ven->valor_vend_uni, pro->valor_vend);
    v_vend = atof(pro->valor_vend);
    v_vend_t = v_vend * quant_e;
    snprintf(ven->valor_vend_tot, sizeof(ven->valor_vend_tot), "%.2f", v_vend_t);
    ven->id = gera_id ();
    status = '1';
    t_cad_vend_ok ("Cadastro venda", ven->cpf_cli, ven->cpf_col, ven->cod_barras
    , ven->desc, ven->quant, ven->valor_vend_uni, ven->valor_vend_tot, ven->id, status);
    tela_op_ok ();
    return ven;
}


//Gravador de dados da venda
//
void gravar_vend (Vend* ven) {
    FILE *fp_ven;
    fp_ven = fopen("dat/venda.dat", "ab");
    if (fp_ven == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(ven, sizeof(Vend), 1, fp_ven);
    fclose(fp_ven);
    free(ven);
}


int gera_id (void) {
    FILE *fp_ven;
    fp_ven = fopen("dat/venda.dat", "rb");
    if (fp_ven == NULL) {
        return 1;
    }
    fseek(fp_ven, 0, SEEK_END);
    if ((long)ftell(fp_ven) == 0){
        fclose(fp_ven);
        return 1;
    }
    else {
        fseek(fp_ven, -((long)sizeof(Vend)), SEEK_END);
        Vend* perf_f;
        perf_f = (Vend*)malloc(sizeof(Vend));
        fread(perf_f, sizeof(Vend), 1, fp_ven);
        int id = perf_f->id+1;
        fclose(fp_ven);
        return id;
    }
}