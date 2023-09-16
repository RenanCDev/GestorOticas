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



/////
//Assinaturas das funções
void tela_apresentacao(void);
void tela_sobre(void);
void tela_banner(void);
void tela_cad_admin(void);
void cad_admin(void);
void ent_cpf(void);
void re_ent_cpf(void);
void ent_nome(void);
void re_ent_nome(void);
void ent_cel(void);
void re_ent_cel(void);
void ent_dat_nasc(void);
void re_ent_dat_nasc(void);
void ent_email(void);
void re_ent_email(void);
void ent_cep(void);
void re_ent_cep(void);
void ent_estado(void);
void re_ent_estado(void);
void ent_cidade(void);
void re_ent_cidade(void);
void ent_bairro(void);
void re_ent_bairro(void);
void ent_rua(void);
void re_ent_rua(void);
void ent_numero(void);
void re_ent_numero(void);
void ent_complement(void);
void re_ent_complemento(void);
void ent_pont_referencia(void);
void re_ent_pont_referencia(void);
void cnpj(void);
void re_cnpj(void);
void insc_estadual(void);
void re_inst_estadual(void);
int tela_menu_principal(void);
int tela_administrativo(void);
int tela_fornecedor(void);
int tela_produto(void);
int tela_colaborador(void);
int tela_cliente(void);


/////
//Programa principal
int main(void) {
    int op, op1, op2;
    setlocale(LC_ALL, "Portuguese_Brazil");
    {
    tela_sobre();
    tela_apresentacao();
    do {
        op = tela_menu_principal();
        switch (op) {
            case 1:
                do {
                    op1 = tela_administrativo();
                    switch (op1) {
                        case 1:
                            cad_admin();
                            break;
                        case 2:
                            //pesquisar administrador
                            break;
                        case 3:
                            //relatorio administradores
                            break;
                        case 4:
                            //relatorio fornecedores
                            break;
                        case 5:
                            //relatorio produtos
                            break;
                        case 6:
                            //relatorio colaboradores
                            break;
                        case 7:
                            //relatorio clientes
                            break;
                        case 0:
                            break;
                    }   
                }   
                while (op1 != 0);
                break;
            case 2:
                op1 = tela_fornecedor();
                break;
            case 3:
                op1 = tela_produto();
                break;
            case 4:
                op1 = tela_colaborador();
                break;
            case 5:
                op1 = tela_cliente();
                break;
            case 0:
                 break;
            }
        }
    while (op != 0);
    return 0;
    }
}


/////
//Funções telas
//Apresentação
void tela_apresentacao(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|               Universidade Federal do Rio Grande do Norte               |\n");
    printf("|                                                                         |\n");
    printf("|                   Centro de Ensino Superior do Seridó                   |\n");
    printf("|                                                                         |\n");
    printf("|             Aluno -- Renan Missias Rodrigues Alves da Costa             |\n");
    printf("|                                                                         |\n");
    printf("|                    Disciplina DCT1106 -- Programação                    |\n");
    printf("|                                                                         |\n");
    printf("|                  Projeto Sistema de Gestão para Óticas                  |\n");
    printf("|                                                                         |\n");
    printf("|               Developed by @RenanMRb - since august, 2023               |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");  
    getchar();
}


//Sobre
void tela_sobre(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|         O projeto EAGLE EYES é um projeto de gestão de óticas .         |\n");
    printf("|                                                                         |\n");
    printf("|            Tem o objetivo de gerir e administrar uma ótica .            |\n");
    printf("|                                                                         |\n");
    printf("|                             > > ATENÇÃO < <                             |\n");
    printf("|                                                                         |\n");
    printf("|                   Este NÃO é um programa comercial .                    |\n");
    printf("|                                                                         |\n");
    printf("|       O desenolvedor não se responsabiliza por quaisquer danos !        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Tela banner
void tela_banner(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|   #######                                #######                        |\n");
    printf("|   #         ##    ####  #      ######    #       #   # ######  ####     |\n");
    printf("|   #        #  #  #    # #      #         #        # #  #      #         |\n");
    printf("|   #####   #    # #      #      #####     #####     #   #####   ####     |\n");
    printf("|   #       ###### #  ### #      #         #         #   #           #    |\n");
    printf("|   #       #    # #    # #      #         #         #   #      #    #    |\n");
    printf("|   ####### #    #  ####  ###### ######    #######   #   ######  ####     |\n");   
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Menu principal
int tela_menu_principal(void) {
    int op;
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Menu principal                              |\n");
    printf("|                                                                         |\n");
    printf("|                         1 -> Administrativo <-                          |\n");
    printf("|                                                                         |\n");
    printf("|                          2 -> Fornecedores <-                           |\n");
    printf("|                                                                         |\n");
    printf("|                            3 -> Produtos <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                          4 -> Colaboradores <-                          |\n");
    printf("|                                                                         |\n");
    printf("|                            5 -> Clientes <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                         0 -> Fechar programa <-                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    return op;
}


//Caminho administrativo
int tela_administrativo(void) {
    int op;
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Administrativo                              |\n");
    printf("|                                                                         |\n");
    printf("|                     1 -> Cadastrar administrador <-                     |\n");
    printf("|                                                                         |\n");
    printf("|                     2 -> Pesquisar admnistrador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                    3 -> Relatorio administradores <-                    |\n");
    printf("|                                                                         |\n");
    printf("|                     4 -> Relatorio fornecedores <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                       5 -> Relatorio produtos <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     6 -> Relatorio colaboradores <-                     |\n");
    printf("|                                                                         |\n");
    printf("|                       7 -> Relatorio clientes <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    getchar();
    return op;
}


//Tela cadastrar administrador
void tela_cad_admin(void) {
    system("clear");
    tela_banner();
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Cadastro administrador                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Cadastrar administrador
void cad_admin(void) {
    tela_cad_admin();
    ent_cpf();
    tela_cad_admin();
    ent_nome();
    tela_cad_admin();
    ent_cel();
    tela_cad_admin();
    ent_dat_nasc();
    tela_cad_admin();
    ent_email();
    tela_cad_admin();
    ent_cep();
    tela_cad_admin();
    ent_estado();
    tela_cad_admin();
    ent_cidade();
    tela_cad_admin();
    ent_bairro();
    tela_cad_admin();
    ent_rua();
    tela_cad_admin();
    ent_numero();
    tela_cad_admin();
    ent_complement();
    tela_cad_admin();
    ent_pont_referencia();
}


//Tela pesquisar administrador
void pesq_admin(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Pesquisar administrador                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório administradores
void relat_admin(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Relatório administrador                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório fornecedores
void relat_fornec(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Relatório fornecedor                           |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório produtos
void relat_produtos(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Relatório produtos                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório colaboradores
void relat_colab(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Relatório colaboradores                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


//Tela relatório clientes
void relat_clientes(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Relatório clientes                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


int cadastro_cliente(void) {
    int op;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                                 Cliente                                 |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    return op;
}


int tela_fornecedor(void) {
    int op;
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Fornecedores                               |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar fornecedor <-                       |\n");
    printf("|                                                                         |\n");
    printf("|                      2 -> Pesquisar fornecedor <-                       |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    return op;
}


int tela_produto(void) {
    int op;
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                                Produtos                                 |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar produto <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar produto <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    return op;
}


int tela_colaborador(void) {
    int op;
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Colaboradores                              |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar colaborador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                      2 -> Pesquisar colaborador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    return op;
}


int tela_cliente(void) {
    int op;
    system("clear");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                                Clientes                                 |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &op);
    return op;
}


/////
//Telas universais
//CPF
void ent_cpf(void) {
    char cpf;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cpf;
}


//Reentrada CPF
void re_ent_cpf(void) {
    char cpf;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CPF inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cpf;
}


//Nome
void ent_nome(void) {
    char nome;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return nome;
}


//Reentrada nome
void re_ent_nome(void) {
    char nome;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Nome inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return nome;
}


//Cel
void ent_cel(void) {
    char cel;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cel;
}


//Reentrada cel
void re_ent_cel(void) {
    char cel;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Celular inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return cel;
}


//Data de nascimento
void ent_dat_nasc(void) {
    char dat_nasc;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Digite a data de nascimento :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return dat_nasc;
}


//Reentrada data de nascimento
void re_ent_dat_nasc(void) {
    char dat_nasc;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Data de nascimento inválida ! ! !                    |\n");
    printf("|                                                                         |\n");
    printf("|                      Digite a data de nascimento :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return dat_nasc;
}


//Email
void ent_email(void) {
    char email;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o email :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
    //return email;
}


//Reentrada email
void re_ent_email(void) {
    char email;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Email inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o email :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return email;
}


/////Entrada endereço
//Entrada CEP
void ent_cep(void) {
    char cep;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o cep :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cep;
}


//Reentrada CEP
void re_ent_cep(void) {
    char cep;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CEP inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o cep :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cep;
}


//Estado
void ent_estado(void) {
    char estado;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o estado :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return estado;
}


//Reentrada estado
void re_ent_estado(void) {
    char estado;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Estado inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o estado :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return estado;
}


//Cidade
void ent_cidade(void) {
    char cidade;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite a cidade :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cidade;
}


//Reentrada cidade
void re_ent_cidade(void) {
    char cidade;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Cidade inválida ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite a cidade :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cidade;
}


//Bairro
void ent_bairro(void) {
    char bairro;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o bairro :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return bairro;
}


//Reentrada bairro
void re_ent_bairro(void) {
    char bairro;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Bairro inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o bairro :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return bairro;
}


//Rua
void ent_rua(void) {
    char rua;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite a rua :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return rua;
}


//Reentrada rua
void re_ent_rua(void) {
    char rua;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Rua inválida ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite a rua :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return rua;
}


//Entrada número
void ent_numero(void) {
    char numero;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o número :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return numero;
}


//Reentrada número
void re_ent_numero(void) {
    char numero;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Número inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o número :                            |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return numero;
}


//Entrada complemento
void ent_complement(void) {
    char complemento;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o complemento :                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return complemento;
}


//Reentrada complemento
void re_ent_complement(void) {
    char complemento;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Complemento inválido ! ! !                        |\n");
    printf("|                                                                         |\n");
    printf("|                         Digite o complemento :                          |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return complemento;
}


//Entrada ponto de referência
void ent_pont_referencia(void) {
    char pont_referencia;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o ponto de referência :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return pont_referencia;
}


//Reentrada ponto de referência
void re_ent_pont_referencia(void) {
    char pont_referencia;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Ponto de referência inválido ! ! !                    |\n");
    printf("|                                                                         |\n");
    printf("|                     Digite o ponto de referência :                      |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return pont_referencia;
}


//Entrada CNPJ
void ent_cnpj(void) {
    char cnpj;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CNPJ :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cnpj;
}


//Reentrada CNPJ
void re_ent_cnpj(void) {
    char cnpj;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CNPJ inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CNPJ :                             |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return cnpj;
}


//Entrada inscrição estadual
void ent_insc_estadual(void) {
    char insc_estadual;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Digite a IE :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return insc_estadual;
}


//Reentrada inscrição estadual
void re_ent_insc_estadual(void) {
    char insc_estadual;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            IE inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                              Digite a IE :                              |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    getchar();
    //return insc_estadual;
}


..