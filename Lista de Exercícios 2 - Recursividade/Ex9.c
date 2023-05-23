#include <stdio.h>
#include <stdlib.h>

// Função Interativa
int somaInt(int vetor[], int n)
{
    int resultado = 0;

    for (int i = 0; i < n; i++)
    {
        resultado += vetor[i];
    }
    return resultado;
}

// Função Recursiva
int somaRec(int vetor[], int n)
{
    if (n == 0)
    {
        return vetor[n];
    }
    else
    {
        return vetor[n] + somaRec(vetor, n - 1);
    }
}

// Função Main
int main(int argc, char const *argv[])
{
    int n;
    printf("Qual tamanho do vetor: ");
    scanf("%d", &n);
    printf("\n");
    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nResultado Recursivo: %d", somaRec(vetor, n - 1));
    printf("\nResultado Interativo: %d\n\n", somaInt(vetor, n));

    return 0;
}
