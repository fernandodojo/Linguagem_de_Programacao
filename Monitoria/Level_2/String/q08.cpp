//8. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para 3 variáveis inteiras. Antes disso, verifique se as barras est ́ ao no lugar certo, e se DD, MM e AAAA são numéricos.
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
	char *data;
	char *achado;
	char **vetor;
	char *diapont, *mespont, *anopont;
	int dia, mes, ano;
	int i, cont=0;

	data = new char[20];
	cin.getline(data, 20);

	for (i=0; i<strlen(data); i++)
	{
		if (isdigit(data[i]))
			cont++;
	}

	vetor = new char*[cont]; //ALOCAÇÃO DINAMICA DE UM VETOR DE PONTEIROS

	//for (i=0; i<cont; i++)
		//vetor[i] = new char[100]; //ALOCAÇÃO DINAMICA DE STRINGS

	achado = strtok(data,"/");
	i=0;
	while(achado!=NULL)
	{
		vetor[i]= achado;
		//cout<<achado<<"\n";
		achado = strtok(NULL, "/");
		i++;
	}

	//for(i=0; i<cont; i++)
	//	cout<<vetor[i]<<" ";

	diapont = vetor[0];
	mespont = vetor[1];
	anopont = vetor[2];

	dia	= atoi(diapont);
	mes	= atoi(mespont);
	ano	= atoi(anopont);
	cout<<"dia "<<dia<<"\n";
	cout<<"mes "<<mes<<"\n";
	cout<<"ano "<<ano<<"\n";

	return 0;

}
