#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i;
    for (i=0; i<10; i++)
    {
        printf("Valor %i: ", i);
        scanf("%i",& vet[i]);
    }
    for(i=0; i<10; i++)
    {
        if(i%2!=0)
        {
            printf("%i\t%i\n", i, vet[i]);
        }
    }
    return 0;
}
