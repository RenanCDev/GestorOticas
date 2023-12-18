#include "../util/all.h"


/////
//Funções de entrada de dados
//
//entrada do CPF
//
char* ent_cpf (void) {
    char* cpf;
    cpf = (char*) malloc(15*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o CPF .                              |\n");
    printf("|                                                                         |\n");
    printf("|                        Exemplos de CPF válidos .                        |\n");
    printf("|                                                                         |\n");
    printf("|                     00000000000 ou 000.000.000-00 .                     |\n");
    printf("|                                                                         |\n");
    printf("|                 No caso do cadastro zero insira '000' .                 |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                            CPF: ");
    cpf = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cpf;
}


//Entrada do email
//
char* ent_email (void) {
    char* email;
    email = (char*) malloc(46*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                            Digite o E-mail .                            |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 46 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                   E-mail: ");
    email = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return email;
}


//Entrada do celular
//
char* ent_cel (void) {
    char* cel;
    cel = (char*) malloc(15*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                           Digite o celular .                            |\n");
    printf("|                                                                         |\n");
    printf("|                     Exemplos de celulares válidos .                     |\n");
    printf("|                                                                         |\n");
    printf("|                     83912341234 ou (83)91234-1234 .                     |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                            Cel.: ");
    cel = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cel; 
}


//Entrada do nome
//
char* ent_nome (void) {
    char* nome;
    nome = (char*) malloc(46*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                             Digite o nome .                             |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 46 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                  Sem acentos e caractéres especiáis .                   |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|               Nome: ");
    nome = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return nome; 
}


//Entrada do CNPJ
//
char* ent_cnpj (void) {
    char* cnpj;
    cnpj = (char*) malloc(29*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                      Digite o CNPJ do fornecedor .                      |\n");
    printf("|                                                                         |\n");
    printf("|                       Exemplos de CNPJs válidos .                       |\n");
    printf("|                                                                         |\n");
    printf("|                 00000000000000 ou 00.000.000/0000-00 .                  |\n");
    printf("|                                                                         |\n");
    printf("|                 No caso do cadastro zero insira '000' .                 |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                          CNPJ: ");
    cnpj = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cnpj; 
}


//Entrada do código de barras
//
char* ent_cod_barras (void) {
    char* cod_barras;
    cod_barras = (char*) malloc(13*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                       Digite o código de barras .                       |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 13 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|                 No caso do cadastro zero insira '000' .                 |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                     Código de barras: ");
    cod_barras = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cod_barras; 
}


//Entrada da descrição do produto
//
char* ent_desc_produto (void) {
    char* desc;
    desc = (char*) malloc(46*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Descreva o produto .                           |\n");
    printf("|                                                                         |\n");
    printf("|                    Tamanho máximo de 46 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|     Descrição do produto: ");
    desc = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return desc; 
}


//Entrada de quantidade de peças
//
char* ent_quant (void) {
    char* quant;
    quant = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                     Digite a quantidade de peças .                      |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                          Quantidade de peças: ");
    quant = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return quant; 
} 


//Entrada do valor de entrada da peça
//
char* ent_valor_ent (void) {
    char* valor;
    valor = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                   Digite o valor de entrada da peça .                   |\n");
    printf("|                                                                         |\n");
    printf("|               Insira apenas números, incluindo centavos !               |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                           Valor de compra: R$ ");
    valor = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
    return valor; 
}


//Entrada valor de saída da peça
//
char* ent_valor_saida (void) {
    char* valor;
    valor = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                    Digite o valor de saída da peça .                    |\n");
    printf("|                                                                         |\n");
    printf("|               Insira apenas números, incluindo centavos !               |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                           Valor de venda: R$ ");
    valor = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return valor; 
}


//Entrada id da venda
//
char* ent_id_venda (void) {
    char* id;
    id = (char*) malloc(8*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                              Digite o ID .                              |\n");
    printf("|                                                                         |\n");
    printf("|                         Insira apenas números !                         |\n");
    printf("|                                                                         |\n");
    printf("|                     Tamanho máximo de 8 caracters .                     |\n");
    printf("|                                                                         |\n");
    printf("|               Para voltar ao menu anterior insira: '0' .                |\n");
    printf("|                                                                         |\n");
    printf("|                                  ID : ");
    id = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return id; 
}

char* ent_data_ini (void) {
    char* data;
    data = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                         Digite a data inicial .                         |\n");
    printf("|                                                                         |\n");
    printf("|                       Exemplos de datas válidas :                       |\n");
    printf("|                                                                         |\n");
    printf("|                         XX/XX/XXXX OU XXXXXXXX                          |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                            Data : ");
    data = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return data; 
}

char* ent_data_fim (void) {
    char* data;
    data = (char*) malloc(11*sizeof(char));
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                          Digite a data final .                          |\n");
    printf("|                                                                         |\n");
    printf("|                       Exemplos de datas válidas :                       |\n");
    printf("|                                                                         |\n");
    printf("|                         XX/XX/XXXX OU XXXXXXXX                          |\n");
    printf("|                                                                         |\n");
    printf("|              Para voltar ao menu anterior insira: 'sair' .              |\n");
    printf("|                                                                         |\n");
    printf("|                            Data : ");
    data = input();
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return data; 
}