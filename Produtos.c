#define _CRT_SECURE_NO_WARNINGS

#include "Produtos.h"

PROD* CriarProdutos(int _cod, char* _nome, float _preco, float _tcompra, float _tcaixa)
{
    PROD* P = (char*)malloc(sizeof(PROD));
    P->CODIGO = _cod;
    P->NOME = (char*)malloc((strlen(_nome) + 1) * sizeof(char));
    strcpy(P->NOME, _nome);
    return P;
}

void DestruirProdutos(PROD* P)
{
    if (!P) return;
    free(P->NOME);
    free(P);
}

void MostrarProdutos(PROD* P)
{
    printf("Produto: [%d] : [%s]\n", P->CODIGO, P->NOME);
}