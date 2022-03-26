#include <stdio.h>
#include <stdlib.h>

int SomaDiagonais(int a[3][3])
{
    int i, j, soma=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if((i==j) || (i+j==2))
            {
                soma=soma+a[i][j];
            }
        }
    }
    return soma;
}
int main()
{
    int a[3][3], soma, i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Matriz [%d][%d]: ", i+1, j+1);
            scanf("%d", & a[i][j]);
        }
    }
    soma= SomaDiagonais(a);
    printf("Soma dos elementos: %d", soma);
    return 0;
}
