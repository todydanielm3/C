#include <stdio.h>
int main (){

float A,B,C,MEDIA;

printf("Digite a primeira nota de 0 a 10:\n");
    scanf("%f",&A);

printf("Digite a segunda nota de 0 a 10:\n");
    scanf("%f",&B);

printf("Digite a terceira nota de 0 a 10:\n");
    scanf("%f",&C);

        MEDIA = ((A*2) + (B*3) + (C*5))/10;

printf("MEDIA = %f",MEDIA);



return 0;
}
