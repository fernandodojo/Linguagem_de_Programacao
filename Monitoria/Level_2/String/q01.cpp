//1. Crie um programa que calcula o comprimento de uma string (não use a função strlen).
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i, cont=0;
	char nome[100];//declaracao de string

	cout<<"\nDigite um frase\n";
	cin.getline(nome, 100);//recebimento de string

	//cout<<strlen(nome);

	i = 0;
	while (nome[i]!='\0') //enquanto n encontrar o caractere delimitador
	{
		cont++;
		i++;
	}

   cout<<"\n"<<cont<<"\n";
}
