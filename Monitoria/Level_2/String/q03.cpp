//3. Digite um nome, calcule e retorne quantas letras tem esse nome.
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int i, cont=0;
	char frase[100];
	cin.getline(frase,100);

	for(i=0; i<(strlen(frase)); i++)
	{
		if((frase[i]>96 and frase[i]<123) || (frase[i]>64 and frase[i]<91))//posicao das letras na tabela ascii
			cont++;
	}
	cout<<"\nO nome possui "<<cont<<" letras\n\n";
}
