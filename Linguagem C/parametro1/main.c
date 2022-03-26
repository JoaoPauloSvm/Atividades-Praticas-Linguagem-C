#include <stdio.h>
#include <stdlib.h>
#define L 7
#define C 6

int SomaLinha(int a[L][C])
{
    int soma=0, i, j;
    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
        {
            if(i==5)
            {
                soma=soma+a[i][j];
            }
        }
    }
    return soma;
}
int SomaColuna(int a[L][C])
{
    int soma1=0, i, j;
    for(i=0; i<L; i++);
    {
        for(j=0; j<C; j++)
        {
            if(j==3)
            {
                soma1=soma1+a[i][j];
            }
        }
    }
    return soma1;
}
int main()
{
    int soma, soma1, a[L][C], i, j;
    for(i=0; i<L; i++)
    {
        for(j=0; j< C; j++)
        {
            printf("Matriz A[%i][%i]: ", i, j);
            scanf("%i", & a[i][j]);
            soma=SomaLinha(a);
            soma1=SomaColuna(a);
        }
    }
    printf("Soma da linha 5: %i\n", soma);
    printf("Soma da Coluna 3: %i", soma1);
    return 0;
}
