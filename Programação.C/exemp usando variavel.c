#include <stdio.h>
int main(){

int numerodaminhacasa = 29;
int minhaIdade = 19;
int paiIdade = 53;
int maeIdade =50;
int somatotal = numerodaminhacasa + minhaIdade + paiIdade + maeIdade;
int nirmao;
int Total;
    printf ("O numero da casa do Daniel Moraes e %i.\n E quando ele tiver %i anos estara terminando seu pos doutorado.\n O Daniel tem %i anos.\n O pai do Daniel tem %i anos.\n A mae do Daniel tem %i anos.\n A soma dos numeros e %i \n",
            numerodaminhacasa,numerodaminhacasa,minhaIdade,paiIdade,maeIdade,somatotal);

            printf("quantos irmãos vc tem?:");
            scanf("%i",&nirmao);
Total = somatotal + nirmao;
 printf ("A soma de todos os numeros que coletei e %i",Total);

return 0;
}
