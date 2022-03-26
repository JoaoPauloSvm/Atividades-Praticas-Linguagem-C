#include <stdio.h>
#include <stdlib.h>
int funcao(int x)
{
    int i, aux;
    aux=1;
    for(i=1; i<x; i++)
    {
        aux=aux*i;
    }
    return aux;
}

int main()
{
    int num, aux;
    scanf("%i",& num);
    aux=funcao(num);
    printf("Resultado: %i", aux);
    return 0;
}
