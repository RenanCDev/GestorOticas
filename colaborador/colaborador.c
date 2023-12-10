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


//Módulo colaborador: cadastro e pesquisa de colaboradores
void modulo_colaborador (void) {
    Colab* colaborador;
    setlocale( LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Colaborador", " 1 -> Cadastrar colaborador <- ", " 2 -> Pesquisar colaborador <- ");
            switch (op) {
                case '1':
                    limpa_buffer ();
                    colaborador = cad_colab (); //Cria a struct Colab
                    gravar_colab (colaborador); //Grava a struct Colab em arquivo
                    break;
                case '2':
                    limpa_buffer ();
                    pesq_colab (); //Pesquisa a struct Colab em arquivo
                    break; 
            } 
        } while (op != '0'); 
}


//Percorre o algoritmo para cadastrar um novo colaborador adequadamente
Colab* cad_colab (void) {
    Colab* col;
    col = (Colab*)malloc((sizeof(Colab)));
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro colaborador");
        if (carregar_colab (cpf) != NULL) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (carregar_colab (cpf) != NULL);
    strcpy(col->cpf, cpf);
    limpa_buffer ();
    char* email = le_email ("Cadastro colaborador");
    strcpy(col->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro colaborador");
    strcpy(col->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro colaborador");
    strcpy(col->nome, nome);
    char* data = inst_data ();
    strcpy(col->data, data);
    char* hora = inst_hora ();
    strcpy(col->hora, hora);
    col->status = '1';
    col->id = gera_id_colab();
    tela_pessoas ("Cadastro colaborador", col->cpf, col->email, col->cel, col->nome, col->status, col->data, col->hora, col->id);
    tela_ok ();
    return col;
}


//Percorre o algoritmo para pesquisar um colaborador adequadamente
Colab* pesq_colab (void) {
    Colab* col;
    char* cpf;
    do{
        cpf = le_cpf ("Pesquisa colaborador");
        col = carregar_colab (cpf);
        if (col == NULL) {
             tela_erro ("Cadastro inexistente");
        }
    } while (col == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro colaborador", col->cpf, col->email, col->cel, col->nome, col->status, col->data, col->hora, col->id);
            if ((edit >= '1') && (edit <= '4')) {
                regravar_colab (col, edit);
                tela_ok ();
            }
        } while ((edit != '0') && (edit != '4')); 
    return col;
}


//Percorre o algoritmo para gravar um colaborador em arquivo adequadamente
void gravar_colab (Colab* col) {
    FILE *fp_col;
    fp_col = fopen("dat/colaborador.dat", "ab");
    do {
        fwrite(col, sizeof(Colab), 1, fp_col);
    } while (fwrite(col, sizeof(Colab), 1, fp_col) != 1);
    fclose(fp_col);
    free(col);
}


//Percorre o algoritmo para carregar um colaborador do arquivo adequadamente
Colab* carregar_colab(char* cpf) {
    FILE *fp;
    Colab* col;
    col = (Colab*)malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "rb");
    while (fread(col, sizeof(Colab), 1, fp)) {
        if ((!strcmp(col->cpf, cpf) && (col->status == '1'))) {
            fclose(fp);
            return col;
        }
    }
    fclose(fp);
    return NULL;
}


//Percorre o algoritmo para regravar um colaborador em arquivo adequadamente
void regravar_colab(Colab* col, char op) {
    FILE* fp;
    Colab* nova_ent;
    nova_ent = (Colab*)malloc(sizeof(Colab));
    fp = fopen("dat/colaborador.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Colab), 1, fp);
        if (strcmp(nova_ent->cpf, col->cpf) == 0) {
            edit_cad_colab(col, op);
            fseek(fp, -1 * sizeof(Colab), SEEK_CUR);
            fwrite(col, sizeof(Colab), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


//Percorre o algoritmo para editar ou fazer a exclusão lógica do colaborador em arquivo adequadamente
void edit_cad_colab (Colab* col, char op) {
    switch (op) {
        case '1' :
            limpa_buffer ();
            char* email = le_email ("Cadastro colaborador");
            strcpy(col->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro colaborador");
            strcpy(col->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro colaborador");
            strcpy(col->nome, nome);
            break;
        case '4' :
            col->status = '0';
            break;
    }
}

//Percorre o algoritmo para gerar um id de um colaborador adequadamente
int gera_id_colab (void) {
    FILE *fp_col;
    fp_col = fopen("dat/colaborador.dat", "rb");
    if (fp_col == NULL) {
        return 1;
    }
    fseek(fp_col, 0, SEEK_END);
    if ((long)ftell(fp_col) == 0){
        fclose(fp_col);
        return 1;
    }
    else {
        fseek(fp_col, -((long)sizeof(Colab)), SEEK_END);
        Colab* perf_f;
        perf_f = (Colab*)malloc(sizeof(Colab));
        fread(perf_f, sizeof(Colab), 1, fp_col);
        int id = perf_f->id+1;
        fclose(fp_col);
        return id;
    }
}