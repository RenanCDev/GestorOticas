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


#include "util/all.h"


/////
//LOAD/CREATE dos arquivos
void load_create (const char* pasta, const char* arq) {
    FILE *fp;
    char past[256];
    snprintf(past, sizeof(past), "%s/%s", pasta, arq);
    fp = fopen(past, "rb");
    if (fp == NULL) {
        fp = fopen(past, "wb");
        if (fp == NULL) {
            tela_erro ("SAVE/ LOADING de dados incompleto ou com problema");
            printf("O programa será encerrado!");
            exit(1);
        }
        fclose(fp);
    }
}


//Programa principal
//
int main (void) {
    load_create("administrativo", "administrativo.dat");
    load_create("cliente", "cliente.dat");
    load_create("colaborador", "colaborador.dat");
    load_create("fornecedor", "fornecedor.dat");
    load_create("produto", "produto.dat");
    load_create("venda", "venda.dat");
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op0;
        do {
            op0 = menu_principal ();
            switch (op0) {
                case '1':
                    limpa_buffer ();
                    modulo_administrativo ();
                    break;
                case '2':
                    modulo_fornecedor ();
                    limpa_buffer ();
                    break;
                case '3':
                    modulo_produto ();
                    limpa_buffer ();
                    break;
                case '4':
                    modulo_colaborador ();
                    limpa_buffer ();
                    break;
                case '5':
                    modulo_cliente ();
                    limpa_buffer ();
                    break;
                case '6':
                    modulo_venda ();
                    limpa_buffer ();
                    break;
                case '7':
                    tela_sobre ();
                    limpa_buffer ();
                    break;
            } 
        } while (op0 != '0');
    return 0; 
}