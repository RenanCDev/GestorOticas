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


typedef struct administrador Admin; //Renomeia a struct "administrador" como "Admin"

struct administrador { //Estruturação da struct "administrador"
    char cpf[16];
    char email[47];
    char cel[16];
    char nome[47];
    char data [12];
    char hora [12];
    int id;
    char status;
    Admin* prox;
};

//Declaração das funções do arquivo administrativo.c
void modulo_administrativo (void);
Admin* cad_admin (void);
Admin* pesq_admin (void);
void gravar_admin (Admin*);
Admin* carregar_adm (char*);
void regravar_adm(Admin*, char);
void edit_cad_adm (Admin*, char);
int gera_id_admin (void);
void relat_pessoa_adm (Admin* adm);
void relat_pessoa_atv_adm (Admin* adm);
void relat_pessoa_inatv_adm (Admin* adm);
