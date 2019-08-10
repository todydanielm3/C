/*
Fa�a um programa em Linguagem C que leia do teclado uma sequ�ncia de caracteres. A sequ�ncia se encerra com um �*�.
O caractere �*� n�o faz parte da sequ�ncia, serve apenas para sinalizar o seu final. Cada caractere deve ser lido com apenas um comando scanf.
Por exemplo, scanf(�%s�, &x);

O programa deve escrever na tela os seguintes n�meros inteiros:
a) quantidade de caracteres da sequ�ncia de entrada (sem contar o caractere �*�);
b) n�mero de ocorr�ncias da letra �a� na sequ�ncia.

Todos os valores de sa�da devem ser colocados em uma mesma linha, sem formata��o, mas deixando ao menos um espa�o em branco entre eles. Por exemplo:
printf(�%s, %s�, a, b);
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
