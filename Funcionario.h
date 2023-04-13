#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char* CODIGO;
    char* NOME;
}FUNCIONARIO, FUNC;

FUNC* CriarFuncionario(char* _cod, char* _nome);
void DestruirFuncionario(FUNC* F);
void MostrarFuncionario(FUNC* F);