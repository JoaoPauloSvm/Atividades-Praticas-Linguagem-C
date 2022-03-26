#include <stdio.h>
#include <stdlib.h>
#define L 30

int String(char a[L])
{
    int i, cont=0;
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]==' ')
        {
            cont ++;
        }
    }
    return cont;
}
int main()
{
    int i, cont, resultado;
    char a[L];
    printf("Digite uma frase: ");
    scanf("%c", & a[i]);
    resultado == String(a);
    printf("Essa frase possui %i espacos!", resultado);
    return 0;
}
