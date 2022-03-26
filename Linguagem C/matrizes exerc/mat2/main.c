#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[9], i;
    for(i=0; i<9; i++)
    {
        vet[i]=i+i;
    }
    for(i=0; i<9; i++)
    {
        vet[i]=(vet[i]+1)+2;
        printf("%i\t", vet[i]);
    }
    return 0;
}
