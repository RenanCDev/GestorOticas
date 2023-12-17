#include "../util/all.h"

void modulo_relatorio (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
        do {
            op = menu_relatorio ();
            switch (op) {
                case '1':
                    limpa_buffer ();
                    relat_admin ();
                    break;
                case '2':
                    limpa_buffer ();
                    relat_fornec ();
                    break;
                case '3':
                    limpa_buffer ();
                    relat_produto ();
                    break;
                case '4':
                    limpa_buffer ();
                    relat_colab ();
                    break;
                case '5':
                    limpa_buffer ();
                    relat_cliente ();
                    break;
                // case '6':
                //     limpa_buffer ();
                //     relat_venda ();
                //     break;
            }
        } while (op != '0'); 
}