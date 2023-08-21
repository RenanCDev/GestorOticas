/* \/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
   /             Universidade Federal do Rio Grande do Norte                 /
   \                 Centro de Ensino Superior do Seridó                     \
   /           Aluno -- Renan Missias Rodrigues Alves da Costa               /
   \                  Disciplina DCT1106 -- Programação                      \
   /                Projeto Sistema de Gestão para Óticas                    /
   \             Developed by @RenanMRb - since august, 2023                 \
   /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/ */


#include <stdio.h>
#include <stdlib.h>


/////
//Assinaturas das funções
void tela_apresentacao(void);
void tela_sobre(void);



/////
//Funções telas
void tela_apresentacao(void) {
    system("clear");
    printf("\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ ");
    printf("/             Universidade Federal do Rio Grande do Norte                 / ");
    printf("\                 Centro de Ensino Superior do Seridó                     \ ");
    printf("/           Aluno -- Renan Missias Rodrigues Alves da Costa               / ");
    printf("\                  Disciplina DCT1106 -- Programação                      \ ");
    printf("/                Projeto Sistema de Gestão para Óticas                    / ");
    printf("\             Developed by @RenanMRb - since august, 2023                 \ ");
    printf("/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/ ");
    getchar();  
}


void tela_sobre(void) {
    printf("\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ ");
    printf("/         O projeto EAGLE EYES é um projeto de gestão de óticas .         / ");
    printf("\            Tem o objetivo de gerir e administrar uma ótica .            \ ");
    printf("/                            ATENÇÃO ! ! ! !                              / ");
    printf("\                  Este NÃO é um programa comercial .                     \ ");
    printf("/      O desenolvedor não se responsabiliza por quaisquer danos !         / ");
    printf("\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ ");
    getchar();

}