/*
Faça um programa para armazenar em memória um vetor de dados contendo 100
valores do tipo int.
(a) Faça um loop e verifique se o vetor contém realmente os 100 valores
inicializados.
com zero (conte os 100 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.
*/
#include <iostream>
using namespace std;

int main()
{
	int i, cont=0;
	int *vetor;
	vetor = new int[100];

	for(i=0;i<100;i++)
	{
		vetor[i]=0;
		if(vetor[i]==0)
		{
			cont++;
		}
	}
	cout<<"\nRealmente existem "<<cont<<" posicoes iguais a 0\n";

	for(i=0;i<100;i++)
	{
		vetor[i]=i;
	}
	
	cout<<"\n\n10 PRIMEIROS VALORES\n";
	for(i=0;i<10;i++)
	{
		cout<<"0"<<vetor[i]<<" ";
	}
	
	cout<<"\n\n10 ULTIMOS VALORES\n";
	for(i=89;i<100;i++)
	{
		cout<<vetor[i]<<" ";
	}
	cout<<"\n\n";
}
