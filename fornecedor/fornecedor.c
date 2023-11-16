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



#include "../util/all.h"


/////
//Percorre todo o caminho do menu fornecedor
//
void modulo_fornecedor (void) {
    Fornec* fornecedor;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Fornecedor", " 1 -> Cadastrar fornecedor <- ", " 2 -> Pesquisar fornecedor <- ");            switch (op) {
                case '1':
                    limpa_buffer ();
                    fornecedor = cad_fornec ();
                    gravar_fornec (fornecedor);
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_fornec ();
                    break; 
            }
        } while (op != '0'); 
}


//Cadastra um novo fornecedor
//
Fornec* cad_fornec (void) {
    Fornec* forn;
    forn = (Fornec*)malloc((sizeof(Fornec)));
    char* cnpj;
    do {
        cnpj = le_cnpj ("Cadastro fornecedor");
        if (!verify_cnpj_dat_fornec (cnpj)) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (!verify_cnpj_dat_fornec (cnpj));
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


//Pesquisa o cadastro de algum fornecedor
//
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
            if ((edit >= '1') && (edit <= '3')) {
                regravar_fornec (forn, edit);
                tela_ok ();
            }
            else if (edit == '4') {
                excluir_fornec (forn->cnpj);
                tela_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
    return forn;
}


//Gravador de dados do fornecedor
//
void gravar_fornec (Fornec* forn) {
    FILE *fp_forn;
    fp_forn = fopen("dat/fornecedor.dat", "ab");
    if (fp_forn == NULL) {
        tela_erro ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    fwrite(forn, sizeof(Fornec), 1, fp_forn);
    fclose(fp_forn);
    free(forn);
}


//Carregador de dados do fornecedor
//
Fornec* carregar_fornec (char* cnpj) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "rb");
    if (fp == NULL) {
        tela_erro ("SAVE/ LOADING de dados incompleto ou com problema");
    }
    while (fread(forn, sizeof(Fornec), 1, fp)) {
        if ((!strcmp(forn->cnpj, cnpj)) && (forn->status == '1')) {
            fclose(fp);
            return forn;
        }
    }
    fclose(fp);
    return NULL;
}


//Verifica se o cnpj ja esta cadastrado (retorna "1") ou não (retorna"0")
//
int verify_cnpj_dat_fornec (char *cnpj) {
    FILE* fp;
    Fornec* forn;
    forn = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "rb");
    while (fread(forn, sizeof(Fornec), 1, fp)) {
        if ((strcmp(forn->cnpj, cnpj) == 0) && forn->status == '1') {
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    return 1;
}


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


void excluir_fornec (char* cnpj)  {
    Fornec* forn;
    forn = (Fornec*)malloc(sizeof(Fornec));
    forn = carregar_fornec (cnpj);
    forn->status = '0';
    remove_fornec (forn);
    free(forn);
    free(cnpj);
}


void remove_fornec (Fornec* forn) {
    FILE *fp;
    Fornec* forn_op;
    forn_op = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("dat/fornecedor.dat", "r+b");
    while (!feof(fp)) {
        fread(forn_op, sizeof(Fornec), 1, fp);
        if ((strcmp(forn_op->cnpj, forn->cnpj) == 0) && (forn_op->status != '0')) {
            forn_op->status = '0';
            fseek(fp, -1 * sizeof(Fornec), SEEK_CUR);
            fwrite(forn_op, sizeof(Fornec), 1, fp);
        }
    }
    fclose(fp);
    free(forn_op);
}


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
            limpa_buffer ();
            excluir_fornec (forn->cnpj);
            break;
    }
}