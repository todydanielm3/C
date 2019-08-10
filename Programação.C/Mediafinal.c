#include <stdio.h>
int main(){

    float A1,A2,MediaFinal,Edad,MT1,MT2,P1,P2;

 printf("Media dos testes1 e media dos testes 2: \n");
 scanf("%f %f",&MT1,&MT2);

 printf("P1 = \n");
 scanf("%f",&P1);

 printf("P2 = \n");
 scanf("%f",&P2);

 printf("Edad = \n");
 scanf("%f",&Edad);


 A1=0.8*P1+0.2*MT1;
 A2=0.8*P2+0.2*MT2;
 MediaFinal = (0.4*A1)+(0.6*(A2*0.95 + Edad*0.05));

 printf("Media final = %f\n",MediaFinal);


return 0;
}



