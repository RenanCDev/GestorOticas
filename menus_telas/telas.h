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
//Declaração das funções do arquivo telas.c
//Tela banner
//
void tela_banner (void);
void tela_universal (char*);

//Telas informacionais
//
void tela_ok (void);
void tela_erro (char*);
void info_cliente_0 (void);


//Telas exemplo
//
void tela_pessoas (char*, char*, char*, char*, char*, char, char*, char*, int);
void tela_produto (char*, char*, char*, char*, char*, char*, char*, char*, char*, int);
void tela_venda (char*, char*, char*, char*, char*, char*, char*, char*, int, char, char*, char*);
void tela_relat_pessoa (void);
void tela_fecha_relat (int);
void tela_fecha_relat1 (int, int, int);
void tela_relat_prod (void);
void tela_relat_vend (void);
void tela_sem_cad (void);
void tela_list_venda1 (char*, char*, char*);
void tela_list_venda2 (char*, char*, char*, char*, char*);
void tela_list_venda_f (char*, char*, int, char);