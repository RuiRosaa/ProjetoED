#define _CRT_SECURE_NO_WARNINGS

#include "Cliente.h"

CLI* CriarCliente(char* _cod, char* _nome)
{
    CLI* C = (char*)malloc(sizeof(CLI));
    C->CODIGO = (char*)malloc((strlen(_cod) + 1) * sizeof(char));
    C->NOME = (char*)malloc((strlen(_nome) + 1) * sizeof(char));
    strcpy(C->CODIGO, _cod);
    strcpy(C->NOME, _nome);
    return C;
}

void DestruirCliente(CLI* C)
{
    if (!C) return;
    free(C->NOME);
    free(C);
}

void MostrarCliente(CLI* C)
{
    printf("Cliente: [%s] : [%s]\n", C->CODIGO, C->NOME);
}
