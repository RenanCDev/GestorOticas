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


//Módulo produto: cadastro e pesquisa de produtos
void modulo_produto (void) {
    Prod* produto;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Produto", " 1 -> Cadastrar produto <- ", " 2 -> Pesquisar produto <- ");
            switch (op) {
                case '1':
                    limpa_buffer ();
                    produto = cad_prod (); //Cria a struct Prod
                    gravar_prod (produto); //Grava a struct Prod em arquivo
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_prod (); //Pesquisa a struct Prod em arquivo
                    break; 
            } 
        } while (op != '0'); 
}


//Percorre o algoritmo para cadastrar um novo produto adequadamente
Prod* cad_prod (void) {
    Prod* pro;
    pro = (Prod*)malloc((sizeof(Prod)));
    char* cod_barras;
    char* cnpj;
    do {
        cod_barras = le_cod_barras ("Cadastro produto");
        if (carregar_prod (cod_barras) != NULL) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (carregar_prod (cod_barras) != NULL);
    strcpy(pro->cod_barras, cod_barras);
    limpa_buffer ();
    do {
        cnpj = le_cnpj ("Cadastro produto");
        if (carregar_fornec (cnpj) != NULL) {
            tela_erro ("Entrada não cadastrada");
        }
    } while (carregar_fornec (cnpj) != NULL);
    strcpy(pro->cnpj, cnpj);
    limpa_buffer ();
    char* desc = le_desc_prod ("Cadastro produto");
    strcpy(pro->desc, desc);
    limpa_buffer ();
    char* quant = le_quant ("Cadastro produto");
    strcpy(pro->quant, quant);
    limpa_buffer ();
    char* valor_comp = le_valor_c ("Cadastro produto");
    strcpy(pro->valor_comp, valor_comp);
    limpa_buffer ();
    char* valor_vend = le_valor_v ("Cadastro produto");
    strcpy(pro->valor_vend, valor_vend);
    tela_produto ("Cadastro produto", pro->cod_barras, pro->cnpj, pro->desc, pro->quant,
     pro->valor_comp, pro->valor_vend);
    tela_ok ();
    return pro;
}


//Percorre o algoritmo para gravar um produto em arquivo adequadamente
void gravar_prod (Prod* pro) {
    FILE *fp_pro;
    fp_pro = fopen("dat/produto.dat", "ab");
    do {
        fwrite(pro, sizeof(Prod), 1, fp_pro);
    } while (fwrite(pro, sizeof(Prod), 1, fp_pro) != 1);
    fclose(fp_pro);
    free(pro);
}


//Percorre o algoritmo para pesquisar um produto adequadamente
Prod* pesq_prod (void) {
    Prod* pro;
    char* cod_barras;
    do{
        cod_barras = le_cod_barras ("Pesquisa produto");
        pro = carregar_prod (cod_barras);
        if (pro == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while (pro == NULL);
        char edit;
        do {
            edit = menu_edit_prod ("Cadastro produto", pro->cod_barras, pro->cnpj, pro->desc, pro->quant, pro->valor_comp, pro->valor_vend);
            if ((edit >= '1') && (edit <= '5')) {
                regravar_prod (pro, edit);
                tela_ok ();
            }
        } while (edit != '0'); 
    return pro;
}


//Percorre o algoritmo para carregar um produto do arquivo adequadamente
Prod* carregar_prod (char* cod_barras) {
    FILE *fp;
    Prod* pro;
    pro = (Prod*)malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "rb");
    while (fread(pro, sizeof(Prod), 1, fp)) {
        if ((!strcmp(pro->cod_barras, cod_barras))) {
            fclose(fp);
            return pro;
        }
    }
    fclose(fp);
    return NULL;
}


//Percorre o algoritmo para regravar um produto em arquivo adequadamente
void regravar_prod (Prod* pro, char op) {
    FILE* fp;
    Prod* nova_ent;
    nova_ent = (Prod*)malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Prod), 1, fp);
        if (strcmp(nova_ent->cod_barras, pro->cod_barras) == 0) {
            edit_cad_prod (pro, op);
            fseek(fp, -1 * sizeof(Prod), SEEK_CUR);
            fwrite(pro, sizeof(Prod), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


//Percorre o algoritmo para regravar nova quantidade do produto em arquivo adequadamente
void regravar_prod_quant (Prod* pro) {
    FILE* fp;
    Prod* nova_ent;
    nova_ent = (Prod*)malloc(sizeof(Prod));
    fp = fopen("dat/produto.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Prod), 1, fp);
        if (strcmp(nova_ent->cod_barras, pro->cod_barras) == 0) {
            fseek(fp, -1 * sizeof(Prod), SEEK_CUR);
            fwrite(pro, sizeof(Prod), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


//Percorre o algoritmo para editar ou fazer a exclusão lógica do produto em arquivo adequadamente
void edit_cad_prod (Prod* pro, char op) {
    char* cnpj;
    switch (op) {
        case '1' :
            do {
                cnpj = le_cnpj ("Cadastro produto");
                if (carregar_fornec (cnpj) != NULL) {
                    tela_erro ("Entrada não cadastrada");
                }
            } while (carregar_fornec (cnpj) != NULL);
            strcpy(pro->cnpj, cnpj);
            break;
        case '2' :
            limpa_buffer ();
            char* desc = le_desc_prod ("Cadastro produto");
            strcpy(pro->desc, desc);
            break;
        case '3' :
            limpa_buffer ();
            char* quant = le_quant ("Cadastro produto");
            strcpy(pro->quant, quant);
            break;
        case '4' :
            limpa_buffer ();
            char* valor_comp = le_valor_c ("Cadastro produto");
            strcpy(pro->valor_comp, valor_comp);
            break;
        case '5' :
            limpa_buffer ();
            char* valor_vend = le_valor_v ("Cadastro produto");
            strcpy(pro->valor_vend, valor_vend);
            break;
    }
}