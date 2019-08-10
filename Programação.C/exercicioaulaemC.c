#include <stdio.h>
int main (){

    int tipo;

printf("1- Almentos\n");
printf("2- Produtos de Limpeza\n");
printf("3- Eletrodomesticos\n");
printf("4- Decoraçoes\n");
    printf("Digite um numero:\n");
        scanf("%i",&tipo);

        if(tipo == 1)
            printf("Voce esta com fome");

                else if (tipo == 2)
                    printf("Voce sujou!");

                        else if (tipo == 3)
                            printf("Voce esta ricoo");

                            else if (tipo == 4)
                                printf("Voce quer decorar");
                    else printf("valor invalido");







return 0;
}
