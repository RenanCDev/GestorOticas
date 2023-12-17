//Inclui todas as importações e declarações necessárias no programa
#include "all.h"

//Validação opção: verifica se a entrada informada esta dentro das opções possíveis(retorna "1") ou não(retorna "0")
int valid_op (char op, char op_max) {
    if (op >= '0' && op <= op_max) {
        return 1; 
    } else {
        return 0; 
    } 
} // ADAPTADA DE - VALIDAÇÃO PARA DIGITO - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

//Validação opção char: verifica se a entrada contém apenas um char(retorna "1") ou não(retorna "0")
int valid_op_c (char *entrada) {
    if (strlen(entrada) != 1) {
        return 0; 
    }
    return 1; 
} // AUTOR: LUIZ MIGUEL // GIT: https://github.com/LuizMiguel4444

//Validação para dígito: verifica se o caractere é digito(retorna "1") ou não(retorna "0")
int valid_digt (char num) {
    if (num >= '0' && num <= '9') {
        return 1; 
    } else {
        return 0; 
    } 
} // AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

/// Validação data: verifica se o char é de data(retorna "1") ou não(retorna "0")
int valid_char_data (char data) {
    if ((valid_digt(data)) || (data == '/')) {
        return 1;
    }
    return 0;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Validação para números com tamanho exigido: verifica se a string recebida contém apenas números no tamanho exigido(retorna "1") ou não(retorna "0")
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
} // ADAPTADA - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

//Validação para números float com tamanho exigido: verifica se a string recebida contém apenas números e duas casas decimais
//no tamanho exigido(retorna "1") ou não(retorna "0")
int valid_numeros_f(char* variavel, int tam) {
    int tam_variavel;
    tam_variavel = strlen(variavel);
    if (tam_variavel > tam) {
        return 0;
    }
    for (int i = 0; i < tam_variavel; i++) {
        if (!valid_digt(variavel[i])) {
            if ((variavel[i] == '.') && (i  == (tam_variavel - 3))){
                for (i++; i < tam_variavel; i++) {
                    if (!valid_digt(variavel[i])) {
                        return 0;
                    }
                    return 1;
                }
            } else {
                    return 0;
            }
        }
    } 
    return 0;
} // AUTOR - RENAN COSTA // GIT: https://github.com/RenanMRb

//Validação para números sem tamanho exigido: verifica se a string recebida contém apenas números(retorna "1") ou não(retorna "0")
int valid_numeros_s(char* variavel) {
    int tam_variavel;
    tam_variavel = strlen(variavel);
    for (int i = 0; i < tam_variavel; i++) {
        if (!valid_digt(variavel[i])) {
            return 0; 
        } 
    }
    return 1; 
} // ADAPTADA - VALIDAÇÃO PARA CELULAR - AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

//Validação para CPF: verifica se a string recebida é um CPF válido(retorna "1") ou não(retorna "0")
int valid_cpf (char* cpf) {
    int i, j, digito1 = 0, digito2 = 0;
    if (strlen(cpf) != 11) {
        return 0;
    } else {
        //digito 1
        for (i = 0, j = 10; i < strlen (cpf) - 2; i++, j--) { //multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        }
        digito1 %= 11;
        if (digito1 < 2) {
            digito1 = 0;
        } else {
            digito1 = 11 - digito1;
        }
        if ((cpf[9] - 48) != digito1) {
            return 0; //se o digito 1 não for o mesmo que o da validação CPF é inválido
        } else { //digito 2
            for (i = 0, j = 11; i < strlen (cpf) - 1; i++, j--) //multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                digito2 += (cpf[i] - 48) * j;
            digito2 %= 11;
            if (digito2 < 2) {
                digito2 = 0;
            } else {
                digito2 = 11 - digito2;
                if ((cpf[10]-48) != digito2)
                    return 0;
            } 
        } 
    } //se o digito 2 não for o mesmo que o da validação CPF é inválido
    return 1;
} // AUTOR: EDUARDO EDSON // GIT: https://github.com/eduardoedson


//Limpa buffer: Limpa o buffer existente
void limpa_buffer (void) {
    int entrada;
    do {
        entrada = fgetc(stdin); 
    } while (entrada != EOF && entrada != '\n');
} // AUTOR: GUILHERME BERNAL /// STACKOVERFLOW: https://pt.stackoverflow.com/questions/9427/limpeza-do-buffer-do-teclado-ap%C3%B3s-scanf


//Validação bissexto: verifica se o ano for bissexto(divisível por 4, não divisível por
//100 ou divisível por 400)(retorna "1") ou não(retorna "0")
int verif_bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
        return 1; 
    } else if (aa % 400 == 0) {
        return 1; 
    } else {
        return 0; 
    } 
} // AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação data dia, mês e ano: verifica se dia, mês e ano correspondem a uma data válida, inclusive
//em anos bissextos(retorna "1"), ou não (retorna "0"). Utilizada no processo do valid_data
int verif_valid_dat (int dd, int mm, int aa) {
    int maior_dia;
    if (aa < 0 || mm < 1 || mm > 12) {
        return 0; 
    }
    if (mm == 2) {
        if (verif_bissexto(aa)) { 
            maior_dia = 29; 
        } else { 
            maior_dia = 28; 
        } 
    } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        maior_dia = 30; 
    } else {
        maior_dia = 31; 
    }
    if (dd < 1 || dd > maior_dia) {
        return 0; 
    }
    return 1; 
} // AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

//Validação data: verifica se a string recebida corresponde a uma data válida (apenas dígitos
//e no formato: ddmmaaaa)(retorna "1") ou não(retorna "0"). Utilizada no processo valid_ent_data
int valid_data (char* data) {
    int dia, mes, ano;
    for (int i = 0; i < strlen(data); i++) {
        if (data[i] == '/') {
        return 0;
        }
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[2] - '0') * 10 + (data[3] - '0');
    ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + 
          (data[6] - '0') * 10 + (data[7] - '0');
    if (!verif_valid_dat(dia, mes, ano)) {
        return 0;
    }
        return 1;  
} // AUTOR FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio

void trat_dat_ent (char* data) {
    if ((strlen(data) == 10) && (data[2] == '/') && (data[5] == '/')) {
        data[2] = data[3];
        data[3] = data[4];
        data[4] = data[6];
        data[5] = data[7];
        data[6] = data[8];
        data[7] = data[9];
        data[8] = '\0';
    }
}

void trat_dat_said (char* data) {
    data[8] = data[7];
    data[9] = data[8];
    data[8] = data[6];
    data[7] = data[5];
    data[6] = data[4];
    data[4] = data[3];
    data[3] = data[2];
    data[2] = '/';
    data[5] = '/';
    data[10] = '\0';
}

int compara_datas (char* data_inicial, char* data_final) {

  int dia_inicial, mes_inicial, ano_inicial;
  sscanf(data_inicial, "%2d %2d %4d", &dia_inicial, &mes_inicial, &ano_inicial);

  int dia_final, mes_final, ano_final;
  sscanf(data_final, "%2d %2d %4d", &dia_final, &mes_final, &ano_final);

  if (ano_final < ano_inicial || (ano_final == ano_inicial && (mes_final < mes_inicial || (mes_final == mes_inicial && dia_final < dia_inicial)))) {
    return 0;
  } else {
    return 1;
  }
} // ADAPTADA DE: LUIZ MIGUEL /// GIT: https://github.com/LuizMiguel4444

int compara_datas_relat (char* data, char* data_inicial, char* data_final) {
  int dia, mes, ano;
  sscanf(data, "%2d %2d %4d", &dia, &mes, &ano);

  int dia_inicial, mes_inicial, ano_inicial;
  sscanf(data_inicial, "%2d %2d %4d", &dia_inicial, &mes_inicial, &ano_inicial);

  int dia_final, mes_final, ano_final;
  sscanf(data_final, "%2d %2d %4d", &dia_final, &mes_final, &ano_final);

  if (ano_final < ano_inicial || (ano_final == ano_inicial && (mes_final < mes_inicial || (mes_final == mes_inicial && dia_final < dia_inicial)))) {
    return 0;
  }

  if (ano < ano_inicial || (ano == ano_inicial && (mes < mes_inicial || (mes == mes_inicial && dia < dia_inicial)))) {
    return 0;
  } else if (ano > ano_final || (ano == ano_final && (mes > mes_final || (mes == mes_final && dia > dia_final)))) {
    return 0;
  } else {
    return 1;
  }
} // AUTOR: LUIZ MIGUEL /// GIT: https://github.com/LuizMiguel4444

//Valida data: verifica se string recebido corresponder a uma data válida(retorna "1") ou não(retorna "0") 
int valid_ent_data (char* data) {
    int check;
    if (strlen(data) == 10) {
        for (int i = 0; i < strlen(data); i++) {
            if ((!valid_char_data(data[i])) || (data[2] != '/') || (data[5] != '/')) {
            return 0;
            } 
        }
    trat_dat_ent(data);
    check = valid_data(data);
    } else if (strlen(data) == 8) {
        for (int i = 0; i < strlen(data); i++) {
            if (!valid_char_data(data[i])) {
                return 0;   
            }
        }
    check = valid_data(data);
    } else if (strlen(data) != 8 && strlen(data) != 10) {
        return 0;
    }
    if (check != 1) {
        return 0;
    } else {
        return 1;
    }
}  // MODIFICADO DE: FLAVIUS GORGÔNIO E ANTONIO MANIERO // GIT: https://github.com/flaviusgorgonio E GIT: https://github.com/maniero

//Validação para letra: verifica se a letra recebida é caractere alfabético(retorna "1") ou não(retorna "0")
//Considerando alfabeto "A" - "Z" ou "a" - "z"
int valid_letra (char letra) {
    // int a = letra;
    if (letra >= 'A' && letra <= 'Z') {
    return 1;
    } else if (letra >= 'a' && letra <= 'z') {
    return 1;
    } else if (letra == ' ') {
    return 1;
    } else {
    return 0;
    }
} // AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para nome: verifica se todos os caracteres recebidos são caractere alfabético(retorna "1") ou não(retorna "0")
//considerando alfabeto "A" - "Z" ou "a" - "z"
int valid_nome (char* nome) {
    for (int i=0; nome[i] != '\0'; i++) {
        if (!valid_letra(nome[i]) || (strlen(nome) > 46)) {
            return 0; 
        } 
    } 
    return 1; 
} // AUTOR: FLAVIUS GORGÔNIO // GIT: https://github.com/flaviusgorgonio


//Validação para E-mail: verifica se a string recebida corresponde a um email válido(retorna "1") ou não(retorna "0")
int valid_email(char* email) {
    char usuario[256], site[256], dominio[256];
    if ((sscanf(email, "%[^@ \t\n]@%[^. \t\n].%3[^ \t\n]", usuario, site, dominio ) != 3 ) || (strlen(email) > 46)) {
        return 0;
    }
    return 1; 
} // AUTOR: LACOBUS // STACKOVERFLOW: https://pt.stackoverflow.com/questions/310096/como-validar-um-e-mail-em-c


//validação para CNPJ: verifica se a string recebida corresponde a um CNPJ válido(retorna "1") ou não (retorna "0")
int valid_cnpj(char*  cnpj) {
    int tamanho = strlen(cnpj);;
    if (tamanho != 14) {
        return 0;
    }
    int cnpj_n[14];
    if (!valid_numeros_s(cnpj)) {
        return 0;
    }
    for (int i = 0; i < tamanho; i++) {
        cnpj_n[i] = cnpj[i] - '0';
    }
    int digt = 0;
    int multiplicador = 5;
    for (int i = 0; i < 12; i++) {
        digt += cnpj_n[i] * multiplicador;
        multiplicador = (multiplicador == 2) ? 9/*se o multiplicador for == '2', ele recebe '9'*/ : (multiplicador - 1)/*se não for, ele subtrai '1' dele mesmo*/; 
    }
    int digt_aux = digt % 11;
    int digit1 = (digt_aux < 2) ? 0/*se o digt_aux for < '2', ele recebe '0'*/ : (11 - digt_aux)/*se não for, ele subtrai digt_aux de '11'*/;
    if (cnpj_n[12] != digit1) {
        return 0;
    }
    digt = 0;
    multiplicador = 6;
    for (int i = 0; i < 13; i++) {
        digt += cnpj_n[i] * multiplicador;
        multiplicador = (multiplicador == 2) ? 9/*se o multiplicador for == '2', ele recebe '9'*/ : (multiplicador - 1)/*se não for, ele subtrai '1' dele mesmo*/; 
    }
    digt_aux = digt % 11;
    int digit2 = (digt_aux < 2) ? 0/*se o digt_aux for < '2', ele recebe '0'*/ : (11 - digt_aux)/*se não for, ele subtrai digt_aux de '11'*/;
    if (cnpj_n[13] == digit2) {
        return 1; 
    }
    return 0; 
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb


//Validação para código de barras: verifica se a string recebida é um código de barras válido(retorna "1") ou não(retorna "0")
int valid_cod_barras (char* cod_barras) {
    int tam = 13;
    int l = 0;
    int k = 0;
    if (!valid_numeros(cod_barras, tam)) {
        return 0; 
    } else {
        for (int i = 0; i < 12; i++) {
            if (i % 2 == 0) {
                l = l + ((cod_barras[i] - '0')); 
            } else {
                l = l + 3 * ((cod_barras[i] - '0')); 
            } 
        }
        k = (10 - (l % 10)) % 10;
        int z = cod_barras[12];
        if (z == k + '0') {
            return 1; 
        } 
    }
    return 0; 
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Centralizar_texto: centraliza o texto inserido
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
} // AUTOR: EMANUEL ALVES // GIT: https://github.com/Faltrenn


//Simulador de input
char* input (void) {
  char linha[256];
  scanf(" %255[^\n]", linha);
  return duplica(linha);
} // AUTOR: FLAVIUS GORGÔNIO /// GIT: https://github.com/flaviusgorgonio


//Auxiliar do simulador input
char* duplica (char* s) {
  int n;
  n = strlen(s) + 1;
  char* d = (char*) malloc(n*sizeof(char));
  strcpy(d, s);
  return d;
} // AUTOR: FLAVIUS GORGÔNIO /// GIT: https://github.com/flaviusgorgonio

//Pega o exato dia para auxiliar na função inst_data
char* peg_dia (void) {
    time_t momento;
    momento = time(NULL);
    struct tm tm = *localtime(&momento);
    int d = tm.tm_mday;
    char* dia = (char*) malloc(6 * sizeof(char));
    sprintf(dia,"%d",d);
    if (strlen(dia) < 2) {
        dia[2] = '\0';
        dia[1] = dia[0];
        dia[0] = '0';
    }
    return dia;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Pega o exato mes para auxiliar na função inst_data
char* peg_mes (void) {
    time_t momento;
    momento = time(NULL);
    struct tm tm = *localtime(&momento);
    int m = tm.tm_mon + 1;
    char* mes = (char*) malloc(6 * sizeof(char));
    sprintf(mes,"%d",m);
    if (strlen(mes) < 2) {
        mes[2] = '\0';
        mes[1] = mes[0];
        mes[0] = '0';
    }
    return mes;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Pega o exato ano para auxiliar na função inst_data
char* peg_ano (void) {
    time_t momento;
    momento = time(NULL);
    struct tm tm = *localtime(&momento);
    int a = tm.tm_year + 1900;
    char* ano = (char*) malloc(6 * sizeof(char));
    sprintf(ano,"%d",a);
    return ano;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Pega a exata hora para auxiliar na função inst_hora
char* peg_hora (void) {
    time_t momento;
    momento = time(NULL);
    struct tm tm = *localtime(&momento);
    int h = tm.tm_hour;
    char* hora = (char*) malloc(6 * sizeof(char));
    sprintf(hora,"%d",h);
    if (strlen(hora) < 2) {
        hora[2] = '\0';
        hora[1] = hora[0];
        hora[0] = '0';
    }
    return hora;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Pega o exato minuto para auxiliar na função inst_hora
char* peg_minuto (void) {
    time_t momento;
    momento = time(NULL);
    struct tm tm = *localtime(&momento);
    int m = tm.tm_min;
    char* minuto = (char*) malloc(6 * sizeof(char));
    sprintf(minuto,"%d",m);
    if (strlen(minuto) < 2) {
        minuto[2] = '\0';
        minuto[1] = minuto[0];
        minuto[0] = '0';
    }
    return minuto;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Pega o exato segundo para auxiliar na função inst_hora
char* peg_segundo (void) {
    time_t momento;
    momento = time(NULL);
    struct tm tm = *localtime(&momento);
    int s = tm.tm_sec;
    char* segundo = (char*) malloc(6 * sizeof(char));
    sprintf(segundo,"%d",s);
    if (strlen(segundo) < 2) {
        segundo[2] = '\0';
        segundo[1] = segundo[0];
        segundo[0] = '0';
    }
    return segundo;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Retorna a data isntantanea
char* inst_data (void) {
    char* dia = peg_dia ();
    char* mes = peg_mes ();
    char* ano = peg_ano ();
    char* data = (char *) malloc(strlen(dia) + strlen(mes) + strlen(ano));
    data = dia;
    strcat(data, "/");
    strcat(data, mes);
    strcat(data, "/");
    strcat(data, ano);
    return data;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Retorna a hora instantanea
char* inst_hora (void) {
    char* hora = peg_hora ();
    char* minuto = peg_minuto ();
    char* segundo = peg_segundo ();
    char* horario = (char *) malloc(strlen(hora) + strlen(minuto) + strlen(segundo));
    horario = hora;
    strcat(horario, ":");
    strcat(horario, minuto);
    strcat(horario, ":");
    strcat(horario, segundo);
    return horario;
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Retorna a string maiúscula
void trat_nome(char* nome) {
  for (int i = 0; nome[i] != '\0'; ++i) {
    nome[i] = toupper(nome[i]);
  }
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Tratamento de entrada para cpf retirando os "." e "-"
void trat_cpf_entr (char* cpf) {
    int tam = strlen(cpf);
    if ((cpf[3] == '.') && (cpf[7] == '.') && (cpf[11] == '-') && (tam == 14)) {
        cpf[3] = cpf[4];
        cpf[4] = cpf[5];
        cpf[5] = cpf[6];
        cpf[6] = cpf[8];
        cpf[7] = cpf[9];
        cpf[8] = cpf[10];
        cpf[9] = cpf[12];
        cpf[10] = cpf[13];
        cpf[11] = '\0';
    }
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Tratamento de saída para cpf colocando os "." e "-"
void trat_cpf_said (char* cpf) {
    cpf[13] = cpf[10];
    cpf[12] = cpf[9];
    cpf[11] = '-';
    cpf[10] = cpf[8];
    cpf[9] = cpf[7];
    cpf[8] = cpf[6];
    cpf[7] = '.';
    cpf[6] = cpf[5];
    cpf[5] = cpf[4];
    cpf[4] = cpf[3];
    cpf[3] = '.';
    cpf[14] = '\0';
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Tratamento de entrada para cel retirando os "()" e "-"
void trat_cel_entr (char* cel) {
    int tam = strlen(cel);
    if ((cel[0] == '(') && (cel[3] == ')') && (cel[9] == '-') && (tam == 14)) {
        cel[0] = cel[1];
        cel[1] = cel[2];
        cel[2] = cel[4];
        cel[3] = cel[5];
        cel[4] = cel[6];
        cel[5] = cel[7];
        cel[6] = cel[8];
        cel[7] = cel[10];
        cel[8] = cel[11];
        cel[9] = cel[12];
        cel[10] = cel[13];
        cel[11] = '\0';
    }
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Tratamento de saída para cel colocando os "." e "-"
void trat_cel_said (char* cel) {
    cel[13] = cel[10];
    cel[12] = cel[9];
    cel[11] = cel[8];
    cel[10] = cel[7];
    cel[9] = '-';
    cel[8] = cel[6];
    cel[7] = cel[5];
    cel[6] = cel[4];
    cel[5] = cel[3];
    cel[4] = cel[2];
    cel[3] = ')';
    cel[2] = cel[1];
    cel[1] = cel[0];
    cel[0] = '(';
    cel[14] = '\0';
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

//Tratamento de entrada para cnpj retirando os ".", "/" e "-"
void trat_cnpj_entr (char* cnpj) {
    int tam = strlen(cnpj);
    if ((cnpj[2] == '.') && (cnpj[6] == '.') && (cnpj[10] == '/') && (cnpj[15] == '-') && (tam == 18)) {
        cnpj[2] = cnpj[3];
        cnpj[3] = cnpj[4];
        cnpj[4] = cnpj[5];
        cnpj[5] = cnpj[7];
        cnpj[6] = cnpj[8];
        cnpj[7] = cnpj[9];
        cnpj[8] = cnpj[11];
        cnpj[9] = cnpj[12];
        cnpj[10] = cnpj[13];
        cnpj[11] = cnpj[14];
        cnpj[12] = cnpj[16];
        cnpj[13] = cnpj[17];
        cnpj[14] = '\0';
    }
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb]

//Tratamento de saida para cnpj colocando os ".", "/" e "-"
void trat_cnpj_said (char* cnpj) {
    cnpj[17] = cnpj[13];
    cnpj[16] = cnpj[12];
    cnpj[15] = '-';
    cnpj[14] = cnpj[11];
    cnpj[13] = cnpj[10];
    cnpj[12] = cnpj[9];
    cnpj[11] = cnpj[8];
    cnpj[10] = '/';
    cnpj[9] = cnpj[7];
    cnpj[8] = cnpj[6];
    cnpj[7] = cnpj[5];
    cnpj[6] = '.';
    cnpj[5] = cnpj[4];
    cnpj[4] = cnpj[3];
    cnpj[3] = cnpj[2];
    cnpj[2] = '.';
    cnpj[1] = cnpj[1];
    cnpj[0] = cnpj[0];
    cnpj[18] = '\0';
} // AUTOR: RENAN COSTA // GIT: https://github.com/RenanMRb

int cancel (char* comparado) {
    char* comparador = "sair";
    if (strcmp(comparado, comparador) == 0) {
        return 0;
    }
    return 1;
}

int cpf_zero (char* comparado) {
    char* comparador = "000";
    if (strcmp(comparado, comparador) == 0) {
        return 0;
    }
    return 1;
}

void recebe_cpf_zero (char* cpf) {
    char* cpf_zero = "000.000.000-00";
    strcpy(cpf, cpf_zero);
}

int cnpj_zero (char* comparado) {
    char* comparador = "000";
    if (strcmp(comparado, comparador) == 0) {
        return 0;
    }
    return 1;
}

void recebe_cnpj_zero (char* cnpj) {
    char* cnpj_zero = "00.000.000/0000-00";
    strcpy(cnpj, cnpj_zero);
}

int cod_barras_zero (char* comparado) {
    char* comparador = "000";
    if (strcmp(comparado, comparador) == 0) {
        return 0;
    }
    return 1;
}

void recebe_cod_barras_zero (char* cod_barras) {
    char* cod_barras_zero = "0000000000000";
    strcpy(cod_barras, cod_barras_zero);
}