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

	acho = strstr(frase, busca);
	cout<<acho<<"\n";
	//if (acho!=NULL)
    //  cont++;

	while (acho!= NULL)
	{
        acho = strstr(acho + strlen(busca), busca);
		//cout<<acho<<"\n";
		cont++;
	}
	cout<<cont<<"\n";
	return 0;
}
