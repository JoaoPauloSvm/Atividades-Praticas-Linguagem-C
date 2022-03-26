#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, v1[5], v2[5], s[5];
    for(i=0; i<5; i++)
    {
        printf("\n>>Digite primeiro numero para somar (%i): ", i);
        scanf("%i",& v1[i]);
        printf(">>Digite segundo numero para somar: ");
        scanf("%i",& v2[i]);
    }
    for (i=0; i<5; i++)
    {
        s[i]=v1[i]+v2[i];
        printf("Valor da Soma(%i): %i\n", i, s[i]);
    }
    return 0;
}
/*Fazer um programa para ler 2 vetores (vet1 e vet2) de 5 elementos.
No final, imprimir um novo vetor que é a soma de vet1 com vet2.*/
