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
                pesq_vend ();
                break; 
        } 
    } while (op != '0'); 
}


//Cadastra venda
//
Vend* cad_vend (void) {
    Vend* ven;
    ven = (Vend*)malloc((sizeof(Vend)));
    Prod* pro;
    pro = (Prod*)malloc((sizeof(Prod)));
    char* cpf;
    char* cod_barras;
    char* quant;
    int quant_e;
    int quant_c;
    int quant_tot;
    float v_vend;
    float v_vend_tot;
    do {
        cpf = le_cpf ("Cadastro venda - cliente");
        if (carregar_cli (cpf) != NULL) {
            tela_erro ("Entrada não cadastrada");
        }
    } while (carregar_cli (cpf) != NULL);
    strcpy(ven->cpf_cli, cpf);
    limpa_buffer ();
    do {
        cpf = le_cpf ("Cadastro venda - colaborador");
        if (carregar_colab (cpf) != NULL) {
            tela_erro ("Entrada não cadastrada");
        }
    } while (carregar_colab (cpf) != NULL);
    strcpy(ven->cpf_col, cpf);
    limpa_buffer ();
    do{
        cod_barras = le_cod_barras ("Cadastro venda");
        pro = carregar_prod (cod_barras);
        if (pro == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while (pro == NULL);
    strcpy(ven->cod_barras, pro->cod_barras);
    strcpy(ven->desc, pro->desc);
    do {
        quant = le_quant ("Cadastro venda");
        quant_e = atoi(quant);
        quant_c = atoi(pro->quant);
        quant_tot = quant_c - quant_e;
        if ((quant_tot < 0) || (quant_e <= 0)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while ((quant_tot < 0) || (quant_e <= 0));
    strcpy(ven->quant, quant);
    snprintf(pro->quant, sizeof(pro->quant), "%d", quant_tot);
    regravar_prod_quant (pro);
    strcpy(ven->valor_vend_uni, pro->valor_vend);
    v_vend = atof(pro->valor_vend);
    v_vend_tot = v_vend * quant_e;
    snprintf(ven->valor_vend_tot, sizeof(ven->valor_vend_tot), "%.2f", v_vend_tot);
    free(pro);
    ven->id = gera_id ();
    ven->status = '1';
    tela_venda ("Cadastro venda", ven->cpf_cli, ven->cpf_col, ven->cod_barras,
     ven->desc, ven->quant, ven->valor_vend_uni, ven->valor_vend_tot, ven->id, ven->status);
    tela_ok ();
    return ven;
}


//Gravador de dados da venda
//
void gravar_vend (Vend* ven) {
    FILE *fp_ven;
    fp_ven = fopen("dat/venda.dat", "ab");
    if (fp_ven == NULL) {
        tela_erro ("SAVE/ LOADING de dados incompleto ou com problema");
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


//Pesquisa o cadastro de algum venda
//
Vend* pesq_vend (void) {
    Vend* ven;
    int id;
    do{
        id = le_id ("Pesquisa venda");
        ven = carregar_vend (id);
        if (ven == NULL) {
            tela_erro ("Venda inexistente");
        }
    } while (ven == NULL);
        char edit;
        do {
            edit = menu_edit_vend ("Cadastro venda", ven->cpf_cli, ven->cpf_col, ven->cod_barras, ven->desc, ven->valor_vend_uni, ven->quant, ven->valor_vend_tot, ven->id, ven->status);
            if (edit == '1') {
                excluir_vend (id);
                tela_ok ();
            }
         } while ((edit != '0') && (edit != '1')); 
    return ven;
}


//Carregador de dados do fornecedor
//
Vend* carregar_vend (int id) {
    FILE *fp;
    Vend* ven;
    ven = (Vend*)malloc(sizeof(Vend));
    fp = fopen("dat/venda.dat", "rb");
    if (fp == NULL) {
    }
    while (fread(ven, sizeof(Vend), 1, fp)) {
        if ((ven->id == id) && (ven->status == '1')) {
            fclose(fp);
            return ven;
        }
    }
    fclose(fp);
    return NULL;
}


void excluir_vend (int id)  {
    Vend* ven;
    ven = (Vend*)malloc(sizeof(Vend));
    ven = carregar_vend (id);
    ven->status = '0';
    remove_vend (ven);
    free(ven);
}


void remove_vend (Vend* ven) {
    FILE *fp;
    Vend* ven_op;
    ven_op = (Vend*)malloc(sizeof(Vend));
    fp = fopen("dat/venda.dat", "r+b");
    while (!feof(fp)) {
        fread(ven_op, sizeof(Vend), 1, fp);
        if ((ven_op->id == ven->id) && (ven_op->status != '0')) {
            ven_op->status = '0';
            fseek(fp, -1 * sizeof(Vend), SEEK_CUR);
            fwrite(ven_op, sizeof(Vend), 1, fp);
        }
    }
    fclose(fp);
    free(ven_op);
}