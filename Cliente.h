#pragma once
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char* CODIGO;
	char* NOME;
}CLIENTE, CLI;

CLI* CriarCliente(char* _cod, char* _nome);
void DestruirCliente(CLI* C);
void MostrarCliente(CLI* C);