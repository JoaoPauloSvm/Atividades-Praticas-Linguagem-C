#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20], i, s, a, r;
    float m;
    for (i=0; i<20; i++)
    {
        printf("Digite a nota do Aluno %i: ", i);
        scanf("%i",& n[i]);
        s=s+n[i];
    }
    m=s/20;
    for(i=0; i<20; i++)
    {
        if (n[i]>=60)
        {
            a++;
            r=20-a;
            printf("ALUNO %i FOI APROVADO\n", i);
        }
    }
    printf("\nMedia da turma: %.2f\n", m);
    printf("Quantidade de alunos aprovados: %i\nQuantidade de alunos reprovados: %i\n", a, r);
    return 0;
}
/*Dada uma tabela com as notas de uma turma de 20 alunos, faça um
programa que imprima:
a) A média da turma.
b) a quantidade de alunos aprovados (>=60) e reprovados.
c) o número de cada aluno aprovado.*/
