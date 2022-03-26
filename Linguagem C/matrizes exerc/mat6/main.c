#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4], i, j, cont=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%i", & mat[i][j]);
            if(mat[i][j]>10)
            {
                cont++;
            }
        }
    }
    printf(" Possui %i numeros maiores que 10", cont);
    return 0;
}
/*Faça um programa para ler uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
