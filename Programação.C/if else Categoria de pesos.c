#include <stdio.h>

int main(){

    int peso;

    printf("Favor informe seu peso: ");
    scanf("%i",&peso);

    if (peso <=57.50) printf("Sua categoria e GALO.\n");

    else if (peso >57 && peso <=64)
        printf("Sua categoria e PLUMA\n");

    else if (peso>64 && peso <=70)
        printf("Sua categoria e PENA\n");

    else if (peso>70 && peso <=76)
        printf("Sua categoria e LEVE\n");

    else if (peso>76 && peso <=82.30)
        printf("Sua categoria e MEDIO\n");

    else if (peso>82 && peso <=88.30)
        printf("Sua categoria e MEIO-PESADO\n");

    else if (peso>88.30 && peso <=94.30)
        printf("Sua categoria e PESADO\n");

    else if (peso>94.30 && peso <=100.50)
        printf("Sua categoria e SUPER-PESADO\n");

     else printf("PESADISSIMO\n");





return 0;
}
