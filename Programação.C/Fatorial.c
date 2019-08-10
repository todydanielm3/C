#include <stdio.h>

int main(){

    int fatorial = 10;
    int resposta = 1;

    for( ; fatorial >= 1;--fatorial)
    {resposta *= fatorial;}
    printf("Numero fatorial = %i\n",resposta);



return 0;
}
