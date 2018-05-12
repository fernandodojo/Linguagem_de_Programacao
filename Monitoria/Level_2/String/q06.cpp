//6. Faça um programa que receba duas frases distintas e imprima de maneira invertida,trocando as letras A por *.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char frase1[100], frase2[100];
	char aux1, aux2;
	int tamanho1,tamanho2, i;

	cin.getline(frase1,100);
	cin.getline(frase2,100);

	tamanho1 = strlen(frase1)-1;			//subtrai-se devido a string n ter valor exatamente no indice que represeta seu tamanho
	tamanho2 = strlen(frase2)-1;

	for (i=0; i<=(tamanho1)/2;i++)			//para compensar a subtracao no item anterior, igualou-se ao valor guardado pela variavel
	{
		if (frase1[i]=='A')					//troca de valores
			frase1[i]='*';
		if (frase1[tamanho1 - i]=='A')		//troca de valores
			frase1[tamanho1 - i]='*';

		aux1=frase1[i];						//inversao de posicao utilizando uma variavel auxiliar para permitir troca, sem perda de valor
		frase1[i]=frase1[tamanho1 - i];
		frase1[tamanho1 - i] = aux1;
	}
	cout<<frase1<<"\n";						//impressao da nova string

	for (i=0; i<=(tamanho2)/2;i++)			//para compensar a subtracao no item anterior, igualou-se ao valor guardado pela variavel
	{
		if (frase2[i]=='A')					//troca de valores
			frase2[i]='*';
		if (frase2[tamanho2 - i]=='A')		//troca de valores
			frase2[tamanho2 - i]='*';

		aux2=frase2[i];						//inversao de posicao utilizando uma variavel auxiliar para permitir troca, sem perda de valor
		frase2[i]=frase2[tamanho2 - i];
		frase2[tamanho2 - i] = aux2;
	}
	cout<<frase2<<"\n"; 					//impressao da nova string
}
