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
    char cnpj[15];
    char desc[41];
    char quant[9];
    char valor_comp[9];
    char valor_vend[9];
};
//Declaração das funções do arquivo produto.c
//
void modulo_produto (void);
Prod* cad_prod (void);
void pesq_prod (void);
void gravar_prod (Prod*);
Prod* carregar_prod(char* cod_barras);