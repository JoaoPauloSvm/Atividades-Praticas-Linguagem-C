#include <stdio.h>

func (int *a, int b)
{
    int temp;
    temp=*a;
    *a=b;
    b=temp;
}
void main()
{
    int a=10, b=20;
    func(&a, b);
    printf("a = %d, b = %d", a, b);
}
