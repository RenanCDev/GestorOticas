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
typedef struct fornecedor Fornec;

struct fornecedor {
    char cnpj[15];
    char email[30];
    char cel[12];
    char nome[50];
    char status;
};
//Declaração das funções do arquivo fornecedor.c
//
void modulo_fornecedor (void);
Fornec* cad_fornec (void);
void pesq_fornec (void);
void gravar_fornec (Fornec*);
Fornec* carregar_fornec(char* cnpj);