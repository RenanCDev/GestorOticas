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
//Percorre todo o caminho do menu produto
//
void modulo_produto (void) {
    Prod* produto;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Produto", " 1 -> Cadastrar produto <- ", " 2 -> pesquisar Produto <- ");
            switch (op) {
                case '1':
                    limpa_buffer ();
                    produto = cad_prod ();
                    gravar_prod (produto);
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_prod ();
                    break; 
            } 
        } while (op != '0'); 
}


//Cadastra produto
//
Prod* cad_prod (void) {
    Prod* pro;
    pro = (Prod*)malloc((sizeof(Prod)));
    char* cod_barras = le_cod_barras ("Cadastro produto");
    strcpy(pro->cod_barras, cod_barras);
    limpa_buffer ();
    char* cnpj = le_cnpj ("Cadastro produto");
    strcpy(pro->cnpj, cnpj);
    limpa_buffer ();
    char* desc = le_desc_prod ("Cadastro produto");
    strcpy(pro->desc, desc);
    limpa_buffer ();
    char* quant = le_quant ("Cadastro produto");
    limpa_buffer ();
    strcpy(pro->quant, quant);
    char* valor_comp = le_valor_c ("Cadastro produto");
    strcpy(pro->valor_comp, valor_comp);
    limpa_buffer ();
    char* valor_vend = le_valor_v ("Cadastro produto");
    strcpy(pro->valor_vend, valor_vend);
    t_cad_prod_ok ("Cadastro produto", pro->cod_barras, pro->cnpj, pro->desc, pro->quant,
     pro->valor_comp, pro->valor_vend);
    tela_op_ok ();
    return pro;
}


//Gravador de dados do produto
//
void gravar_prod (Prod* pro) {
    FILE *fp_pro;
    fp_pro = fopen("dat/produto.dat", "ab");
    if (fp_pro == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(pro, sizeof(Prod), 1, fp_pro);
    fclose(fp_pro);
    free(pro);
}


//Pesquisa o cadastro de algum produto
//
void pesq_prod (void) {
    Prod* pro;
    char* cod_barras = le_cod_barras ("Cadastro prodistrador");
    pro = carregar_prod(cod_barras);
    if (pro == NULL) {
        tela_erro_dados ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    else {
    t_cad_prod_ok ("Cadastro produto", pro->cod_barras, pro->cnpj, pro->desc, pro->quant,
     pro->valor_comp, pro->valor_vend);    limpa_buffer ();
    free(pro);
    }
}


//Carregador de dados do produto
//
Prod* carregar_prod(char* cod_barras) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*)malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    if (fp == NULL) {
        tela_erro_dados("SAVE/ LOADING de dados incompleto ou com problema");
    }
    while (fread(pro, sizeof(Prod), 1, fp)) {
        if ((strcmp(pro->cod_barras, cod_barras) == 0)) {
            fclose(fp);
            return pro;
        }
    }
    fclose(fp);
    return NULL;
}