/*Faça um programa em Linguagem C que leia do teclado uma sequência de números inteiros positivos.
A sequência se encerra com um inteiro negativo. O inteiro negativo não faz parte da sequência,
serve apenas para sinalizar o seu final. Cada número inteiro deve ser lido com apenas um comando scanf.
Por exemplo, scanf(“%d”, &x).

O programa deve escrever na tela os seguintes números inteiros:
a) quantidade de números da sequência de entrada (sem contar o zero);
b) número de elementos pares na sequência.


Todos os valores de saída devem ser colocados em uma mesma linha, deixando ao menos um espaço em branco entre eles. Por exemplo:
printf(“%d %d”, a, b);
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
