//4. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	int idade, i, flag=0, cont=0;
	char sexo[20];
	char sexoaux[ ]={"feminino"};
	char nome[50];

	//ENTRADA DE DADOS
	cout<<"\nDigite a idade\n";
	cin>>idade;
	cin.ignore(1);
	cout<<"\nDigite o sexo\n";
	cin.getline(sexo,20);
	cout<<"\nDigite o nome\n";
	cin.getline(nome,50);
	//ENTRADA DE DADOS

	if(strcmp(sexo,sexoaux)==0) //verifica se as strings são exatamente iguais
		flag=1;

	if (flag==1 && idade<25) //se atender as duas condicoes
		cout<<"\n"<<nome<<"\n"<<"ACEITA";
	else
		cout<<"\nNAO ACEITA\n";
}
