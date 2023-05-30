#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarStr(char *str, char *subStr)
{
    char *pos = strstr(str, subStr);
    if (pos == NULL)
    {
        return -1;
    }
    else
    {
        return pos - str;
    }
}

int main(int argc, char const *argv[])
{
    char str[50], subStr[50];

    printf("Digite a frase completa: ");
    fgets(str, 49, stdin);

    printf("Digite a SubFrase: ");
    fgets(subStr, 49, stdin);

    int pos = verificarStr(str, subStr);
    printf("Posicao = %d\n", pos);

    return 0;
}