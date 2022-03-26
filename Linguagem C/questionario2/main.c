#include <stdio.h>
#include <stdlib.h>

void media(float nota1, float nota2, float nota3, char opcao)
{
    float media;
    if(opcao == 'A')
        media=((nota1+nota2+nota3)/3);
    if (opcao == 'P')
        media=((nota1*5+nota2*3+nota3*2)/3);
    printf("Media eh: %.2f\n",media);
}
