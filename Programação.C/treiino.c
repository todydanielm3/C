#include <stdio.h>
/*Propram para realizar a integra��o definitiva de uma dada fun��o entre
� dois limites de fronteira de entrada pelo usu�rio. Sinta-se livre para usar e modific�-lo, mas
� Por favor, n�o remova este coment�rio.
� fonte: C de Engenharia, http://c4engineering.hypermart.net*/

 #define N 1000

void main(void) {
 float i, a, b, sum = 0;
 printf(
   "\nIntegracao com doi limites.");
 printf("\n\nEnter the first boundary limit:");
 scanf("%f", &a);
 printf("\nEnter the second boundary limit:");
 scanf("%f", &b);
 if (a > b) {
  i = a;
  a = b;
  b = i;
 }

 for (i = a; i < b; i += (b - a) / N) {
  /*Define your function below, and include the suitable header files*/

  y = x * x + 2 * x - 4;
  sum += y * (b - a) / N;
 }

 printf("\n\nValue of integration is:%.3f", sum);
 getch();
 return;
}
