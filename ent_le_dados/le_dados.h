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
    ("|               Developed by @RenanCDev - since august, 2023               |\n")
    ("|                                                                         |\n")
    ("+=========================================================================+\n")  */

//Include do material necessario
//
#include "../util/all.h"

char* le_cpf (char*);
char* le_email (char*);
char* le_cel (char*);
char* le_nome (char*);
char* le_cnpj (char*);
char* le_cod_barras (char*);
char* le_desc_prod (char*);
char* le_quant (char*);
char* le_valor_c (char*);
char* le_valor_v (char*);
int le_id (char*);
char* cli_cad (void);
char* col_cad (void);
Prod* pro_cad (void);
char* forn_relat (char*);
char* quant_vend (Prod* pro);
char* le_data_ini (char* tela);
char* le_data_fim (char* tela, char* data_ini);
char* pro_relat (char*);
char* cli_relat (char*);
char* col_relat (char*);