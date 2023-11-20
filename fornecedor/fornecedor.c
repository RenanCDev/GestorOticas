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


//Inclui todas as importações e declarações necessárias no programa
#include "../util/all.h"


//Módulo fornecedor: cadastro e pesquisa de fornecedores
void modulo_fornecedor (void) {
    Fornec* fornecedor;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Fornecedor", " 1 -> Cadastrar fornecedor <- ", " 2 -> Pesquisar fornecedor <- ");            switch (op) {
                case '1':
                    limpa_buffer ();
                    fornecedor = cad_fornec (); //Cria a struct Fornec
                    gravar_fornec (fornecedor); //Grava a struct Fornec em arquivo
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_fornec (); //Pesquisa a struct Fornec em arquivo
                    break; 
            }
        } while (op != '0'); 
}


//Percorre o algoritmo para cadastrar um novo fornecedor adequadamente
Fornec* cad_fornec (void) {
    Fornec* forn;
    forn = (Fornec*)malloc((sizeof(Fornec)));
    char* cnpj;
    do {
        cnpj = le_cnpj ("Cadastro fornecedor");
        if (carregar_fornec (cnpj) != NULL) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (carregar_fornec (cnpj) != NULL);
    strcpy(forn->cnpj, cnpj);
    limpa_buffer ();
    char* email = le_email ("Cadastro fornecedor");
    strcpy(forn->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro fornecedor");
    strcpy(forn->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro fornecedor");
    strcpy(forn->nome, nome);
    forn->status = '1';
    tela_pessoas ("Cadastro fornecedor", forn->cnpj, forn->email, forn->cel, forn->nome, forn->status);
    tela_ok ();
    return forn;
}


//Percorre o algoritmo para pesquisar um fornecedor adequadamente
Fornec* pesq_fornec (void) {
    Fornec* forn;
    char* cnpj;
    do{
        cnpj = le_cnpj ("Pesquisa fornecedor");
        forn = carregar_fornec (cnpj);
        if (forn == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while (forn == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro fornecedor", forn->cnpj, forn->email, forn->cel, forn->nome, forn->status);
            if ((edit >= '1') && (edit <= '4')) {
                regravar_fornec (forn, edit);
                tela_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
    return forn;
}


//Percorre o algoritmo para gravar um fornecedor em arquivo adequadamente
void gravar_fornec (Fornec* forn) {
    FILE *fp_forn;
    fp_forn = fopen("dat/fornecedor.dat", "ab");
    do {
        fwrite(forn, sizeof(Fornec), 1, fp_forn);
    } while (fwrite(forn, sizeof(Fornec), 1, fp_forn) != 1);
    fclose(fp_forn);
    free(forn);
}


//Percorre o algoritmo para carregar um fornecedor do arquivo adequadamente
Fornec* carregar_fornec (char* cnpj) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "rb");
    while (fread(forn, sizeof(Fornec), 1, fp)) {
        if ((!strcmp(forn->cnpj, cnpj)) && (forn->status == '1')) {
            fclose(fp);
            return forn;
        }
    }
    fclose(fp);
    return NULL;
}


//Percorre o algoritmo para regravar um fornecedor em arquivo adequadamente
void regravar_fornec (Fornec* forn, char op) {
    FILE* fp;
    Fornec* nova_ent;
    nova_ent = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Fornec), 1, fp);
        if (strcmp(nova_ent->cnpj, forn->cnpj) == 0) {
            edit_cad_fornec (forn, op);
            fseek(fp, -1 * sizeof(Fornec), SEEK_CUR);
            fwrite(forn, sizeof(Fornec), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


//Percorre o algoritmo para editar ou fazer a exclusão lógica do fornecedor em arquivo adequadamente
void edit_cad_fornec (Fornec* forn, char op) {
    switch (op) {
        case '1' :
            limpa_buffer ();
            char* email = le_email ("Cadastro fornecedor");
            strcpy(forn->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro fornecedor");
            strcpy(forn->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro fornecedor");
            strcpy(forn->nome, nome);
            break;
        case '4' :
            forn->status = '0';
            break;
    }
}