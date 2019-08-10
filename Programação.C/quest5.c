/*
Faça um programa em Linguagem C que leia do teclado uma sequência de caracteres. A sequência se encerra com um ‘*’.
O caractere ‘*’ não faz parte da sequência, serve apenas para sinalizar o seu final. Cada caractere deve ser lido com apenas um comando scanf.
Por exemplo, scanf(“%s”, &x);

O programa deve escrever na tela os seguintes números inteiros:
a) quantidade de caracteres da sequência de entrada (sem contar o caractere ‘*’);
b) número de ocorrências da letra ‘a’ na sequência.

Todos os valores de saída devem ser colocados em uma mesma linha, sem formatação, mas deixando ao menos um espaço em branco entre eles. Por exemplo:
printf(“%s, %s”, a, b);
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int cont = 0,contA =0;
    char caractere;

int main(){
    setlocale(LC_ALL,"portuguese");

    do{
        printf("Digite um caractere: ");
        scanf("%s",&caractere);

        if(caractere != '*'){
            cont++;
        }
            if(caractere == 'a'){
                contA++;
            }

    }while(caractere != '*');

    printf("Quantidade de caracteres: %i\nQuantidade de a digitados: %i",cont,contA);


return 0;
}
