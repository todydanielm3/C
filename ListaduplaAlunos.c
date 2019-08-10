#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*----------------==STRUCT´S==--------------*/
typedef struct lista{
    int qtd;
    struct elemento*inicio;
    struct elemento*fim;

}lista;

typedef struct elemento{
    struct registro*reg;
    struct elemento*ant;
    struct elemento*prox;

}elemento;

typedef struct registro{
    char*nome;
    float n1,n2,media;

}registro;


/*-------------~ ~ ~ ~Declarações~ ~ ~ ~--------------*/
lista*aloca_lista();
elemento*aloca_elemento();
registro*aloca_registro();

void preenche_registro(registro*novo);
void incluir_lista(lista*l);
void mostrar(lista*l);
void mostrar_registro(registro*aux);
void ordenar_media(lista*l);
void ordenar_nome(lista*l);



/*---------------- <<INT MAIN>>>  --------------*/
int main(){

    lista*l1;
    l1=aloca_lista();

    incluir_lista(l1);
    incluir_lista(l1);
    incluir_lista(l1);

    printf("\nMostrando antes de ordenar:");
    mostrar(l1);

    ordenar_nome(l1);
    printf("\n Mostrando depois de ordenar: ");
    mostrar(l1);

return 0;
}


/*---------------- >>>Lista Aloca_Lista<<< --------------*/
lista*aloca_lista()
{
    lista*novo;
    novo = (lista*)malloc(sizeof(lista));
    novo->qtd=0;
    novo->inicio = NULL;
    novo->fim = NULL;

    return novo;
}


/*---------------- >>>Elemento Aloca_Elemento<<< --------------*/
elemento*aloca_elemento()
{
    elemento*novo;
    novo = (elemento*)malloc(sizeof(elemento));
    novo->reg = aloca_registro();
    novo->ant = NULL;
    novo->prox= NULL;

return novo;
}


/*---------------- >>>Registro Aloca_Registro<<< --------------*/
registro*aloca_registro()
{
    registro*novo;
    novo = (registro*)malloc(sizeof(registro));
    novo->nome=(char*)malloc(sizeof(char)*50);
    novo->n1=0;
    novo->n2=0;
    novo->media=0;

return novo;
}


/*---------------- Preecher Registro--------------*/

void preenche_registro(registro*novo){

    system("cls");
    printf("\nDigite o nome do aluno:");
    fflush(stdin);
    gets(novo->nome);

    printf("\nDigite a primeira nota: ");
    scanf("%f",&novo->n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f",&novo->n2);

    novo->media = (novo->n1 + novo->n2)/2.0;

    system("pause");

}

/*---------------- Incluir na Lista --------------*/

void incluir_lista(lista*l){

    elemento*novo,*aux;
    novo=aloca_elemento();
    preenche_registro(novo->reg);

    if (l->qtd==0){
        l->inicio = novo;
        l->fim    = novo;
    }
    else{
        aux = l->fim;
        novo->ant=aux;
        aux->prox = novo;
        l-> fim   = novo;
    }
    l->qtd++;
}

/*---------------- Mostrar LISTA --------------*/
void mostrar(lista*l){

    elemento*aux;
    if(l->qtd==0){
        printf("\nNao existe alunos na lista");
    }
    else{
        aux = l->inicio;
        while(aux != NULL)
        {
          mostrar_registro(aux->reg);
          aux = aux->prox;

        }
    }
}


/*---------------- Mostrar Registro --------------*/

void mostrar_registro(registro*aux){

    printf("\n Nome do aluno: %s",aux->nome);
    printf("\n Nota 1: %f",aux->n1);
    printf("\n Nota 2: %f",aux->n2);
    printf("\n Media : %f",aux->media);

}


/*---------------- Ordenar MEDIA --------------*/
void ordenar_media(lista*l){

    registro*aux;
    registro*reg_i,*reg_j;

    elemento*i,*j;

    for(i=l->inicio;i->prox !=NULL;i=i->prox){
        for(j=i->prox;j!=NULL;j=j->prox){
            reg_i= i->reg;
            reg_j= j->reg;

            if(reg_i->media > reg_j->media)
            {
                aux = i->reg;
                i->reg = j->reg;
                j->reg = aux;
            }
        }
    }

}



/*---------------- Mostrar NOME --------------*/
void ordenar_nome(lista*l){

    registro*aux;
    registro*reg_i,*reg_j;

    elemento *i,*j;

    for(i=l->inicio;i->prox!=NULL;i=i->prox){

        for(j=i->prox;j!=NULL;j=j->prox){
            reg_i = i->reg;
            reg_j = j->reg;

            if(strcmp(reg_i->nome,reg_j->nome)>0){
                aux = i->reg;
                i->reg = j->reg;
                j->reg = aux;
            }
        }
    }
}


