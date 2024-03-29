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


/////
//Criação da struck
//
typedef struct fornecedor Fornec;

struct fornecedor {
    char cnpj[20];
    char email[47];
    char cel[15];
    char nome[47];
    char data[12];
    char hora[12];
    char status;
    int id;
    Fornec* prox;
};

//Declaração das funções do arquivo fornecedor.c
//
void modulo_fornecedor (void);
Fornec* cad_fornec (void);
Fornec* pesq_fornec (void);
void gravar_fornec (Fornec*);
Fornec* carregar_fornec (char*);    
void regravar_fornec (Fornec*, char);
void edit_cad_fornec (Fornec*, char);
int gera_id_fornec (void);
void relat_pessoa_forn (Fornec* forn);
void relat_pessoa_atv_forn (Fornec* forn);
void relat_pessoa_inatv_forn (Fornec* forn);