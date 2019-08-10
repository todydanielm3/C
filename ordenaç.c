#include<stdlib.h>
#include<stdio.h>
int main()
{
int i, j, aux, numero[10];

     for( i=0; i<5; i++ ){
          printf("\nDigite um valor: ");
          scanf("%d",&numero[i]);
          }

          for( i=0; i<5; i++ ){
                  for( j=i+1; j<10; j++ ){
                       if( numero[i] > numero[j] ){
                           aux = numero[i];
                           numero[i] = numero[j];
                           numero[j] = aux;
                       }
                  }

           }
           printf("\n Ordenado com sucesso!");
           for(i=0;i<=4;i++)
           {
                            printf("\n%d",numero[i]);
           }

system("pause>null");
}

