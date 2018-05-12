//5. Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int vetoridade[10];
	char vetornome[10][20];
	int i, cont=0, idade=0, menor,maior, indicemaior=0, indicemenor=0;


	i=0;
	while (idade>=0 and i<10)
	{
		cout<<"Digite a idade:  ";
		cin>>idade;							//recebimento da idade
		cout<<"Digite primeiro nome:  ";
		vetoridade[i]=idade;				//adiciona valor recebido na variavel idade
		cin.ignore(1);						//ignora a digitacao da tecla enter entre recebimentos
		cin.getline(vetornome[i],20); 		//recebimento
		cont=i;								//flag para guardar a ultima posicao ate a ocorrencia do numero negativo, tem que ser colocada antes do incremento, caso contrario mesmo que o loop seja encerrando a flag sera incrementada
		i++;								//incremento do loop
	}

	menor = vetoridade[0]; 					//define-se a primeira posicao do vetor idade como sendo o maior e menor para para questao de teste
	maior = vetoridade[0];
	for(i=0; i<cont;i++) 					//limite o percorrimento do vetor ate uma posicao antes do numero negativo
	{
		if(vetoridade[i]<menor)				//se o numero for positivo e for menor q o inicial, este sera o novo menor
		{
			menor=vetoridade[i];
			indicemenor = i;				//guarda-se a ultima posicao valida do menor valor
		}
		if(vetoridade[i]>maior)				//se o numero for positivo e for menor q o inicial, este sera o novo menor
		{
			maior=vetoridade[i];
			indicemaior = i;				//guarda-se a ultima posicao valida do maior valor
		}
	}

	//IMPRESSAO
	cout<<"\tMenor";
	cout<<"\nIdade: "<<vetoridade[indicemenor]<<"; ";
	cout<<"Nome: "<<vetornome[indicemenor]<<".\n\n";

	cout<<"\tMaior";
	cout<<"\nIdade: "<<vetoridade[indicemaior]<<"; ";
	cout<<"Nome: "<<vetornome[indicemaior]<<".\n\n";
	//IMPRESSAO


	//IMPRESSAO DE MATRIZ STRING
	/*for(i=0; i<cont;i++)
	{
		cout<<"\nIdade: "<<vetoridade[i]<<"; ";
		cout<<"Nome: "<<vetornome[i]<<".\n\n";
	}*/
	//IMPRESSAO DE MATRIZ STRING
}
