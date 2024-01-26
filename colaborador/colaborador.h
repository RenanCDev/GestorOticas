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
typedef struct colaborador Colab;

struct colaborador {
    char cpf[16];
    char email[47];
    char cel[16];
    char nome[47];
    char data[12];
    char hora[12];
    char status;
    int id;
    Colab* prox;
};

//Declaração das funções do arquivo colaborador.c
//
void modulo_colaborador (void);
Colab* cad_colab (void);
Colab* pesq_colab (void);
void gravar_colab (Colab*);
Colab* carregar_colab (char*);
void regravar_colab(Colab*, char);
void edit_cad_colab (Colab*, char);
int gera_id_colab (void);
void relat_pessoa_col (Colab* col);
void relat_pessoa_atv_col (Colab* col);
void relat_pessoa_inatv_col (Colab* col);