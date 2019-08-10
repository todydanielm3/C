/*Fa�a um programa em Linguagem C que leia do teclado uma sequ�ncia de n�meros inteiros positivos.
A sequ�ncia se encerra com um inteiro negativo. O inteiro negativo n�o faz parte da sequ�ncia,
serve apenas para sinalizar o seu final. Cada n�mero inteiro deve ser lido com apenas um comando scanf.
Por exemplo, scanf(�%d�, &x).

O programa deve escrever na tela os seguintes n�meros inteiros:
a) quantidade de n�meros da sequ�ncia de entrada (sem contar o zero);
b) n�mero de elementos pares na sequ�ncia.


Todos os valores de sa�da devem ser colocados em uma mesma linha, deixando ao menos um espa�o em branco entre eles. Por exemplo:
printf(�%d %d�, a, b);
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int cont = 0,num,pares = 0;

    do{
        printf("Digite um  numero: ");
        scanf("%i",&num);

        if (num >0){
            cont = cont +1;

        }
            if (num%2==0){
                pares++;
        }


    }while(num >= 0);

    printf("Quantidade = %i\nQuantidade de numeros pares: %i\n",cont,pares);


return 0;
}
