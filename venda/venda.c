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


//Inclui todas as importações e declarações necessárias no programa
#include "../util/all.h"


//Módulo venda: cadastro e pesquisa de vendas
void modulo_venda (void) {
    Vend* venda;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    do {
        op = menu_sec_uni ("Venda", " 1 -> Cadastrar venda <- ", " 2 -> Pesquisar venda <- ");
        switch (op) {
            case '1':
                limpa_buffer ();
                venda = cad_vend (); //Cria a struct Vend
                gravar_vend(venda); //Grava a struct Vend em arquivo
                break;
            case '2':
                limpa_buffer ();
                pesq_vend (); //Pesquisa a struct Vend em arquivo
                break; 
        } 
    } while (op != '0'); 
}


//Percorre o algoritmo para cadastrar uma nova venda adequadamente
Vend* cad_vend (void) {
    Vend* ven;
    ven = (Vend*)malloc((sizeof(Vend)));
    Prod* pro;
    pro = (Prod*)malloc((sizeof(Prod)));
    float v_vend;
    float v_vend_tot;
    char* cpf_cli = cli_cad ();
    strcpy(ven->cpf_cli, cpf_cli);
    limpa_buffer ();
    char* cpf_col = col_cad ();
    strcpy(ven->cpf_col, cpf_col);
    limpa_buffer ();
    pro = pro_cad ();
    strcpy(ven->cod_barras, pro->cod_barras);
    strcpy(ven->desc, pro->desc);
    char* quant = quants (pro);
    strcpy(ven->quant, quant);
    strcpy(ven->valor_vend_uni, pro->valor_vend);
    v_vend = atof(pro->valor_vend);
    int q_vend = atoi(quant);
    v_vend_tot = v_vend * q_vend;
    snprintf(ven->valor_vend_tot, sizeof(ven->valor_vend_tot), "%.2f", v_vend_tot);
    free(pro);
    ven->id = gera_id_vend ();
    ven->status = '1';
    tela_venda ("Cadastro venda", ven->cpf_cli, ven->cpf_col, ven->cod_barras,
    ven->desc, ven->quant, ven->valor_vend_uni, ven->valor_vend_tot, ven->id, ven->status);
    tela_ok ();
    return ven;
}


//Percorre o algoritmo para gravar uma venda em arquivo adequadamente
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


//Percorre o algoritmo para gerar um id de uma venda adequadamente
int gera_id_vend (void) {
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


//Percorre o algoritmo para pesquisar uma venda adequadamente
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
                excluir_vend (ven);
                tela_ok ();
            }
         } while ((edit != '0') && (edit != '1')); 
    return ven;
}


//Percorre o algoritmo para carregar uma venda do arquivo adequadamente
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


//Percorre o algoritmo para excluir logicamente uma venda em arquivo adequadamente
void excluir_vend (Vend* ven) {
    FILE* fp;
    Vend* nova_ent;
    nova_ent = (Vend*)malloc(sizeof(Vend));
    fp = fopen("dat/venda.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Vend), 1, fp);
        if (nova_ent->id == ven->id) {
            ven->status = '0';
            fseek(fp, -1 * sizeof(Vend), SEEK_CUR);
            fwrite(ven, sizeof(Vend), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}