//7.Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na cadeia B.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *frase;
	char *busca;
	char *acho;
	int i, cont = 0;

	frase = new char[100];
	busca = new char[100];

	cin.getline(frase,100);
	cin.getline(busca,100);

	acho = strstr(frase, busca); // inicia-se a busca antes do loop o que permite a continuação do loop por acho já possuir valor

	while (acho!= NULL)
	{
        acho = strstr(acho + strlen(busca), busca); //pega-se ponteiro q guarda o inicio da nova string e soma essa a posição ao tamanho do que se buscava, para recomeçar a pesquisa. EX.: string: fernando ; busca: na ;  nova string acho: nando; novastring para nova busca: ndo .
		cont++;										//contador
	}
	cout<<cont<<"\n";
	delete []frase;
	delete []busca;
	return 0;
}
