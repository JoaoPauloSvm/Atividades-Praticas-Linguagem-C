#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10], i;
    for(i=0; i<9; i++)
    {
        n[i]=i;
    }
    for(i=0; i<9; i++)
    {
        n[i]=(n[i]*i)+1;
        printf("%i\t", n[i]);
    }
    return 0;
}
