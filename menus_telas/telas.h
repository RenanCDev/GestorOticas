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
void tela_pessoas (char*, char*, char*, char*, char*, char);
void t_exe_relat_adm (void);
void t_exe_relat_forn (void);
void t_exe_relat_prod (void);
void t_exe_relat_colab (void);
void t_exe_relat_client (void);
void tela_produto (char*, char*, char*, char*, char*, char*, char*);
void tela_venda (char*, char*, char*, char*, char*, char*, char*, char*, int, char);