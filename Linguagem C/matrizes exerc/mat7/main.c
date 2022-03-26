#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], i, j, s;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Matriz [%i][%i]: ", i, j);
            scanf("%i", & a[i][j]);
        }
    }
    if(i=j)
    {
            for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                s=a[0][0]+a[1][1]+a[2][2];
            }
        }
    }
    printf("Soma da Diagonal Principal: %i", s);
    return 0;
}
/*Faça um programa para ler uma matriz A(3,3) e retorna a soma dos elementos da sua diagonal principal.*/
