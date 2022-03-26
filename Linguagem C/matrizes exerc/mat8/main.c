#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4], i, j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4;j++)
        {
            if(i+j==3)
            {
                mat[i][j]=5;
            }
            else
            {
                mat[i][j]=8;
            }
        }
    }
    for(i=0; i<4; i++)
    {
        printf("\n");
        for(j=0; j<4; j++)
        {
            printf("%i\t", mat[i][j]);
        }
    }
    return 0;
}
/*Fazer um programa em que todos elementos da diagonal secundária sejam iguais a 5 e os demais iguais a 8.*/
