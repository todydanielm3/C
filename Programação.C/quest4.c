/*Faça um programa em Linguagem C que leia do teclado 5 conjuntos de 2 números inteiros.
Cada dupla de números inteiros deve ser lida através de um comando scanf. Por exemplo, scanf(“%d %d”, &idade, &peso);
O primeiro valor representa a idade da pessoa; o segundo valor representa seu peso.

O programa deve escrever na tela três valores reais:
•	O primeiro significa a média do peso das pessoas que têm 30 anos ou menos;
•	O segundo significa a média do peso das pessoas que têm mais de 30 anos;
•	O terceiro significa a média do peso das 5 pessoas.

Os três valores devem ser escritos com apenas um comando scanf.
Os valores não precisam ser formatados, mas deve-se deixar ao menos um espaço em branco entre eles. Por exemplo:

printf(“%0.2f, %0.2f, %0.2f”, a, b, c);

Se algum dos grupos não estiver representado na sequência, sua média deve ser considerada zero.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

    int idade,peso;
    int cont30 = 0,contMaior30 = 0,cont;
    float media30 = 0,mediaMaior30 = 0,media = 0;

    for(cont=0;cont<5;cont++){

        printf("Informe sua idade e seu peso: ");
        scanf("%i  %i",&idade,&peso);

        if (idade >30){
            mediaMaior30 = mediaMaior30 + peso;
            contMaior30++;
        }
            else{
                media30 = media30 + peso;
                cont30++;
            }
        media = media + peso;
    }

    mediaMaior30 = mediaMaior30/contMaior30;
    media30 = media30/cont30;
    media=media/5;

    printf("A média do peso das pessoas que têm mais de 30 anos: %0.2f\n",mediaMaior30);
    printf("A média do peso das pessoas que têm 30 anos ou menos: %0.2f\n",media30);
    printf("A média de peso das 5 pessoas: %0.2f\n",media);



return 0;
}
