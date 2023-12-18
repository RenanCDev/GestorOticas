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
                free (venda);
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
    char novo_item;
    float v_vend_tot_f = 0;
    ven->id = gera_id_vend ();
    char* cpf_cli = cli_cad ();
    if (!cancel(cpf_cli)) {
        return NULL;
    }
    strcpy(ven->cpf_cli, cpf_cli);
    limpa_buffer ();
    char* cpf_col = col_cad ();
    if (!cancel(cpf_col)) {
        return NULL;
    }
    strcpy(ven->cpf_col, cpf_col);
    limpa_buffer ();
    do {
        pro = pro_cad ();
        if (pro == NULL) {
            excluir_vend(ven);
            return NULL;
        }
        strcpy(ven->cod_barras, pro->cod_barras);
        strcpy(ven->desc, pro->desc);
        char* quant = quant_vend (pro);
        if (!cancel(quant)) {
            excluir_vend(ven);
            return NULL;
        }
        strcpy(ven->quant, quant);
        strcpy(ven->valor_vend_uni, pro->valor_vend);
        float v_vend = atof(pro->valor_vend);
        int q_vend = atoi(quant);
        float v_vend_tot = v_vend * q_vend;
        snprintf(ven->valor_vend_tot, sizeof(ven->valor_vend_tot), "%.2f", v_vend_tot);
        free(pro);
        novo_item = menu_item_venda ();
        if (novo_item == '0') {
            excluir_vend(ven);
            return NULL;
        }
        char* data = inst_data ();
        strcpy(ven->data, data);
        char* hora = inst_hora ();
        strcpy(ven->hora, hora);
        ven->status = '1';
        v_vend_tot_f += v_vend_tot;
        snprintf(ven->valor_vend_tot_f, sizeof(ven->valor_vend_tot_f), "%.2f", v_vend_tot_f);
        gravar_vend(ven);
    } while (novo_item != '2');
    tela_list_venda1 ("Cadastro venda", ven->cpf_cli, ven->cpf_col);
    lista_venda(ven->id);
    tela_list_venda_f(ven->valor_vend_tot_f, ven->data, ven->hora, ven->id, ven->status);
    tela_ok ();
    return ven;
}


//Percorre o algoritmo para gravar uma venda em arquivo adequadamente
void gravar_vend (Vend* ven) {
    FILE *fp_ven;
    fp_ven = fopen("dat/venda.dat", "ab");
    fwrite(ven, sizeof(Vend), 1, fp_ven);
    fclose(fp_ven);
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
        if (id == 0) {
            return NULL;
        }
        ven = carregar_vend (id);
        if (ven == NULL) {
            tela_erro ("Venda inexistente");
        }
    } while (ven == NULL);
        char edit;
        do {
            tela_list_venda1 ("Cadastro venda", ven->cpf_cli, ven->cpf_col);
            lista_venda(id);
            edit = menu_edit_vend ();
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
    while (fread(ven, sizeof(Vend), 1, fp)) {
        if ((ven->id == id) && (ven->status == '1')) {
            fclose(fp);
            return ven;
        }
    }
    fclose(fp);
    return NULL;
}

void lista_venda (int id) {
    FILE *fp;
    Vend* ven;
    ven = (Vend*) malloc(sizeof(Vend));
    fp = fopen("dat/venda.dat", "rb");
    while(fread(ven, sizeof(Vend), 1, fp)) {
        if (ven->id == id) {
            tela_list_venda2(ven->cod_barras, ven->desc, ven->valor_vend_uni, ven->quant, ven->valor_vend_tot);
        }
    }
    tela_list_venda_f(ven->valor_vend_tot_f, ven->data, ven->hora, ven->id, ven->status);
    fclose(fp);
}


//Percorre o algoritmo para excluir logicamente uma venda em arquivo adequadamente
void excluir_vend (Vend* ven) {
    FILE* fp;
    Vend* nova_ent;
    nova_ent = (Vend*)malloc(sizeof(Vend));
    Prod* pro;
    pro = (Prod*)malloc(sizeof(Prod));
    fp = fopen("dat/venda.dat", "r+b");
    while(!feof(fp)) {
        while(fread(nova_ent, sizeof(Vend), 1, fp)){
            if (nova_ent->id == ven->id) {
                pro = carregar_prod (ven->cod_barras);
                int devolve = atoi(ven->quant);
                int estoque = atoi(pro->quant);
                int novo_estoque = devolve + estoque;
                snprintf(pro->quant, sizeof(pro->quant), "%d", novo_estoque);
                regravar_prod_quant (pro);
                ven->status = '0';
                fseek(fp, -1 * sizeof(Vend), SEEK_CUR);
                fwrite(ven, sizeof(Vend), 1, fp);
            }
        }
    }
    fclose(fp);
    free(nova_ent);
}