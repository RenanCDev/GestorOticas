//Inclui todas as importações e declarações necessárias no programa
#include "../util/all.h"


//Módulo administrativo: cadastro e pesquisa de administradores, entrada para a central de relatórios
void modulo_administrativo (void) {
    Admin* adm; 
    setlocale (LC_ALL,"Portuguese_Brazil"); 
    char op; 
        do {
            op = menu_administrativo (); 
            switch (op) { 
                case '1':
                    limpa_buffer (); 
                    adm = cad_admin (); //Cria a struct Admin
                    if (adm != NULL) {
                        gravar_admin (adm); //Grava a struct Admin em arquivo
                    }
                    break; 
                case '2':
                    limpa_buffer (); 
                    pesq_admin (); //Pesquisa a struct Admin em arquivo
                    break; 
                case '3':
                    modulo_relatorio (); //Entrada no módulo relatórios
                    break; 
            } 
        } while (op != '0'); 
}


//Percorre o algoritmo para cadastrar um novo administrador adequadamente
Admin* cad_admin (void) {
    Admin* adm;
    adm = (Admin*)malloc((sizeof(Admin)));
    char* cpf;
    do {
        cpf = le_cpf ("Cadastro administrador");
        if (!cancel(cpf)) {
            return NULL;
        } else if (carregar_adm (cpf) != NULL) {
            tela_erro ("Entrada já cadastrada");
        }
    } while (carregar_adm (cpf) != NULL);
    strcpy(adm->cpf, cpf);
    limpa_buffer ();
    char* email = le_email ("Cadastro administrador");
    if (!cancel(email)) {
        return NULL;
    }
    strcpy(adm->email, email);
    limpa_buffer ();
    char* cel = le_cel ("Cadastro administrador");
    if (!cancel(cel)) {
        return NULL;
    }
    strcpy(adm->cel, cel);
    limpa_buffer ();
    char* nome = le_nome ("Cadastro administrador");
    if (!cancel(nome)) {
        return NULL;
    }
    strcpy(adm->nome, nome);
    char* data = inst_data ();
    strcpy(adm->data, data);
    char* hora = inst_hora ();
    strcpy(adm->hora, hora);
    adm->status = '1';
    adm->id = gera_id_admin ();
    tela_pessoas ("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status, adm->data, adm->hora, adm->id);
    tela_ok ();
    return adm;
}


//Percorre o algoritmo para pesquisar um administrador adequadamente
Admin* pesq_admin (void) {
    Admin* adm;
    char* cpf;
    do{
        cpf = le_cpf ("Pesquisa administrador");
        adm = carregar_adm (cpf);
        if (!cancel(cpf)) {
            return NULL;
        } else if (adm == NULL) {
            tela_erro ("Cadastro inexistente");
        }
    } while (adm == NULL);
        char edit;
        do {
            edit = menu_edit("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status, adm->data, adm->hora, adm->id);
            if ((edit >= '1') && (edit <= '4')) {
                regravar_adm (adm, edit);
                tela_ok ();
            }
        } while ((edit != '0') && (edit != '4'));
    return adm;
}


//Percorre o algoritmo para gravar um administrador em arquivo adequadamente
void gravar_admin (Admin* adm) {
    FILE* fp_adm;
    fp_adm = fopen("administrativo.dat", "ab");
    fwrite(adm, sizeof(Admin), 1, fp_adm);
    fclose(fp_adm);
    free(adm);
}


//Percorre o algoritmo para carregar um administrador do arquivo adequadamente
Admin* carregar_adm (char* cpf) {
    FILE* fp;
    Admin* adm;
    adm = (Admin*)malloc(sizeof(Admin));
    fp = fopen("administrativo.dat", "rb");
    while (fread(adm, sizeof(Admin), 1, fp)) {
        if ((!strcmp(adm->cpf, cpf) && (adm->status == '1'))) {
            fclose(fp);
            return adm;
        }
    }
    fclose(fp);
    return NULL;
}


//Percorre o algoritmo para regravar um administrador em arquivo adequadamente
void regravar_adm(Admin* adm, char op) {
    FILE* fp;
    Admin* nova_ent;
    nova_ent = (Admin*)malloc(sizeof(Admin));
    fp = fopen("administrativo.dat", "r+b");
    while(!feof(fp)) {
        fread(nova_ent, sizeof(Admin), 1, fp);
        if (strcmp(nova_ent->cpf, adm->cpf) == 0) {
            edit_cad_adm(adm, op);
            fseek(fp, -1 * sizeof(Admin), SEEK_CUR);
            fwrite(adm, sizeof(Admin), 1, fp);
            break;
        }
    }
    fclose(fp);
    free(nova_ent);
}


//Percorre o algoritmo para editar ou fazer a exclusão lógica do administrador em arquivo adequadamente
void edit_cad_adm (Admin* adm, char op) {
    switch (op) {
        case '1' :
            limpa_buffer ();
            char* email = le_email ("Cadastro administrador");
            if (!cancel(email)) {
                break;
            }
            strcpy(adm->email, email);
            break;
        case '2' :
            limpa_buffer ();
            char* cel = le_cel ("Cadastro administrador");
            if (!cancel(cel)) {
                break;
            }
            strcpy(adm->cel, cel);
            break;
        case '3' :
            limpa_buffer ();
            char* nome = le_nome ("Cadastro administrador");
            if (!cancel(nome)) {
                break;
            }
            strcpy(adm->nome, nome);
            break;
        case '4' :
            adm->status = '0';
            break;
    }
}

//Percorre o algoritmo para gerar um id de um administrador adequadamente
int gera_id_admin (void) {
    FILE *fp_adm;
    fp_adm = fopen("administrativo.dat", "rb");
    if (fp_adm == NULL) {
        return 1;
    }
    fseek(fp_adm, 0, SEEK_END);
    if ((long)ftell(fp_adm) == 0){
        fclose(fp_adm);
        return 1;
    }
    else {
        fseek(fp_adm, -((long)sizeof(Admin)), SEEK_END);
        Admin* perf_f;
        perf_f = (Admin*)malloc(sizeof(Admin));
        fread(perf_f, sizeof(Admin), 1, fp_adm);
        int id = perf_f->id+1;
        fclose(fp_adm);
        return id;
    }
}