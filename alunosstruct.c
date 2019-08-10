#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[35];
	float media;
}registro;

registro * alocar(int n);
void preenche(registro * vetor, int tamanho);
void ordenar (registro * vetor, int tamanho);
void mostrar( registro * vetor, int tamanho);

int main()
{
	int n;
	registro * vetor;
	
	printf("\nDigite a quantidade de alunos");
	scanf("%d",&n);
	vetor = alocar(n);
	preenche(vetor,n);
	ordenar(vetor,n);
	mostrar(vetor,n);
	
}

registro * alocar(int n)
{
	registro * aux;
	aux = (registro*)malloc(sizeof(registro)*n);
	aux->media = 0;
	strcpy(aux->nome," ");
	return aux;
}

void preenche(registro * vetor, int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		printf("\nDigite o nome do %d aluno: ",i+1);
		fflush(stdin);
		gets(vetor[i].nome);
		printf("\nDigite a media do %d aluno: ",i+1);
		scanf("%f",&vetor[i].media);		
	}
}

void ordenar (registro * vetor, int tamanho)
{
	int i,j;
	registro * aux;
	aux = alocar(1);
	
	for(i=0;i<tamanho-1;i++)
	{
		for(j=i+1;j<tamanho;j++)
		{
			if (vetor[i].media>vetor[j].media)
			{
				*aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = *aux;
			}
		}
	}
}

void mostrar( registro * vetor, int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		printf("\n Nome: %s    Media : %f",vetor[i].nome,vetor[i].media);
	}
}

