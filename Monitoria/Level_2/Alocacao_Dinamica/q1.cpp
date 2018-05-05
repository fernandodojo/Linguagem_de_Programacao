/*Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros.
(b) Peca para o usuário digitar os 5 números no espaço alocado.
(c) Mostre na tela os 5 números.
(d) Libere a memória alocada.
*/
#include <iostream>
using namespace std;

int main()
{
	int *vetor;
	int i, n;
	vetor = new int[5];
	cout<<"Digite 5 valores para insercao no vetor\n";
	for (i=0; i<5; i++)
	{
		cin>>n;
		vetor[i]= n;
	}
	for (i=0; i<5; i++)
	{
		cout<<vetor[i]<<" ";
	}
	cout<<"\n";
	delete []vetor;
}
