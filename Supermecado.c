#define _CRT_SECURE_NO_WARNINGS
#include "Supermecado.h"
#include "Funcionario.h"
#include "Cliente.h"

void LerFicheiro(int t, char* ficheiro) {
    FILE* F = fopen(ficheiro, "r");

    if (!F) return;

    char BUFFER[1001];
    while (!feof(F))
    {
        fgets(BUFFER, 1000, F);
        //printf("Linha: [%s]\n", BUFFER);
        int i = 0;
        char* CAMPOS[10];
        char* token = strtok(BUFFER, "\t");
        while (token != NULL)
        {
            //printf("[%s]", token);
            CAMPOS[i] = token;
            token = strtok(NULL, "\t");
            i++;
        }

        //printf("CODIGO:[%d] NOME: [%s]\n", CODIGO, NOME);
        switch (t)
        {
        case 0:
        {
            char* CODIGO = CAMPOS[0];
            char* NOME = CAMPOS[1];
            FUNC* Fun = CriarFuncionario(CODIGO, NOME);
            MostrarFuncionario(Fun);
            //AddLista(LFun, Fun);
        }
        break;

        case 1:
        {
            char* CODIGO = CAMPOS[0];
            char* NOME = CAMPOS[1];
            CLI* P = CriarCliente(CODIGO, NOME);
            MostrarCliente(P);
            //AddLista(LFun, Fun);
        }
        break;

        case 2:
        {
            int CODIGO = atoi(CAMPOS[0]);
            char* NOME = CAMPOS[1];
            
            //AddLista(LFun, Fun);
        }
        break;
        }
        
    }
    fclose(F);
}