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
typedef struct cliente Client;

struct cliente {
    char cpf[16];
    char email[47];
    char cel[16];
    char nome[47];
    char data[12];
    char hora[12];
    char status;
    int id;
    Client* prox;
};

//Declaração das funções do arquivo cliente.c
//
void modulo_cliente (void);
Client* cad_client (void);
Client* pesq_client (void);
void gravar_client (Client*);
Client* carregar_cli (char*);
void regravar_cli(Client*, char);
void edit_cad_cli (Client*, char);
int gera_id_client (void);
void relat_pessoa_cli (Client* cli);
void relat_pessoa_atv_cli (Client* cli);
void relat_pessoa_inatv_cli (Client* cli);