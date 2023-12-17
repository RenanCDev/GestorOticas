#include "../util/all.h"


//Funções de leitura de entradas
//Leitura CPF
//
char* le_cpf (char* tela) {
    char* cpf;
    do {
        tela_universal (tela);
        cpf = ent_cpf ();
        if (!cancel(cpf)) {
            return "sair";
        } else if (!cpf_zero(cpf)) {
            recebe_cpf_zero(cpf);
            return cpf;
        }
        trat_cpf_entr (cpf);
        if (!valid_cpf(cpf)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_cpf(cpf)); 
    trat_cpf_said(cpf);
    return cpf;
}
//Leitura email
//
char* le_email (char* tela) {
    char* email;
    do {
        tela_universal (tela);
        email = ent_email ();
        if (!cancel(email)) {
            return "sair";
        } else if (!valid_email(email)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_email(email)); 
    return email;
}
//Leitura celular
//
char* le_cel (char* tela) {
    char* cel;
    do {
        tela_universal (tela);
        cel = ent_cel ();
        if (!cancel(cel)) {
            return "sair";
        }
        trat_cel_entr (cel);
        if (!valid_numeros(cel, 11)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_numeros(cel, 11)); 
    trat_cel_said (cel);
    return cel;
}
//Leitura nome
//
char* le_nome (char* tela) {
    char* nome;
    do {
        tela_universal (tela);
        nome = ent_nome ();
        if (!cancel(nome)) {
            return "sair";
        } else if (!valid_nome(nome)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_nome(nome)); 
    trat_nome(nome);
    return nome;
}
//Leitura cnpj
//
char* le_cnpj (char* tela) {
    char* cnpj;
    do {
        tela_universal (tela);
        cnpj = ent_cnpj ();
        if (!cancel(cnpj)) {
            return "sair";
        } else if (!cnpj_zero(cnpj)) {
            recebe_cnpj_zero(cnpj);
            return cnpj;
        }
        trat_cnpj_entr (cnpj);
        if (!valid_cnpj(cnpj)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_cnpj(cnpj)); 
    trat_cnpj_said(cnpj);
    return cnpj;
}
//Leitura código de barras
//
char* le_cod_barras (char* tela) {
    char* cod_barras;
    do {
        tela_universal (tela);
        cod_barras = ent_cod_barras ();
        if (!cancel(cod_barras)) {
            return "sair";
        } else if (!cod_barras_zero(cod_barras)) {
            recebe_cod_barras_zero(cod_barras);
            return cod_barras;
        } else if (!valid_cod_barras(cod_barras)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_cod_barras(cod_barras)); 
    return cod_barras;
}
//Leitura da descrição do produto
//
char* le_desc_prod (char* tela) {
    char* desc_prod;
    do {
        tela_universal (tela);
        desc_prod = ent_desc_produto ();
        if (!cancel(desc_prod)) {
            return "sair";
        }
        trat_nome(desc_prod);
        if (!valid_nome(desc_prod)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_nome(desc_prod));
    trat_nome(desc_prod);
    return desc_prod;
}
//Leitura quantidade de peças
//
char* le_quant (char* tela) {
    char* quant;
    do {
        tela_universal (tela);
        quant = ent_quant ();
        if (!cancel(quant)) {
            return "sair";
        } else if ((strlen(quant) > 8) || (!valid_numeros_s(quant))) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while ((strlen(quant) > 8) || (!valid_numeros_s(quant))); 
    return quant;
}
//Leitura valor de compra
//
char* le_valor_c (char* tela) {
    char* valor_ent;
    do {
        tela_universal (tela);
        valor_ent = ent_valor_ent ();
        if (!cancel(valor_ent)) {
            return "sair";
        } else if (!valid_numeros_f(valor_ent, 8)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_numeros_f(valor_ent, 8)); 
    return valor_ent;
}
//Leitura valor de venda
//
char* le_valor_v (char* tela) {
    char* valor_saida;
    do {
        tela_universal (tela);
        valor_saida = ent_valor_saida ();
        if (!cancel(valor_saida)) {
            return "sair";
        } else if (!valid_numeros_f(valor_saida, 8)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_numeros_f(valor_saida, 8)); 
    return valor_saida;
}
//Leitura de id da venda
//
int le_id (char* tela) {
    char* id;
    do {
        tela_universal (tela);
        id = ent_id_venda ();
        if (!cancel(id)) {
            return 0;
        } else if (!valid_numeros_s(id)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_numeros_s(id));
    int a = atoi (id);
    return a;
}


//Percorre o algoritmo para retornar um cpf de um cliente cadastrado
char* cli_cad (void) {
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro venda - cliente");
        if (!cancel(cpf)) {
            return "sair";
        } else if (carregar_cli (cpf) == NULL) {
            tela_erro ("Entrada não cadastrada");
        }
    } while (carregar_cli (cpf) == NULL);
    return cpf;
}


//Percorre o algoritmo para retornar um cpf de um colaborador cadastrado
char* col_cad (void) {
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro venda - colaborador");
        if (!cancel(cpf)) {
            return "sair";
        } else if (carregar_colab (cpf) == NULL) {
            tela_erro ("Entrada não cadastrada");
        }
    } while (carregar_colab (cpf) == NULL);
    return cpf;
}   


//Percorre o algoritmo para retornar um produto cadastrado
Prod* pro_cad (void) {
    Prod* pro;
    pro = (Prod*)malloc((sizeof(Prod)));
    char* cod_barras;
    do{
        cod_barras = le_cod_barras ("Cadastro venda");
        if (!cancel(cod_barras)) {
            return NULL;
        }
        pro = carregar_prod (cod_barras);
        if (pro == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while ((pro == NULL) || !cancel(cod_barras));
    return pro;
}

//Percorre o algoritmo para retornar um produto cadastrado
char* forn_relat (char* texto) {
    Fornec* forn;
    forn = (Fornec*)malloc((sizeof(Fornec)));
    char* cnpj;
    do{
        cnpj = le_cnpj (texto);
        if (!cancel(cnpj)) {
            return "sair";
        }
        forn = carregar_fornec (cnpj);
        if (forn == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while ((forn == NULL) || !cancel(cnpj));
    return cnpj;
}


//Percorre o algoritmo para retornar a quantidade vendida e atualização do estoque adequadamente
char* quant_vend (Prod* pro) {
    char* quant;
    int quant_escolhida;
    int quant_estoque;
    int quant_total;
    do {
        quant = le_quant ("Cadastro venda");
        if (!cancel(quant)) {
            return "sair";
        }
        quant_escolhida = atoi(quant);
        quant_estoque = atoi(pro->quant);
        quant_total = quant_estoque - quant_escolhida;
        if ((quant_total < 0) || (quant_estoque <= 0)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while ((quant_total < 0) || (quant_estoque <= 0));
    snprintf(pro->quant, sizeof(pro->quant), "%d", quant_total);
    regravar_prod_quant (pro);
    return quant;
}

char* le_data_ini (char* tela) {
    char* data;
    do {
        tela_universal (tela);
        data = ent_data_ini ();
        if (!cancel(data)) {
            return "sair";
        }
        trat_dat_ent (data);
        if (!valid_data(data)) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        } 
    } while (!valid_data (data));
    trat_dat_said (data);
    return data;
}

char* le_data_fim (char* tela, char* data_ini) {
    char* data;
    do {
        tela_universal (tela);
        data = ent_data_fim ();
        if (!cancel(data)) {
            return "sair";
        }
        trat_dat_ent (data);
        trat_dat_ent (data_ini);
        if ((!valid_data(data)) || (!compara_datas( data_ini, data))) {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
        }
    } while (!valid_data (data)); 
    trat_dat_said (data);
    return data;
}