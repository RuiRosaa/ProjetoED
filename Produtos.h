#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int CODIGO;
    char* NOME;
    float PRECO;
    float TCOMPRA;
    float TCAIXA;
}PRODUTOS, PROD;

PROD* CriarProdutos(int _cod, char* _nome, float _preco, float _tcompra, float _tcaixa);
void DestruirProdutos(PROD* P);
void MostrarProdutos(PROD* P);