#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float v[10], maior, menor;
    menor = v[10];
    maior = v[0];
    for(i=0; i<10; i++)
    {
        printf("%i) DIGITE UM NUMERO: ", i);
        scanf("%f",& v[i]);
    }
    for(i=0; i<10; i++)
    {
        if(maior < v[i])
        {
            maior = v[i];
        }
        for(i=0; i<10; i++)
        {
            if(menor > v[i])
            {
                menor = v[i];
            }
        }
    }
    printf("\nMenor valor digitado: %.f\tMaior valor digitado: %.f", menor, maior);
    return 0;
}
/*Faça um programa que leia um vetor com 10 valores reais. A
seguir, encontre e imprima o menor e o maior elemento do vetor.*/
