#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void inverterStr(char str[], int i, int j)
{
    if (i < j)
    {
        troca(&str[i], &str[j]);
        inverterStr(str, i + 1, j - 1);
    }
}

int main()
{
    char string[50];

    printf("Digite a string a ser invertida: ");
    fgets(string, 49, stdin);

    inverterStr(string, 0, strlen(string) - 1);

    printf("String invertida:  %s", string);

    return 0;
}