#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarStr
(char str[], char subStr[])
{
    if (strlen(subStr) > strlen(str))
    {
        return 0;
    }
    if (strncmp(str, subStr, strlen(subStr) - 1) == 0)
    {
        return 1;
    }
    return verificarStr
    (str + 1, subStr);
}

int main(int argc, char const *argv[])
{
    char str[50], subStr[50];

    printf("Digite a frase completa: ");
    fgets(str, 49, stdin);

    printf("Digite a SubFrase: ");
    fgets(subStr, 49, stdin);

    if (verificarStr
    (str, subStr))
    {
        printf("\n%s Eh uma SubString de '%s\n", subStr, str);
    }
    else
    {
        printf("\n%s Nao eh uma SubString de %s\n", subStr, str);
    }

    return 0;
}
