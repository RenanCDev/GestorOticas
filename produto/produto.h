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


/////
//Criação da struck
//
typedef struct produto Prod;

struct produto {
    char cod_barras[14];
    char cnpj[20];
    char desc[47];
    char quant[9];
    char valor_comp[9];
    char valor_vend[9];
    char data[12];
    char hora[12];
    int id;
    Prod* prox;
};


//Declaração das funções do arquivo produto.c
//
void modulo_produto (void);
Prod* cad_prod (void);
Prod* pesq_prod (void);
void gravar_prod (Prod*);
Prod* carregar_prod (char*);
void regravar_prod (Prod*, char);
void regravar_prod_quant (Prod*);
void edit_cad_prod (Prod*, char);
int gera_id_prod (void);