#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "Cliente.h"
#include "Funcionario.h"

int menu() {
	int op;
	printf("\n\n\tMENU\n");
	printf("1-Carregar Funcionarios de txt para a estrutura\n");
	printf("2-Carregar Clientes de txt para a estrutura\n");
	printf("3-Carregar Produtos de txt para a estrutura\n");
	printf("0-Sair\n");
	printf("\nDigite a opcao: ");
	scanf_s("%d", &op);
	return op;
}

int main()
{
	int OP = 1;
	do {
		OP = menu();
		switch (OP)
		{
		case 1: 
			LerFicheiro(0, "funcionarios.txt"); 
			break;
		case 2: 
			LerFicheiro(1, "clientes.txt");
			break; 
		case 3: 
			LerFicheiro(2, "produtos.txt");
			break;
		default:
			printf("Opcao invalida! Tente novamente.\n");
			break;
		}
		
	} while (OP != 0);
    return 0;
}