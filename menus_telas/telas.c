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
//Telas do programa
//
//Tela banner
//
void tela_banner (void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   #######                                #######                        |\n");
    printf("|   #         ##    ####  #      ######    #       #   # ######  ####     |\n");
    printf("|   #        #  #  #    # #      #         #        # #  #      #         |\n");
    printf("|   #####   #    # #      #      #####     #####     #   #####   ####     |\n");
    printf("|   #       ###### #  ### #      #         #         #   #           #    |\n");
    printf("|   #       #    # #    # #      #         #         #   #      #    #    |\n");
    printf("|   ####### #    #  ####  ###### ######    #######   #   ######  ####     |\n");   
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Telas módulo administrativo
//
//Tela universal de uma linha
//Recebe uma string parametro, centraliza e printa
//
void tela_universal (char* a) {
    tela_banner ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto(a, 73, 0));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela cadastro existente
//
void tela_erro (char* tela) {
    limpa_buffer ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto("ERRO ! ! !", 73, 0));
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto(tela, 73, 0));
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto("Tecle ENTER para seguir", 73, 0));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    limpa_buffer ();
}


//Tela venda concluída
//
void tela_ok (void) {
    limpa_buffer ();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto("OPERAÇÃO REALIZADA COM SUCESSO ! ! !", 73, 0));
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto("Tecle ENTER para prosseguir", 73, 0));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
    limpa_buffer ();
}


//Informativo venda para cliente sem cadastro
//
void info_cliente_0 (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto("No caso do cadastro inexistente", 73, 0));
    printf("|                                                                         |\n");
    printf("|%s|\n", centralizar_texto("insira '0' em todos os campos, logo após tecle ENTER para prosseguir", 73, 0));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Telas Exemplos
//
//Tela cadastro pessoas físicas
//
void tela_pessoas (char* tela, char* cpf, char* email, char* cel, char* nome, char status, char* data, char* hora, int id) {
    tela_universal (tela);
    char id_c[8];
    snprintf(id_c, sizeof(id_c), "%d", id);
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF/CNPJ : %s|\n", centralizar_texto(cpf, 59, -1));
    printf("|                                                                         |\n");
    printf("|   Email : %s|\n", centralizar_texto(email, 62, -1));
    printf("|                                                                         |\n");
    printf("|   Cel .: %s|\n", centralizar_texto(cel, 63, -1));
    printf("|                                                                         |\n");
    printf("|   Nome : %s|\n", centralizar_texto(nome, 63, -1));
    printf("|                                                                         |\n");
    printf("|   Data : %s|\n", centralizar_texto(data, 63, -1));
    printf("|                                                                         |\n");
    printf("|   Horário : %s|\n", centralizar_texto(hora, 60, -1));
    printf("|                                                                         |\n");
    printf("|   ID : %s|\n", centralizar_texto(id_c, 65, -1));
    printf("|                                                                         |\n");
    printf("|   Status do cadastro (1 = ativo, 0 = inativo) : %c                       |\n", status);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo cadastro produto
//
void tela_produto (char* tela, char* cod_barras, char* cnpj, char* desc,
 char* quant, char* valor_comp, char* valor_vend, char* data, char* hora, int id) {
    char id_c[8];
    snprintf(id_c, sizeof(id_c), "%d", id);
    tela_universal (tela);
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : %s|\n", centralizar_texto(cod_barras, 51, -1));
    printf("|                                                                         |\n");
    printf("|   Fornecedor : %s|\n", centralizar_texto(cnpj, 57, -1));
    printf("|                                                                         |\n");
    printf("|   Descrição do produto : %s|\n", centralizar_texto(desc, 47, -1));
    printf("|                                                                         |\n");
    printf("|   Estoque atual : %s|\n", centralizar_texto(quant, 54, -1));
    printf("|                                                                         |\n");
    printf("|   Valor de compra : %s|\n", centralizar_texto(valor_comp, 52, -1));
    printf("|                                                                         |\n");
    printf("|   Valor de venda : %s|\n", centralizar_texto(valor_vend, 53, -1));
    printf("|                                                                         |\n");
    printf("|   Data : %s|\n", centralizar_texto(data, 63, -1));
    printf("|                                                                         |\n");
    printf("|   Horário : %s|\n", centralizar_texto(hora, 60, -1));
    printf("|                                                                         |\n");
    printf("|   ID : %s|\n", centralizar_texto(id_c, 65, -1));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo cadastro venda
//
void tela_venda (char* tela, char* cli, char* col, char* cod_barras, char* desc,
 char* v_v_uni, char* quant, char* v_v_tot, int id, char status, char* data, char* hora) {
    tela_universal (tela);
    char id_c[8];
    snprintf(id_c, sizeof(id_c), "%d", id);
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Cliente CPF : %s|\n", centralizar_texto(cli, 56, -1));
    printf("|                                                                         |\n");
    printf("|   Colaborador CPF : %s|\n", centralizar_texto(col, 52, -1));
    printf("|                                                                         |\n");
    printf("|   Produto CdB : %s|\n", centralizar_texto(cod_barras, 56, -1));
    printf("|                                                                         |\n");
    printf("|   Desc. : %s|\n", centralizar_texto(desc, 62, -1));
    printf("|                                                                         |\n");
    printf("|   Quant. / Uni. / Tot. : %s x %s = %s|\n", v_v_uni, quant, centralizar_texto(v_v_tot, (41-(strlen(v_v_uni)+(strlen(quant)))), -1));
    printf("|                                                                         |\n");
    printf("|   Data : %s|\n", centralizar_texto(data, 63, -1));
    printf("|                                                                         |\n");
    printf("|   Horário : %s|\n", centralizar_texto(hora, 60, -1));
    printf("|                                                                         |\n");
    printf("|   ID : %s|\n", centralizar_texto(id_c, 65, -1));
    printf("|                                                                         |\n");
    printf("|   Status da venda (1 = ativo, 0 = inativo) : %c                          |\n", status);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}

void tela_list_venda1 (char* tela, char* cli, char* col) {
    tela_universal (tela);
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Cliente CPF : %s|\n", centralizar_texto(cli, 56, -1));
    printf("|                                                                         |\n");
    printf("|   Colaborador CPF : %s|\n", centralizar_texto(col, 52, -1));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}

void tela_list_venda2 (char* cod_barras, char* desc, char* v_v_uni, char* quant, char* v_v_tot) {
    printf("|                                                                         |\n");
    printf("|   Produto CdB : %s|\n", centralizar_texto(cod_barras, 56, -1));
    printf("|                                                                         |\n");
    printf("|   Desc. : %s|\n", centralizar_texto(desc, 62, -1));
    printf("|                                                                         |\n");
    printf("|   Quant. / Uni. / Tot. : %s x %s = %s|\n", v_v_uni, quant, centralizar_texto(v_v_tot, (41-(strlen(v_v_uni)+(strlen(quant)))), -1));
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}

void tela_list_venda_f (char* data, char* hora, int id, char status) {
    char id_c[8];
    snprintf(id_c, sizeof(id_c), "%d", id);
    printf("|                                                                         |\n");
    printf("|   Data : %s|\n", centralizar_texto(data, 63, -1));
    printf("|                                                                         |\n");
    printf("|   Horário : %s|\n", centralizar_texto(hora, 60, -1));
    printf("|                                                                         |\n");
    printf("|   ID : %s|\n", centralizar_texto(id_c, 65, -1));
    printf("|                                                                         |\n");
    printf("|   Status da venda (1 = ativo, 0 = inativo) : %c                          |\n", status);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}

void tela_relat_pessoa (void) {
    printf("+=========================================================================+\n");
    printf("|%s|%s|%s|%s|\n", centralizar_texto("CPF / CNPJ", 20, 0), centralizar_texto("ID", 5, 0), centralizar_texto("NOME", 38, 0), centralizar_texto("STATUS", 7, 0));
    printf("+=========================================================================+\n");
}

void tela_sem_cad (void) {
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|\n", centralizar_texto("CADASTROS NÃO ENCONTRADOS ! ! !", 74, 0));
    printf("+-------------------------------------------------------------------------+\n");
}

void relat_pessoa_adm (Admin* adm) {
    char* id =(char*) malloc(8*sizeof(char));
    sprintf(id,"%d",adm->id);
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|%s|%s|   %c   |\n", centralizar_texto(adm->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(adm->nome, 38, 0), adm->status);
}

void relat_pessoa_atv_adm (Admin* adm) {
    if (adm->status == '1') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",adm->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(adm->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(adm->nome, 38, 0), adm->status);
    }
}

void relat_pessoa_inatv_adm (Admin* adm) {
    if (adm->status == '0') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",adm->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(adm->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(adm->nome, 38, 0), adm->status);
    }
}

void tela_fecha_relat (int quantidade) {
    char* quant =(char*) malloc(8*sizeof(char));
    sprintf(quant,"%d",quantidade);
    printf("+-------------------------------------------------------------------------+\n");
    printf("+=========================================================================+\n");
    printf("|%s : %s|\n", centralizar_texto("TOTAL DE CADASTROS ENCONTRADOS NO SISTEMA", 54, 1), centralizar_texto(quant, 16, -1));
    printf("+=========================================================================+\n");
}

void tela_fecha_relat1 (int quantidade, int ativos, int inativos) {
    char texto_q[25] = "TOTAL ENCONTRADO : ";
    char* quant = (char*) malloc(8*sizeof(char));
    sprintf(quant,"%d",quantidade);
    strcat(texto_q, quant);
    char texto_at[15] = "ATIVOS : ";
    char* at = (char*) malloc(8*sizeof(char));
    sprintf(at,"%d",ativos);
    strcat(texto_at, at);
    char texto_inat[17] = "INATIVOS : ";
    char* inat = (char*) malloc(8*sizeof(char));
    sprintf(inat,"%d",inativos);
    strcat(texto_inat, inat);
    printf("+-------------------------------------------------------------------------+\n");
    printf("+=========================================================================+\n");
    printf("|%s|%s|%s|\n", centralizar_texto(texto_q, 33, 0), centralizar_texto(texto_at, 19, 0), centralizar_texto(texto_inat, 19, 0));
    printf("+=========================================================================+\n");
}

void relat_pessoa_forn (Fornec* forn) {
    char* id =(char*) malloc(8*sizeof(char));
    sprintf(id,"%d",forn->id);
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|%s|%s|   %c   |\n", centralizar_texto(forn->cnpj, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(forn->nome, 38, 0), forn->status);
}

void relat_pessoa_atv_forn (Fornec* forn) {
    if (forn->status == '1') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",forn->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(forn->cnpj, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(forn->nome, 38, 0), forn->status);
    }
}

void relat_pessoa_inatv_forn (Fornec* forn) {
    if (forn->status == '0') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",forn->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(forn->cnpj, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(forn->nome, 38, 0), forn->status);
    }
}

void relat_pessoa_cli (Client* cli) {
    char* id =(char*) malloc(8*sizeof(char));
    sprintf(id,"%d",cli->id);
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|%s|%s|   %c   |\n", centralizar_texto(cli->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(cli->nome, 38, 0), cli->status);
}

void relat_pessoa_atv_cli (Client* cli) {
    if (cli->status == '1') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",cli->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(cli->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(cli->nome, 38, 0), cli->status);
    }
}

void relat_pessoa_inatv_cli (Client* cli) {
    if (cli->status == '0') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",cli->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(cli->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(cli->nome, 38, 0), cli->status);
    }
}
void relat_pessoa_col (Colab* col) {
    char* id =(char*) malloc(8*sizeof(char));
    sprintf(id,"%d",col->id);
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|%s|%s|   %c   |\n", centralizar_texto(col->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(col->nome, 38, 0), col->status);
}

void relat_pessoa_atv_col (Colab* col) {
    if (col->status == '1') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",col->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(col->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(col->nome, 38, 0), col->status);
    }
}

void relat_pessoa_inatv_col (Colab* col) {
    if (col->status == '0') {
        char* id =(char*) malloc(8*sizeof(char));
        sprintf(id,"%d",col->id);
        printf("+-------------------------------------------------------------------------+\n");
        printf("|%s|%s|%s|   %c   |\n", centralizar_texto(col->cpf, 20, 0), centralizar_texto(id, 5, 0), centralizar_texto(col->nome, 38, 0), col->status);
    }
}

void tela_relat_prod (void) {
    printf("+=========================================================================+\n");
    printf("|%s|%s|%s|%s|\n", centralizar_texto("COD. BARRAS", 15, 0), centralizar_texto("DESCRIÇÃO", 35, 0), centralizar_texto("V COMPRA", 10, 0), centralizar_texto("V VENDA", 10, 0));
    printf("+=========================================================================+\n");
}

void relat_prod_t (Prod* pro) {
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|%s|%s|%s|\n", centralizar_texto(pro->cod_barras, 15, 0), centralizar_texto(pro->desc, 35, 0), centralizar_texto(pro->valor_comp, 10, 0), centralizar_texto(pro->valor_vend, 10, 0));
}

void tela_relat_vend (void) {
    printf("+=========================================================================+\n");
    printf("|%s|%s|%s|%s|\n", centralizar_texto("PRODUTO", 25, 0), centralizar_texto("COLABORADOR", 16, 0), centralizar_texto("CLIENTE", 16, 0), centralizar_texto("V VENDA", 13, 0));
    printf("+=========================================================================+\n");
}

void relat_vend_t (Vend* ven) {
    printf("+-------------------------------------------------------------------------+\n");
    printf("|%s|%s|%s|%s|\n", centralizar_texto(ven->desc, 25, 0), centralizar_texto(ven->cpf_col, 16, 0), centralizar_texto(ven->cpf_cli, 16, 0), centralizar_texto(ven->valor_vend_tot, 13, 0));
}
