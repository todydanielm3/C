#include <stdio.h>

int main(){
int a1,q,an,n;

printf("Digite o valores de a1 e q:\n");
scanf("%i %i",&a1,&q);

printf("Qual termo vc quer encontrar:");
scanf("%i",&n);

an = a1 *q^(n-1);

printf("an = %i",an);





return 0;
}
