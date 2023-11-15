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
#include <string.h>
#include "all.h"


/////
//Funções de validação:
//Validação opção:
//Verifica se a entrada informada esta dentro das opções possíveis(retorna "1") ou não(retorna "0")
//
//Função que retorna 1 caso a entrada tiver mais de 1 caractere
//e retorna 0 caso contrário
//
int valid_op (char op, char op_max) {
    if (op >= '0' && op <= op_max) {
        return 1; 
    } 
    else {
        return 0; 
    } 
}
// ADAPTADA DE - VALIDAÇÃO PARA DIGITO - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para entrada
//Valida se a entrada é válida, ou não
//
int valid_entrada(char *entrada) {
    if (strlen(entrada) > 1) {
        return 0; 
    }
    return 1; 
} 
// AUTOR: LUIZ MIGUEL // GIT: https://github.com/LuizMiguel4444


//Validação para dígito:
//Verifica se o caractere é digito(retorna "1") ou não(retorna "0")
//
int valid_digt (char num) {
    if (num >= '0' && num <= '9') {
        return 1; 
    } 
    else {
        return 0; 
    } 
}
// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para números com tamanho exigido:
//Verifica se a string recebida contém apenas números no tamanho exigido(retorna "1") ou não(retorna "0")
//
int valid_numeros(char* variavel, char tam) {
    int tam_variavel;
    tam_variavel = strlen(variavel);
    if (tam_variavel != tam) {
        return 0; 
    }
    for (int i = 0; i < tam; i++) {
        if (!valid_digt(variavel[i])) {
            return 0; 
        } 
    }
    return 1; 
}
// ADAPTADA - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para números float com tamanho exigido:
//Verifica se a string recebida contém apenas números e duas casas decimais no tamanho exigido(retorna "1") ou não(retorna "0")
//
int valid_numeros_f(char* variavel, int tam) {
    int tam_variavel;
    tam_variavel = strlen(variavel);
    if (tam_variavel > tam) {
        return 0;
    }
    int a = 0;
    for (int i = 0; i < tam_variavel; i++) {
        if (variavel[i] == '.') {
            a ++;
        }
    }
    if (a == 1) {
        for (int i = 0; i < tam_variavel; i++) {
            if (!valid_digt(variavel[i])) {
                if (variavel[i] == '.') {
                    if (i == (tam_variavel -3)) {
                        for (i++; i < tam_variavel; i++) {
                            if (!valid_digt(variavel[i])) {
                                return 0;
                            }
                            return 1;
                        }
                    }
                }
            } 
        }
    }
    return 0;
}
// ADAPTADA - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

//Validação para números sem tamanho exigido:
//Verifica se a string recebida contém apenas números(retorna "1") ou não(retorna "0")
//
int valid_numeros_s(char* variavel) {
    int tam_variavel;
    tam_variavel = strlen(variavel);
    for (int i = 0; i < tam_variavel; i++) {
        if (!valid_digt(variavel[i])) {
            return 0; 
        } 
    }
    return 1; 
}
// ADAPTADA - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para CPF:
//Verifica se a string recebida é um CPF válido(retorna "1") ou não(retorna "0")
//
int valid_cpf (char* cpf) {
    int i, j, digito1 = 0, digito2 = 0;
    if (strlen(cpf) != 11) {
        return 0;
    }
    else if(/*(strcmp (cpf,"00000000000") == 0) ||(strcmp (cpf,"11111111111") == 0) || (strcmp (cpf,"22222222222") == 0) ||*/
            // (strcmp (cpf,"33333333333") == 0) || (strcmp (cpf,"44444444444") == 0) || (strcmp (cpf,"55555555555") == 0) ||
            // (strcmp (cpf,"66666666666") == 0) || (strcmp (cpf,"77777777777") == 0) || (strcmp (cpf,"88888888888") == 0) ||
            (strcmp (cpf,"99999999999") == 0) /*|| (strcmp (cpf,"12345678909") == 0)*/) {
        return 0; //se o CPF estiver dentre os mencionados acima, ele é considerado cpf de teste.
    }
    else {
        //digito 1
        for (i = 0, j = 10; i < strlen (cpf) - 2; i++, j--) { //multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        }
        digito1 %= 11;
        if (digito1 < 2) {
            digito1 = 0;
        }
        else {
            digito1 = 11 - digito1;
        }
        if ((cpf[9] - 48) != digito1) {
            return 0; //se o digito 1 não for o mesmo que o da validação CPF é inválido
        }
        else { //digito 2
            for (i = 0, j = 11; i < strlen (cpf) - 1; i++, j--) //multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                digito2 += (cpf[i] - 48) * j;
            digito2 %= 11;
            if (digito2 < 2) {
                digito2 = 0;
            }
            else {
                digito2 = 11 - digito2;
                if ((cpf[10]-48) != digito2)
                    return 0;
            } 
        } 
    } //se o digito 2 não for o mesmo que o da validação CPF é inválido
    return 1;
}
// AUTOR: EDUARDO EDSON // GIT: https://github.com/eduardoedson


//Limpa buffer
//
void limpa_buffer (void) {
    int entrada;
    do {
        entrada = fgetc(stdin); 
    } while (entrada != EOF && entrada != '\n');
} 
// AUTOR: GUILHERME BERNAL /// STACKOVERFLOW: https://pt.stackoverflow.com/questions/9427/limpeza-do-buffer-do-teclado-ap%C3%B3s-scanf


//Validação bissexto:
//Verifica se o ano for bissexto(divisível por 4, não divisível por ...
//100 ou divisível por 400)(retorna "1") ou não(retorna "0")
//
int verif_bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
        return 1; 
    }
    else if (aa % 400 == 0) {
        return 1; 
    }
    else {
        return 0; 
    } 
}
// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação data:
//Verifica se dia, mês e ano correspondem a uma data válida, inclusive
//em anos bissextos(retorna "1"), ou não (retorna "0")
//
int verif_data (int dd, int mm, int aa) {
    int maior_dia;
    if (aa < 0 || mm < 1 || mm > 12) {
        return 0; 
    }
    if (mm == 2) {
        if (verif_bissexto(aa)) { 
            maior_dia = 29; 
        }
        else { 
            maior_dia = 28; 
        } 
    }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        maior_dia = 30; 
    }
    else {
        maior_dia = 31; 
    }
    if (dd < 1 || dd > maior_dia) {
        return 0; 
    }
    return 1; 
} 
// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação data:
//Verifica se a string recebida corresponde a uma data válida (apenas dígitos
//e no formato: ddmmaaaa)(retorna "1") ou não(retorna "0")
//
int valid_data (char* data) {
    int tam, dia, mes, ano;
    tam = strlen (data);
    if (tam != 10) {
        return 0; 
    }
    for (int i = 0; i < tam; i++) {
        if (!valid_digt(data[i]) && (data[2] != '/') && (data[5] != '/')) {
            return 0; 
        } 
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + 
        (data[8] - '0') * 10 + (data[9] - '0');
    if (!verif_data(dia, mes, ano)) {
        return 0; 
    }
    return 1; 
}
//AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para letra:
//Verifica se a letra recebida é caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
//
int valid_letra (char letra) {
    int a = letra;
    if (letra >= 'A' && letra <= 'Z') {
    return 1;
    } 
    else if (letra >= 'a' && letra <= 'z') {
    return 1;
    } 
    else if (letra == ' ') {
    return 1;
    }  
    else if (a < 0) {
    return 1;
    } 
    else {
    return 0;
    }
}
// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para nome:
//Verifica se todos os caracteres recebidos são caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
//
int valid_nome (char* nome) {
    for (int i=0; nome[i] != '\0'; i++) {
        if (!valid_letra(nome[i]) || (strlen(nome) > 46)) {
            return 0; 
        } 
    } 
    return 1; 
}
// AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para E-mail:
//Verifica se a string recebida corresponde a um email válido(retorna "1")
//ou não(retorna "0")
//
int valid_email(char* email) {
    char usuario[256], site[256], dominio[256];
    if ((sscanf(email, "%[^@ \t\n]@%[^. \t\n].%3[^ \t\n]", usuario, site, dominio ) != 3 ) || (strlen(email) > 46)) {
        return 0;
    }
    return 1; 
}
// AUTOR: LACOBUS // STACKOVERFLOW: https://pt.stackoverflow.com/questions/310096/como-validar-um-e-mail-em-c


//validação para CNPJ:
//Verifica se a string recebida corresponde a um CNPJ válido(retorna "1") ou não (retorna "0")
//

int valid_cnpj(char*  cnpj) {
    int size = strlen(cnpj);
    if (size != 14) {
        return 0; 
    }
    int digits[14];
    for (int i = 0; i < size; i++) {
        if (cnpj[i] < '0' || cnpj[i] > '9') {
            return 0; 
        }
        digits[i] = cnpj[i] - '0'; 
    }
    int sum = 0;
    int weight = 5;
    for (int i = 0; i < 12; i++) {
        sum += digits[i] * weight;
        weight = (weight == 2) ? 9 : (weight - 1); 
    }
    int remainder = sum % 11;
    int digit1 = (remainder < 2) ? 0 : (11 - remainder);
    if (digits[12] != digit1) {
        return 0;
    }
    sum = 0;
    weight = 6;
    for (int i = 0; i < 13; i++) {
        sum += digits[i] * weight;
        weight = (weight == 2) ? 9 : (weight - 1); 
    }
    remainder = sum % 11;
    int digit2 = (remainder < 2) ? 0 : (11 - remainder);
    if (digits[13] == digit2) {
        return 1; 
    }
    return 0; 
}
// AUTOR: CHAT GPT

//Validação para código de barras
//Verifica se a string recebida é um código de barras válido(retorna "1") ou não(retorna "0")
//
int valid_cod_barras (char* cod_barras) {
    int tam = 13;
    int l = 0;
    int k = 0;
    if (!valid_numeros(cod_barras, tam)) {
        return 0; 
    } 
    else {
        for (int i = 0; i < 12; i++) {
            if (i % 2 == 0) {
                l = l + ((cod_barras[i] - '0') * 1); 
            }
            else {
                l = l + ((cod_barras[i] - '0') * 3); 
            } 
        }
        int m = l % 10;
        if (m != 0) {
            do {
                l = l + 1;
                k = k + 1;
                m = l % 10; 
            } while (m != 0); 
        }
        int z = cod_barras[12];
        if (z == k + 48) {
            return 1; 
        } 
    }
    return 0; 
}
// AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb


//Centralizar_texto
//Centraliza o texto inserido
//
char* centralizar_texto(char* texto, int tam, int horizontal) {
    int tam_texto = strlen(texto);

    for(int c = 0;c < tam_texto;c++) {
        if(texto[c] < 0) {
            tam++;
            c++;
        }
    }
    int pos;
    if(horizontal == 1) {
        pos = tam - tam_texto;
    } else if (horizontal == -1) {
        pos = 0;
    } else {
        pos = tam/2 - tam_texto/2;
    }

    char *str = malloc((tam + 1)*sizeof(char));
    for(int c = 0; c < tam; c++) {
        if(c >= pos && c < (pos + tam_texto)) {
            str[c] = texto[c-pos];
        } else {
            str[c] = ' ';
        }
    }
    str[tam] = '\0';
    return str;
}
// AUTOR: EMANUEL ALVES // GIT: https://github.com/Faltrenn