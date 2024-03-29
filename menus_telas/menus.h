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
//Declaração das funções do arquivo menus.c
//
char menu_principal (void);
char menu_administrativo (void);
char menu_sec_uni (char*, char*, char*) ;
char menu_relatorio (void);
char menu_edit (char*, char*, char*, char*, char*, char, char*, char*, int);
char menu_edit_prod (char*, char*, char*, char*, char*, char*, char*, char*, char*, int);
char menu_edit_vend (void);
char menu_item_venda (void);
void tela_sobre (void);
char menu_modulo (char*);
char menu_modulo_prod (char*);
char menu_modulo_vend (char*);