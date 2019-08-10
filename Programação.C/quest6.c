/*
Faça um programa em Linguagem C que leia do teclado 5 conjuntos de 2 números inteiros.
Cada dupla de números inteiros deve ser lida através de um comando scanf.
Por exemplo, scanf("%d %d", &altura, &peso);
O primeiro valor representa a altura da pessoa em cm; o segundo valor representa seu peso em kg.

O programa deve escrever na tela três valores reais:
•	O primeiro significa a média do peso das pessoas que têm 170 cm de altura ou menos;
•	O segundo significa a média do peso das pessoas que têm mais de 170 cm de altura;
•	O terceiro significa a média do peso das 5 pessoas.

Os três valores devem ser escritos com apenas um comando scanf. Os valores não precisam ser formatados, mas deve-se deixar ao menos um espaço em branco entre eles. Por exemplo:

printf("%0.2f, %0.2f, %0.2f", a, b, c);

Se algum dos grupos não estiver representado na sequência, sua média deve ser considerada zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int altura,peso,cont,cont17=0,contMais17=0;
    float media,media17 = 0,mediaMais17 = 0;

    for (cont = 0;cont<5;cont++){

        printf("Digite sua altura em cm e seu peso: ");
        scanf("%i  %i",&altura,&peso);

        if (altura >170){

            mediaMais17 = mediaMais17 + peso;
            contMais17++;
        }
            else{
                media17 = media17 + peso;
                cont17++;
            }

            media = media + peso;

    }

    media17 = media17/cont17;
    mediaMais17 = mediaMais17/contMais17;
    media = media/5;

    printf("Média do peso das pessoas que têm 170 cm de altura ou menos: %0.2f\n",media17);
    printf("Média do peso das pessoas que têm mais de 170 cm de altura: %0.2f\n",mediaMais17);
    printf("Média média do peso das 5 pessoas: %0.2f\n",media);



return 0;
}
