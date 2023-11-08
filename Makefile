run: all
	./main

all:
	clear;
	gcc -c -Wall administrativo/administrativo.c;
	gcc -c -Wall administrativo/administrativo.h;
	gcc -c -Wall cliente/cliente.c;
	gcc -c -Wall cliente/cliente.h;
	gcc -c -Wall colaborador/colaborador.c;
	gcc -c -Wall colaborador/colaborador.h;
	gcc -c -Wall ent_le_dados/ent_dados.c;
	gcc -c -Wall ent_le_dados/ent_dados.h;
	gcc -c -Wall ent_le_dados/le_dados.c;
	gcc -c -Wall ent_le_dados/le_dados.h;
	gcc -c -Wall fornecedor/fornecedor.c;
	gcc -c -Wall fornecedor/fornecedor.h;
	gcc -c -Wall menus_telas/menus.c;
	gcc -c -Wall menus_telas/menus.h;
	gcc -c -Wall menus_telas/telas.c;
	gcc -c -Wall menus_telas/telas.h;
	gcc -c -Wall produto/produto.c;
	gcc -c -Wall produto/produto.h;
	gcc -c -Wall relatorio/relatorio.c;
	gcc -c -Wall relatorio/relatorio.h;
	gcc -c -Wall util/util.c;
	gcc -c -Wall util/util.h;
	gcc -c -Wall util/all.h;
	gcc -c -Wall venda/venda.c;
	gcc -c -Wall venda/venda.h;
	gcc -c -Wall main.c;
	gcc -o main *.o;
	rm *.o;
	rm administrativo/*.gch
	rm cliente/*.gch
	rm colaborador/*.gch
	rm ent_le_dados/*.gch
	rm fornecedor/*.gch
	rm menus_telas/*.gch
	rm produto/*.gch
	rm relatorio/*.gch
	rm util/*.gch
	rm venda/*.gch
rm:
	rm dat/*.dat;
