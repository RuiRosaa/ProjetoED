#define _CRT_SECURE_NO_WARNINGS

#include "Funcionario.h"

FUNC* CriarFuncionario(char* _cod, char* _nome)
{
    FUNC* Fun = (char*)malloc(sizeof(FUNC));
    Fun->CODIGO = (char*)malloc((strlen(_cod) + 1) * sizeof(char));
    Fun->NOME = (char*)malloc((strlen(_nome) + 1) * sizeof(char));
    strcpy(Fun->CODIGO, _cod);
    strcpy(Fun->NOME, _nome);
    return Fun;
}

void DestruirFuncionario(FUNC* Fun)
{
    if (!Fun) return;
    free(Fun->NOME);
    free(Fun);
}

void MostrarFuncionario(FUNC* Fun)
{
    printf("Funcionario: [%s] : [%s]\n", Fun->CODIGO, Fun->NOME);
}