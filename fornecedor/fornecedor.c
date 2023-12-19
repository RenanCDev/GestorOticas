//Inclui todas as importações e declarações necessárias no programa
#include "../util/all.h"


//Módulo fornecedor: cadastro e pesquisa de fornecedores
void modulo_fornecedor (void) {
    Fornec* fornecedor;
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_sec_uni ("Fornecedor", " 1 -> Cadastrar fornecedor <- ", " 2 -> Pesquisar fornecedor <- ");            
            switch (op) {
                case '1':
                    limpa_buffer ();
                    fornecedor = cad_fornec (); //Cria a struct Fornec
                    if (fornecedor != NULL) {
                        gravar_fornec (fornecedor); //Grava a struct Fornec em arquivo
                    }
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
        if (!cancel(cnpj)) {
            return NULL;
        } else if (carregar_fornec (cnpj) != NULL) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (carregar_fornec (cnpj) != NULL);
    strcpy(forn->cnpj, cnpj);
    limpa_buffer ();
    char* email = le_email ("Cadastro fornecedor");
    if (!cancel(email)) {
        return NULL;
    }
    strcpy(forn->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro fornecedor");
    if (!cancel(cel)) {
        return NULL;
    }
    strcpy(forn->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro fornecedor");
    if (!cancel(nome)) {
        return NULL;
    }
    strcpy(forn->nome, nome);
    char* data = inst_data ();
    strcpy(forn->data, data);
    char* hora = inst_hora ();
    strcpy(forn->hora, hora);
    forn->status = '1';
    forn->id = gera_id_fornec();
    tela_pessoas ("Cadastro fornecedor", forn->cnpj, forn->email, forn->cel, forn->nome, forn->status, forn->data, forn->hora, forn->id);
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
        if (!cancel(cnpj)) {
            return NULL;
        } else if (forn == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while (forn == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro fornecedor", forn->cnpj, forn->email, forn->cel, forn->nome, forn->status, forn->data, forn->hora, forn->id);
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
    fp_forn = fopen("fornecedor/fornecedor.dat", "ab");
    fwrite(forn, sizeof(Fornec), 1, fp_forn);
    fclose(fp_forn);
    free(forn);
}


//Percorre o algoritmo para carregar um fornecedor do arquivo adequadamente
Fornec* carregar_fornec (char* cnpj) {
    FILE *fp;
    Fornec* forn;
    forn = (Fornec*)malloc(sizeof(Fornec));
    fp = fopen("fornecedor/fornecedor.dat", "rb");
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
    fp = fopen("fornecedor/fornecedor.dat", "r+b");
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
            if (!cancel(email)) {
                break;
            }
            strcpy(forn->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro fornecedor");
            if (!cancel(cel)) {
                break;
            }
            strcpy(forn->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro fornecedor");
            if (!cancel(nome)) {
                break;
            }
            strcpy(forn->nome, nome);
            break;
        case '4' :
            forn->status = '0';
            break;
    }
}

//Percorre o algoritmo para gerar um id de um fornecedor adequadamente
int gera_id_fornec (void) {
    FILE *fp_forn;
    fp_forn = fopen("fornecedor/fornecedor.dat", "rb");
    if (fp_forn == NULL) {
        return 1;
    }
    fseek(fp_forn, 0, SEEK_END);
    if ((long)ftell(fp_forn) == 0){
        fclose(fp_forn);
        return 1;
    }
    else {
        fseek(fp_forn, -((long)sizeof(Fornec)), SEEK_END);
        Fornec* perf_f;
        perf_f = (Fornec*)malloc(sizeof(Fornec));
        fread(perf_f, sizeof(Fornec), 1, fp_forn);
        int id = perf_f->id+1;
        fclose(fp_forn);
        return id;
    }
}