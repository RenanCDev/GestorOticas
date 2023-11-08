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
void tela_uni_1 (char*);

//Telas informacionais
//
void tela_cad_concl (void);
void tela_vend_concl (void);
void tela_erro (void);
void tela_erro_dados (void);
void tela_erro_cpf (void);
void info_cliente_0 (void);


//Telas exemplo
//
void t_cad_ok (char*, char*, char*, char*, char*, char);
void t_exe_relat_adm (void);
void t_exe_relat_forn (void);
void t_exe_relat_prod (void);
void t_exe_relat_colab (void);
void t_exe_relat_client (void);
void t_cad_prod_ok (char*, char*, char*, char*, char*, char*, char*);
void t_exe_cad_vend (void);