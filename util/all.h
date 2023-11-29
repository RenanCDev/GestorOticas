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


/////
//Contém todos os //#include ".h"//
//
#ifndef UTIL_H  // Evita problemas de inclusão múltipla, exigindo a não existencia de
                // nenhuma #define UTIL_H antes
                
#define UTIL_H

#include <stdio.h> // Fornece funções para entrada e saída de dados

#include <stdlib.h> // Fornece diversas funções relacionadas a operações de alocação de memória dinâmica,
                    // conversões de strings para números, geração de números pseudoaleatórios,
                    // controle de processos e outras utilidades

#include <ctype.h> // Fornece funções para testar e manipular caracteres. 
                   // Geralmente são usadas para verificar se um caractere é uma letra maiúscula ou minúscula,
                   // um dígito ou um caractere de espaço, entre outras coisas.

#include <string.h> // Fornece funções para manipulação de strings, como cópia, concatenação,
                    // comparação e busca de caracteres dentro de strings

#include <locale.h> // Fornece funções para manipulação de informações de localização,
                    // como configurações de região e formatação de números e datas de acordo com as convenções locais.

#include <unistd.h> // Fornece acesso a diversas funções relacionadas a operações do sistema operacional,
                    // especialmente aquelas relacionadas ao ambiente de execução de programas,
                    // como fork (criar um novo processo), exec (executar um programa),
                    // e funções relacionadas ao sistema de arquivos, como close (fechar um descritor de arquivo)
                    // e write (escrever em um descritor de arquivo).

#include <time.h> // Fornece funções relacionadas ao tempo e data. Algumas das funções mais comuns incluem
                  // time (obtém o tempo atual), ctime (converte uma representação de tempo para uma string legível),
                  // gmtime (converte o tempo para uma estrutura de tempo UTC) e outras.

#include "../util/all.h"

#include "../menus_telas/telas.h"

#include "../ent_le_dados/ent_dados.h"

#include "../menus_telas/menus.h"

#include "../administrativo/administrativo.h"

#include "../fornecedor/fornecedor.h"

#include "../produto/produto.h"

#include "../colaborador/colaborador.h"

#include "../cliente/cliente.h"

#include "../relatorio/relatorio.h"

#include "../venda/venda.h"

#include "../util/util.h"

#include "../ent_le_dados/le_dados.h"

#endif // UTIL_H