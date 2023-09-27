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


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "all.h"


void modulo_administrativo (void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_administrativo();
        switch (op) {
            case 1:
                cad_admin();
                break;
            case 2:
                pesq_admin();
                break;
            case 3:
                modulo_relatorio();
            case 0:
                break;
            default:
                tela_erro();
                break;
        }
    }
    while (op != 0);
}


/////
//Função para cadastrar administrador
void cad_admin (void){
    char ex;
    char pont[] = "Cadastro administrador";
    printf ("%s", pont);
    getchar();
    tela_cad_admin(pont);
    ent_cpf();
    tela_cad_admin(pont);
    ent_email();
    tela_cad_admin(pont);
    ent_cel();
    tela_cad_admin(pont);
    ent_nome();
    tela_cad_admin(pont);
    t_exe_cad_adm();
    tela_cad_concl();
}


//Função para pesquisar administrador
void pesq_admin (void) {
    tela_pesq_admin();
    ent_cpf();
    t_exe_cad_adm();
    getchar();
}
