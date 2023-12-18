#include "../util/all.h"


//////
//Menus
//
//Menu principal
//
char menu_principal (void) {
    char* op;
    char op_max = '7';
    do {
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Menu principal", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Administrativo <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Produto <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Colaborador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Cliente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("7 -> Sobre o programa <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Fechar o programa <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}


//Menu administrativo
//
char menu_administrativo (void) {
    char* op;
    char op_max = '3';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Administrativo", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Cadastrar administrador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Pesquisar administrador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Relatório <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}


//Menu relatórios
//
char menu_relatorio (void) {
    char* op;
    char op_max = '6';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Administrativo", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Relatório administrador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Relatório fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Relatório produto <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Relatório colaborador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Relatório cliente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Relatório venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

//Menu do relatório pessoas físicas e jurídicas
char m_relat_pessoas (char* relatorio) {
    char* op;
    char op_max = '5';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto (relatorio, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Mostrar todos <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Mostrar atívos <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Mostrar inatívos <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Mostrar ordem cronológica <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Pesquisa por nome <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

//Menu do relatório produtos
char m_relat_produto (void) {
    char* op;
    char op_max = '4';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Relatório produto", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Mostrar todos <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Mostrar por fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Mostrar por ordem cronológica <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Mostrar por nome <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

//Menu do relatório vendas
char m_relat_venda (void) {
    char* op;
    char op_max = '7';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Relatório venda", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Mostrar todas <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Mostrar atívas <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Mostrar inatívas <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Mostrar por ordem cronológica <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Mostrar por intervalo de data <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Mostrar por cliente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("7 -> Mostrar por colaborador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

//Menu secundario universal para 3 opções
//
char menu_sec_uni (char* menu, char* procurar, char* pesquisar) {
    char* op;
    char op_max = '2';
    do {
        system("clear");
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto(menu, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto(procurar, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto(pesquisar, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}


//Menu relatórios
//
char menu_edit (char* titulo, char* cpf, char* email, char* cel, char* nome, char status, char* data, char* hora, int id) {
    char* op;
    char op_max = '4';
    do {
        system("clear");
        tela_pessoas (titulo, cpf, email, cel, nome, status, data, hora, id);
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Editar/ Excluir", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Editar email <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Editar cel <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Editar nome <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Excluir cadastro <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max)));
}


//Menu relatórios
//
char menu_edit_prod (char* titulo, char* cod_barras, char* cnpj, char* desc, char* quant, char* valor_comp, char* valor_vend, char* data, char* hora, int id) {
    char* op;
    char op_max = '5';
    do {
        system("clear");
        tela_produto (titulo, cod_barras, cnpj, desc, quant, valor_comp, valor_vend, data, hora, id);
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Editar", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Editar fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Editar descrição <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Editar estoque <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Editar valor de compra <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Editar valor de venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max)));
}


//Menu relatórios
//
char menu_edit_vend (void) {
    char* op;
    char op_max = '1';
    do {
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("Cancelar", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Cancelar venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Voltar ao menu anterior <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max)));
}


//Adiciona itens a uma venda
//
char menu_item_venda (void) {
    char* op;
    char op_max = '2';
    do {
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Acrescentar novo item <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Prosseguir com a venda <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input ();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max)) && (op[0] != '0')) {
            return op[0]; 
        } else if (!cancel(op)) {
            return '0';
        }
        else {
            return '9';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}


char menu_modulo (char* menu) {
    char* op;
    char op_max = '8';
    do {
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto (menu, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Todos cronologicamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Todos alfabeticamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Ativos cronologicamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Ativos alfabeticamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Inativos cronologicamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Inativos alfabeticamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("7 -> Entre datas <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("8 -> Por nome <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Fechar o programa <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return 'z';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

char menu_modulo_prod (char* menu) {
    char* op;
    char op_max = '7';
    do {
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto (menu, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Todos cronologicamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Todos alfabeticamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Todos por código de barras <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Por fornecedor <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Por faixa de preço de compra crescente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Por faixa de preço de venda crescente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("7 -> Por descrição <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Fechar o programa <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return 'z';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

char menu_modulo_vend (char* menu) {
    char* op;
    char op_max = '9';
    do {
        tela_banner ();
        printf("+=========================================================================+\n");
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto (menu, 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("1 -> Todos cronologicamente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("2 -> Todos ativos <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("3 -> Todos desativos <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("4 -> Por produto <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("5 -> Por colaborador <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("6 -> Por cliente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("7 -> Por faixa de preço crescente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("8 -> Por faixa de preço descrescente <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("9 -> Entre datas <-", 73, 0));
        printf("|                                                                         |\n");
        printf("|%s|\n", centralizar_texto ("0 -> Fechar o programa <-", 73, 0));
        printf("|                                                                         |\n");
        printf("+=========================================================================+\n");
        printf("Selecione uma opção: \n");
        op = input();
        if ((valid_op_c(op)) && (valid_op(op[0], op_max))) {
            return op[0]; 
        } 
        else {
            tela_erro ("ENTRADA INVÁLIDA ! ! !");
            return 'z';
        } 
    } while ((!valid_op_c(op)) || (valid_op(op[0], op_max))); 
}

//Tela sobre o programa
//
void tela_sobre (void) {
    system("clear");
    tela_banner ();
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
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|         O projeto EAGLE EYES é um projeto de gestão de óticas .         |\n");
    printf("|                                                                         |\n");
    printf("|       Tem o objetivo avaliar o desenvolvedor do segundo período .       |\n");
    printf("|                                                                         |\n");
    printf("|              Avaliador - Doutor Flavius da Luz e Gorgonio               |\n");
    printf("|                                                                         |\n");
    printf("| Disciplina DCT1106 Programação -- Bacharelado de Sistemas de Informação |\n");
    printf("|                                                                         |\n");
    printf("|                             > > ATENÇÃO < <                             |\n");
    printf("|                                                                         |\n");
    printf("|                   Este NÃO é um programa comercial .                    |\n");
    printf("|                                                                         |\n");
    printf("|       O desenolvedor não se responsabiliza por quaisquer danos !        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("+=========================================================================+\n");
    printf("|                                                                         |\n");
    printf("|                        Tecle ENTER para retornar                        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n"); 
    limpa_buffer ();
}