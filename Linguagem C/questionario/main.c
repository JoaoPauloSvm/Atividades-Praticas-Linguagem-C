#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contc(char str[], char c)
{
    int tam, i, cont=0;
    tam=strlen(str);
    for(i=0; i<tam; i++)
    {
        if (str[i]==c) cont++;
    }
    return cont;
}

int main()
{
    char texto[]="Estamos aqui para acompanhar voce";
    int x;
    x=0;
    x=contc(texto, 'a');
    printf("%d",x);
    return 0;
}
