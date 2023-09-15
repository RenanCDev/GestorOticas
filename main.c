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
int tela_menu_principal(void);
int tela_administrativo(void);
int tela_fornecedor(void);
int tela_produto(void);
int tela_colaborador(void);
int tela_cliente(void);
char ent_cpf(void);
char re_ent_cpf(void);
char ent_nome(void);
char re_ent_nome(void);
char ent_cel(void);
char re_ent_cel(void);
char ent_dat_nasc(void);
char re_ent_dat_nasc(void);
char ent_email(void);
char re_ent_email(void);
char ent_cep(void);
char re_ent_cep(void);
char ent_estado(void);
char re_ent_estado(void);
char ent_cidade(void);
char re_ent_cidade(void);
char ent_bairro(void);
char re_ent_bairro(void);
char ent_rua(void);
char re_ent_rua(void);
char ent_numero(void);
char re_ent_numero(void);
char ent_complement(void);
char re_ent_complemento(void);
char ent_pont_referencia(void);
char re_ent_pont_referencia(void);
char cnpj(void);
char re_cnpj(void);
char insc_estadual(void);
char re_inst_estadual(void);


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
    return op;
}


//Tela cadastrar administrador
void tela_cad_admin(void) {
    //system("clear");//
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
char ent_cpf(void) {
    char cpf;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o CPF :                              |\n", &cpf);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cpf;
}


//Reentrada CPF
char re_ent_cpf(void) {
    char cpf;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CPF inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF :                              |\n");
    scanf("%c", &cpf);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cpf;
}


//Nome
char ent_nome(void) {
    char nome;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o nome :                             |\n", &nome);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return nome;
}


//Reentrada nome
char re_ent_nome(void) {
    char nome;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Nome inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o nome :                             |\n", &nome);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return nome;
}


//Cel
char ent_cel(void) {
    char cel;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o celular :                            |\n", &cel);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cel;
}


//Reentrada cel
char re_ent_cel(void) {
    char cel;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Celular inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o celular :                            |\n", &cel);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cel;
}


//Data de nascimento
char ent_dat_nasc(void) {
    char dat_nasc;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                      Digite a data de nascimento :                      |\n", &dat_nasc);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return dat_nasc;
}


//Reentrada data de nascimento
char re_ent_dat_nasc(void) {
    char dat_nasc;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Data de nascimento inválida ! ! !                    |\n");
    printf("|                                                                         |\n");
    scanf("%c|                      Digite a data de nascimento :                      |\n", &dat_nasc);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return dat_nasc;
}


//Email
char ent_email(void) {
    char email;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o email :                             |\n", &email);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return email;
}


//Reentrada email
char re_ent_email(void) {
    char email;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Email inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o email :                             |\n", &email);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return email;
}


/////Entrada endereço
//Entrada CEP
char ent_cep(void) {
    char cep;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o cep :                              |\n", &cep);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cep;
}


//Reentrada CEP
char re_ent_cep(void) {
    char cep;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CEP inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o cep :                              |\n", &cep);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cep;
}


//Estado
char ent_estado(void) {
    char estado;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o estado :                            |\n", &estado);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return estado;
}


//Reentrada estado
char re_ent_estado(void) {
    char estado;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Estado inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o estado :                            |\n", &estado);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return estado;
}


//Cidade
char ent_cidade(void) {
    char cidade;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite a cidade :                            |\n", &cidade);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cidade;
}


//Reentrada cidade
char re_ent_cidade(void) {
    char cidade;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Cidade inválida ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite a cidade :                            |\n", &cidade);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cidade;
}


//Bairro
char ent_bairro(void) {
    char bairro;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o bairro :                            |\n", &bairro);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return bairro;
}


//Reentrada bairro
char re_ent_bairro(void) {
    char bairro;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Bairro inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o bairro :                            |\n", &bairro);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return bairro;
}


//Rua
char ent_rua(void) {
    char rua;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite a rua :                              |\n", &rua);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return rua;
}


//Reentrada rua
char re_ent_rua(void) {
    char rua;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Rua inválida ! ! !                            |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite a rua :                              |\n", &rua);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return rua;
}


//Entrada número
char ent_numero(void) {
    char numero;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o número :                            |\n", &numero);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return numero;
}


//Reentrada número
char re_ent_numero(void) {
    char numero;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Número inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o número :                            |\n", &numero);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return numero;
}


//Entrada complemento
char ent_complement(void) {
    char complemento;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                         Digite o complemento :                          |\n", &complemento);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return complemento;
}


//Reentrada complemento
char re_ent_complement(void) {
    char complemento;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Complemento inválido ! ! !                        |\n");
    printf("|                                                                         |\n");
    scanf("%c|                         Digite o complemento :                          |\n", &complemento);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return complemento;
}


//Entrada ponto de referência
char ent_pont_referencia(void) {
    char pont_referencia;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                     Digite o ponto de referência :                      |\n", &pont_referencia);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return pont_referencia;
}


//Reentrada ponto de referência
char re_ent_pont_referencia(void) {
    char pont_referencia;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Ponto de referência inválido ! ! !                    |\n");
    printf("|                                                                         |\n");
    scanf("%c|                     Digite o ponto de referência :                      |\n", &pont_referencia);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return pont_referencia;
}


//Entrada CNPJ
char ent_cnpj(void) {
    char cnpj;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o CNPJ :                             |\n", &cnpj);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cnpj;
}


//Reentrada CNPJ
char re_ent_cnpj(void) {
    char cnpj;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           CNPJ inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o CNPJ :                             |\n", &cnpj);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cnpj;
}


//Entrada inscrição estadual
char ent_insc_estadual(void) {
    char insc_estadual;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    scanf("%c|                              Digite a IE :                              |\n", &insc_estadual);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return insc_estadual;
}


//Reentrada inscrição estadual
char re_ent_insc_estadual(void) {
    char insc_estadual;
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            IE inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    scanf("%c|                              Digite a IE :                              |\n", &insc_estadual);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return insc_estadual;
}


