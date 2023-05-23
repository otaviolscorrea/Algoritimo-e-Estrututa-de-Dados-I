#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funçao Interativa
int maiorInt(int vetor[], int n, int maiorValor)
{
    int i = 0;

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maiorValor)
        {
            maiorValor = vetor[i];
        }
    }
    return maiorValor;
}

// Funçao Recursiva
int maiorRec(int vetor[], int n, int indice)
{
    // Caso Base
    if (n == 0)
    {
        return vetor[indice];
    }
    // Passo Indutivo
    else
    {
        if (vetor[n - 1] > vetor[indice])
        {
            return maiorRec(vetor, n - 1, n - 1);
        }
        else
        {
            return maiorRec(vetor, n - 1, indice);
        }
    }
}

// Função Main
int main(int argc, char const *argv[])
{
    int n, maiorValor = -99999;
    printf("Qual tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    srand(time(NULL));

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand() % 10;
    }
    // Descomente o codigo abaixo para printar o vetor
    /* for (int i = 0; i < n; i++)
    {
        printf("Elemento %d: %d\n", i + 1, vetor[i]);
    } */

    printf("\nMaior Interativo: %d", maiorInt(vetor, n, maiorValor));
    printf("\nMaior Recursivo: %d\n\n", maiorRec(vetor, n, 0));
    return 0;
}
