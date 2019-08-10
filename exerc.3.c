#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *p;
    char c,str[30];
    int i =0;



    printf("Entre com o nome do arquivo:\n");
    gets(str);

    if(!(p=fopen(str,"r"))){
        printf("Impossivel ler arquivo\n");
        exit(1);
    }

    c = getc(p);
    while(!feof(p)){
        printf("Caracter %c,%d = %d\n",c,c,i);
        i++;
        c = getc(p);
    }
    fclose(p);
    printf("O numero de caracteres do arquivo %s: %d\n",str,i);


    int vetor[i];

    printf("\n\n\n\t%d",vetor[i]);

system("\npause");

    int opicao;

    system("cls");
    printf("\n MENU DE ORDENACAO:");
    printf("\n 1 - Do maior para o menor");
    printf("\n 2 - Do menor para o maior ");
    printf("\n 3 - Sair\n");
    scanf("%i",&opicao);

    int k,j,aux;

    if(opicao == 2){

            for( i=0; k<5; k++ ){
                  for( j=k+1; j<10; j++ ){
                       if( vetor[k] > vetor[j] ){
                           aux = vetor[k];
                           vetor[k] = vetor[j];
                           vetor[j] = aux;
                       }
                  }
           }
           printf("\n Ordenado com sucesso!");
           for(k=0;k<=4;k++)
           {
                            printf("\n%d",vetor[k]);
           }


    }




 return 0;
}

void ord_maior();
void ord_menor();

void ord_maior(){





}


