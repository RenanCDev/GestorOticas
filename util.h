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
//Declaração das funções do arquivo utel.c
//
int valid_entrada (char*);
int valid_op (char, char);
int valid_digt (char);
int valid_numeros (char*, char);
int valid_numeros_s (char*);
int valid_cpf (char*);
void limpa_buffer (void);
int verif_bissexto (int);
int verif_data (int, int, int);
int valid_data (char*);
int valid_letra (char);
int valid_nome (char*);
int valid_email (char*);
int valid_cnpj (char*);
int valid_cod_barras (char*);
