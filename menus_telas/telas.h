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


//Telas do módulo administrativo
//
void tela_uni_1(char*);
void tela_pesq_admin (void);


//Telasdo módulo relatórios
//
void tela_relat_admin (void);
void tela_relat_fornec (void);
void tela_relat_produto (void);
void tela_relat_colab (void);
void tela_relat_cliente (void);


//Telas do módulo fornecedor
//
void tela_cad_fornec (void);
void tela_pesq_fornec (void);


//Telas do módulo produtos
//
void tela_cad_produto (void);
void tela_pesq_produto (void);


//Telas do módulo colaborador
//
void tela_cad_colab (void);
void tela_pesq_colab (void);


//Telas do módulo cliente
//
void tela_cad_cliente (void);
void tela_pesq_cliente (void);


//Telas do  módulo vendas
//
void tela_cad_venda (void);
void tela_pesq_venda (void);
void tela_venda_colab (void);
void tela_venda_produt (void);
void tela_venda_q_prod (void);
void tela_venda_cliente (void);
void tela_relat_venda (void);


//Telas informacionais
//
void tela_cad_concl (void);
void tela_vend_concl (void);
void tela_erro (void);
void tela_erro_dados (void);
void info_cliente_0 (void);


//Telas exemplo
//
void t_cad_ok (char*, char*, char*, char*, char*);
void t_exe_relat_adm (void);
void t_exe_relat_forn (void);
void t_exe_relat_prod (void);
void t_exe_relat_colab (void);
void t_exe_relat_client (void);
void t_exe_cad_forn (void);
void t_exe_cad_prod (void);
void t_exe_cad_colab (void);
void t_exe_cad_cliente (void);
void t_exe_cad_vend (void);