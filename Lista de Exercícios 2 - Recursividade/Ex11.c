#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funçao interativa
int tamStrInt(char str[])
{
    int tam = 0;
    while (str[tam] != '\0')
    {
        tam++;
    }
    return tam;
}

// Funçao Recursiva
int tamStrRec(char str[], int tam)
{
    if (str[tam] == '\0')
    {
        return tam;
    }
    else
    {
        return tamStrRec(str, tam + 1);
    }
}

// Funçao Main
int main(int argc, char const *argv[])
{
    char string[50];

    printf("Digite a frase: ");
    fgets(string, 49, stdin);

    // Tamannho descontando o caracter de parada \0
    printf("\nTamanho s/ Interativo: %d", tamStrInt(string) - 1);
    printf("\nTamanho s/ Recursivo: %d\n\n", tamStrRec(string, 0) - 1);

    return 0;
}