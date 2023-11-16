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


//Módulo administrativo: cadastro e pesquisa de administradores, central de relatórios
void modulo_administrativo (void) {
    Admin* adm; //Apontador "adm" para o struct "Admin"
    setlocale (LC_ALL,"Portuguese_Brazil"); //Define a configuração regional para Pt-BR
    char op; //Char ultilizado na execução do menu administrativo
        do {
            op = menu_administrativo (); //Abre o menu administrativo, execulta enquanto o user não desejar sair
            switch (op) { //O switch verifica qual opção o user escolheu para executar o algoritmo correto
                case '1':
                    limpa_buffer (); //Limpa o buffer
                    adm = cad_admin (); //O "adm" recebe os dados passados pela função cad_admin, que por sua vez, executa o passo a passo para um cadastro adequado
                    gravar_admin (adm); //Grava os dados do "adm" em um arquivo
                    break; //O break para a execução dessa parte do algoritmo e volta para o menu administrativo
                case '2':
                    limpa_buffer (); //limpa o buffer
                    adm = pesq_admin (); //Pesquisa um cadastro informado pelo user no banco de dados do programa, no caso do cadatro existir, exibe uma serie de opções de edição ou exclusão
                    break; //O break para a execução dessa parte do algoritmo e volta para o menu administrativo
                case '3':
                    modulo_relatorio (); //Abre o módulo de relatórios
                    break; //O break para a execução dessa parte do algoritmo e volta para o menu administrativo
            } 
        } while (op != '0'); //Quando o user inserir a entrada '0' fecha o módulo administrativo e volta para o menu principal
}


//Percorre o algoritmo para cadastrar um novo administrador adequadamente
Admin* cad_admin (void) { //Passa pelas etapas de cada dado necessário para o cadastramento e devolve uma struct de administrador completa
    Admin* adm; //Cria um apontador "adm" para o struct "Admin"
    adm = (Admin*)malloc((sizeof(Admin))); //Inicializa adequadamente o apontador "adm" e aloca a memória necessaria para a execução
    char* cpf; //Cria um "char* cpf"
    do { //Executar o seguinte algorítmo, até que as exigências sejam satisfeitas
        cpf = le_cpf ("Cadastro administrador"); //O "char* cpf" recebe um dado analizado e satisfeito pelo "le_cpf"
        if (carregar_adm (cpf) != NULL) { //Verifica se o cpf inserido já esta cadastrado
            tela_erro ("Entrada já cadastrada"); //Caso já esteja cadastrado, ele printa uma mensagem de erro
        }
    } while (carregar_adm (cpf) != NULL); //Retorna ao começo do looping, até que o user insira um cpf válido e não cadastrado
    strcpy(adm->cpf, cpf); //Copia o "char* cpf" para para o campo "cpf" da "struct Admin", através do apontador "adm->cpf"
    limpa_buffer (); //Limpa o buffer
    char* email = le_email ("Cadastro administrador"); //O "char* email" recebe um dado analizado e satisfeito pelo "le_email"
    strcpy(adm->email, email); //Copia o "char* email" para para o campo "email" da "struct Admin", através do apontador "adm->email"
    limpa_buffer (); //Limpa o buffer
    char* cel = le_cel ("Cadastro administrador"); //O "char* cel" recebe um dado analizado e satisfeito pelo "le_cel"
    strcpy(adm->cel, cel); //Copia o "char* cel" para para o campo "cel" da "struct Admin", através do apontador "adm->cel"
    limpa_buffer (); //Limpa o buffer
    char* nome = le_nome ("Cadastro administrador"); //O "char* nome" recebe um dado analizado e satisfeito pelo "le_nome"
    strcpy(adm->nome, nome); //Copia o "char* nome" para para o campo "nome" da "struct Admin", através do apontador "adm->nome"
    adm->status = '1'; //Copia o "char '1'" para para o campo "status" da "struct Admin", através do apontador "adm->status"
    tela_pessoas ("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status); //Chama a função "tela_pessoas" com os parâmetros necessários
    tela_ok (); //Chama a função "tela_ok"
    return adm; //Retorna um apontador com uma struct Admin completa nos padrões exigidos
}


//Percorre o algoritmo para pesquisar um administrador adequadamente
Admin* pesq_admin (void) { //Passa pelas etapas de cada dado necessário para o pesquisa do cadastro, após a exibição do perfil, disponibiliza as edições possíveis, exclusão logica do cadastro, ou simplesmente sair
    Admin* adm; //Cria um apontador "adm" para o struct "Admin"
    char* cpf; //Cria um "char* cpf"
    do{ //Executar o seguinte algorítmo, até que as exigências sejam satisfeitas
        cpf = le_cpf ("Pesquisa administrador"); //O "char* cpf" recebe um dado analizado e satisfeito pelo "le_cpf"
        adm = carregar_adm (cpf); //O apontador "adm" recebe a struck retornada pela função "carregar_adm" através do cpf
        if (adm == NULL) { //Caso a função "carregar_adm" não encontre nenhum perfil com aquele cpf, ela retorna "NULL"
            tela_erro ("Cadastro inexistente"); //Nesse caso ela printara uma mensagem de erro, com a informação de "Cadastro inexistente"
        }
    } while (adm == NULL); //Retorna ao começo do looping, até que o user insira um cpf válido e cadastrado
        char edit; //Cria um "char edit"
        do { //Executar o seguinte algorítmo, até que as exigências sejam satisfeitas 
            edit = menu_edit("Cadastro administrador", adm->cpf, adm->email, adm->cel, adm->nome, adm->status); //Chama a função "menu_edit" e retorna um char para o "edit"
            if ((edit >= '1') && (edit <= '3')) { //Se o "char edit" for algo entre '1' e '3', ele executa o algoritmo
                regravar_adm (adm, edit); //Regrava o campo do "adm" solicitado pelo user através do "edit"
                tela_ok (); //Chama a função "tela_ok"
            }
            else if (edit == '4') { //Se o "char edit" for igual a '4'
                excluir_adm (adm->cpf); //Faz a exclusão lógica do struct
                tela_ok (); //Chama a função "tella_ok"
            }
        } while ((edit != '0') && (edit != '4')); //Retorna ao começo do looping, até que o user insira um "edit" != '0' e '4'
    return adm; //Retorna o "adm" atualizado
}


//Percorre o algoritmo para gravar um administrador adequadamente
void gravar_admin (Admin* adm) { //Inicia o processo recebendo como parametro um apontador para um struct
    FILE* fp_adm; //Aponta para um arquivo com o apontador "fp_adm"
    fp_adm = fopen("dat/administrativo.dat", "ab"); //"fp_adm" abre o arquivo binario no endereço informado. Se o arquivo não existir ele cria, caso já exista, ele começa a escrever do final
    do { //Executar o seguinte algorítmo, até que as exigências sejam satisfeitas 
        fwrite(adm, sizeof(Admin), 1, fp_adm); //Escreve uma única struct seguindo as metricas exigidas no arquivo desejado
    } while (fwrite(adm, sizeof(Admin), 1, fp_adm) != 1); //Repete o processo até que ele salve apenas uma única struct corretamente
    fclose(fp_adm); //Fecha o arquivo apontado
    free(adm); //Devolve a memória ultilizada pelo apontador "adm"
}


//Percorre o algoritmo para carregar um administrador adequadamente
Admin* carregar_adm (char* cpf) { //Inicia o processo recebendo como parametro um apontador para um "char* cpf"
    FILE* fp; //Aponta para um arquivo com o apontador "fp"
    Admin* adm; //Cria um apontador "adm" para o struct "Admin"
    adm = (Admin*)malloc(sizeof(Admin)); //Inicializa adequadamente o apontador "adm" e aloca a memória necessaria para a execução
    fp = fopen("dat/administrativo.dat", "rb"); //"fp" abre o arquivo binario no endereço informado e lê
    while (fread(adm, sizeof(Admin), 1, fp)) { //Percorre cada struct, pelos padrões exigidos, um de cada vez.
        if ((!strcmp(adm->cpf, cpf) && (adm->status == '1'))) { //Compara a entrada do "char* cpf", com o "char* cpf" ja cadastrado "adm->cpf" se são iguais, e se o "adm->status" esta ativo '1'
            fclose(fp); //Fecha o arquivo aberto
            return adm; //Retorna o perfil desejado
        }
    }
    fclose(fp); //Fecha o arquivo aberto
    return NULL; //Retorna "NULL" caso o struct não seja encontrado
}


//Percorre o algoritmo para regravar um administrador adequadamente
void regravar_adm(Admin* adm, char op) { //Inicia o processo recebendo como parametro um apontador para um "char* cpf" e um "char op"
    FILE* fp; //Aponta para um arquivo com o apontador "fp"
    Admin* nova_ent; //Cria um apontador "nova_ent" para o struct "Admin"
    nova_ent = (Admin*)malloc(sizeof(Admin)); //Inicializa adequadamente o apontador "nova_ent" e aloca a memória necessaria para a execução
    fp = fopen("dat/administrativo.dat", "r+b"); //Abre o arquivo binario no endereço informado lê e reescreve
    while(!feof(fp)) { //Percorre o arquivo binario até o final
        fread(nova_ent, sizeof(Admin), 1, fp); //Lê o arquivo binario um por vez nas exigências feita
        if (strcmp(nova_ent->cpf, adm->cpf) == 0) { //Compara a entrada do "nova_ent->cpf", com o "adm->cpf" se são iguais
            edit_cad_adm(adm, op); //Chama a função edit_cad_adm, passando a struct e opção desejada como parâmetro
            fseek(fp, -1 * sizeof(Admin), SEEK_CUR); //Move o apontador para o começo da struct desejada
            fwrite(adm, sizeof(Admin), 1, fp); //Escreve os novos dados na struct desejada
            break; //Para a função
        }
    }
    fclose(fp); //Fecha o arquivo apontado pelo "fp"
    free(nova_ent); //Devolve a memória ultilizada pelo "char* nova_ent"
}


void excluir_adm(char* cpf) { //Inicia o processo recebendo como parametro um apontador para um "char* cpf"
    Admin* adm; //Cria um apontador "adm" para o struct "Admin"
    adm = (Admin*)malloc(sizeof(Admin)); //Inicializa adequadamente o apontador "adm" e aloca a memória necessaria para a execução
    adm = carregar_adm(cpf); //O apontador "adm" recebe o dado retornado pela função "carregar_adm"
    adm->status = '0'; //Escreve '0' no campo "adm->status" para uma exclusão lógica
    remove_adm(adm); //Chama a função "remove_adm" para concluir a exclusão lógica
    free(adm); //Devolve a memória ultilizada pelo "adm"
    free(cpf); //Devolve a memória ultilizada pelo "cpf"
}


void remove_adm(Admin* adm) { //Inicia o processo recebendo como parametro um apontador para um "adm" para uma struct "Admin"
    FILE *fp; //Aponta para um arquivo com o apontador "fp"
    Admin* adm_op; //Cria um apontador "adm_op" para o struct "Admin"
    adm_op = (Admin*)malloc(sizeof(Admin)); //Inicializa adequadamente o apontador "adm_op" e aloca a memória necessaria para a execução
    fp = fopen("dat/administrativo.dat", "r+b"); //Abre o arquivo binario no endereço informado lê e reescreve
    while (!feof(fp)) { //Percorre o arquivo binario até o final
        fread(adm_op, sizeof(Admin), 1, fp); //Percorre o arquivo binario até o final
        if ((strcmp(adm_op->cpf, adm->cpf) == 0) && (adm_op->status != '0')) { //Compara a entrada do "adm_op->cpf", com o "adm->cpf" se são iguais e se o "adm_op->status" é diferente de '0'
            adm_op->status = '0'; //Escreve '0' no campo "adm_op->status"
            fseek(fp, -1 * sizeof(Admin), SEEK_CUR); //Move o apontador para o começo da struct desejada
            fwrite(adm_op, sizeof(Admin), 1, fp); //Escreve os novos dados na struct desejada
        }
    }
    fclose(fp); //Fechar o arquivo apontado pelo "fp"
    free(adm_op); //Devolve a memória ultilizado pelo "adm_op"
}


void edit_cad_adm (Admin* adm, char op) { //Inicia o processo recebendo como parametro um apontador para um "adm" para uma struct "Admin" e um "char op"
    switch (op) { //Ultiliza o "char op" para verificar o algoritmo adequado a ser seguido
        case '1' : //"char op" igual a '1'
            limpa_buffer (); //Limpa o buffer
            char* email = le_email ("Cadastro administrador"); //"char* email" recebe uma entrada pre processada pela função "le_email"
            strcpy(adm->email, email); //Copia o "char* email" para o "adm->email"
            break; //Para a função
        case '2' :
            limpa_buffer (); //Limpa o buffer
            char* cel = le_cel ("Cadastro administrador"); //"char* cel" recebe uma entrada pre processada pela função "le_cel"
            strcpy(adm->cel, cel); //Copia o "char* cel" para o "adm->cel"
            break; //Para a função
        case '3' :
            limpa_buffer (); //Limpa o buffer
            char* nome = le_nome ("Cadastro administrador"); //"char* nome" recebe uma entrada pre processada pela função "le_nome"
            strcpy(adm->nome, nome); //Copia o "char* nome" para o "adm->nome"
            break; //Para a função
        case '4' :
            limpa_buffer (); //Limpa o bufferr
            excluir_adm(adm->cpf); //Chama a função "excluir_adm"
            break; //Para a função
    }
}