#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int c, a = 5, b = 8, prox, i;

    for (i=0; i<5; i++)
    {
        printf("%5d",a);
        prox = a+b;
        a=b;
        b=prox;
    }
    return 0;
}
