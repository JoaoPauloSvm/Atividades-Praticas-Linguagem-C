#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int calculo(int a, int b)
{
    a = sqrt(a);
    b = a+7;
    return b;
}

int main()
{
    int a=4, b=5;
    calculo(&a, &b);
    printf("%i", calculo(a, b));
    return 0;
}
