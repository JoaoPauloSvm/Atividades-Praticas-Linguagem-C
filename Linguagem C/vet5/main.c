#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i;
    for(i=0; i<10; i++)
    {
        printf("Valor %i: ", i);
        scanf("%i",& vet[i]);
    }
    for (i=10; i>0; i--)
    {
        printf("%i\t%i\n", i, vet[i]);
    }
    return 0;
}
/*Leia um vetor de 10 posi��es (inteiros) e imprima-o na ordem
invertida (da �ltima para a primeira posi��o).*/
