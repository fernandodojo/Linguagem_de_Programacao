//2. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’(maiúscula ou minúscula).
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i;
	char frase[100];
	cout<<"\nDigite uma frase\n";
	cin.getline(frase,100);

	if (frase[0]=='a' || frase[0]=='A') //verifica se a primeira posicao da string eh a letra A
	{
		cout<<"\n"<<frase<<"\n";
	}
	else
		cout<<"\nFrase n comeca com A\n";
}

