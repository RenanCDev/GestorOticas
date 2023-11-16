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
void tela_pessoas (char* tela, char* cpf, char* email, char* cel, char* nome, char status) {
    tela_universal (tela);
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
    printf("|   Status do cadastro (1 = ativo, 0 = inativo) : %c                       |\n", status);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo cadastro produto
//
void tela_produto (char* tela, char* cod_barras, char* cnpj, char* desc,
 char* quant, char* valor_comp, char* valor_vend) {
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
    printf("+=========================================================================+\n"); 
}


//Tela exemplo cadastro venda
//
void tela_venda (char* tela, char* cli, char* col, char* cod_barras, char* desc,
 char* v_v_uni, char* quant, char* v_v_tot, int id, char status) {
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
    printf("|   Quant / Val. uni. / Val. tot. : %s x %s = %s|\n", v_v_uni, quant, centralizar_texto(v_v_tot, (32-(strlen(v_v_uni)+(strlen(quant)))), -1));
    printf("|                                                                         |\n");
    printf("|   ID : %s|\n", centralizar_texto(id_c, 65, -1));
    printf("|                                                                         |\n");
    printf("|   Status da venda (1 = ativo, 0 = inativo) : %c                          |\n", status);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo relatório administrador
//
void t_exe_relat_adm (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Administrador : Administrador Exemplo de eyes                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 01 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Atividade 02 - #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("|                  #descrição completa da venda . . .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  #dados comletos . . .                                  |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo relatório administrador
//
void t_exe_relat_forn (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CNPJ : XX.XXX.XXX/0001-XX                                             |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo de eyes                               |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 01 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 02 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo relatório administrador
//
void t_exe_relat_prod (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : 0 00000 00000 0                                    |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo Eagle                                 |\n");
    printf("|                                                                         |\n");
    printf("|   Produto : **** ******* ******** *******                               |\n");
    printf("|                                                                         |\n");
    printf("|   Estoque atual : 9999                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 999,99 R$                                           |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 1888,88 R$                                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa do produto . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa do produto . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa do produto . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo relatório colaborador
//
void t_exe_relat_colab (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Colaborador : Colaborador Exemplo de eyes                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 01 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Venda 02 - #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da venda . . .                         |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}
    

//Tela exemplo relatório cliente
//
void t_exe_relat_client (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   CPF : XXX.XXX.XXX-XX                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Email : email.exemplo@dominio.com                                     |\n");
    printf("|                                                                         |\n");
    printf("|   Cel .: (XX)9 9999 - 9999                                              |\n");
    printf("|                                                                         |\n");
    printf("|   Cliente : Cliente Exemplo de eyes                                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 01 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Compra 02 - #descrição completa da compra . . .                       |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("|              #descrição completa da compra . . .                        |\n");
    printf("|                                                                         |\n");
    printf("|              #dados comletos . . .                                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}


//Tela exemplo cadastro pproduto
//
void t_exe_cad_prod (void) {
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   Código de barras : 0 00000 00000 0                                    |\n");
    printf("|                                                                         |\n");
    printf("|   Fornecedor : Fornecedor Exemplo Eagle                                 |\n");
    printf("|                                                                         |\n");
    printf("|   Descrição do produto : **** ******* ******** *******                  |\n");
    printf("|                                                                         |\n");
    printf("|   Estoque atual : 9999                                                  |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 999,99 R$                                           |\n");
    printf("|                                                                         |\n");
    printf("|   Valor de compra : 1888,88 R$                                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
}

