#include <stdio.h>
#include <stdlib.h>
#define L 10

int Valor(int a[L])
{
    int i, r;
    for(i=0; i<L; i++)
    {
        printf("Valor %i: ", i+1);
        scanf("%i", & a[i]);
    }
    return a[i];
}
int Se(int a[L])
{
    int r, i ;
    if(r==a[i])
    {
        printf("Pertence");
    }
    else
    {
        printf("Nao pertence");
    }
    return r;
}
int main()
{
    int r, a[L];
    Valor(a);
    printf("Digite um numero inteiro: ");
    scanf("%i", & r);
    Se(a);
    return 0;
}
