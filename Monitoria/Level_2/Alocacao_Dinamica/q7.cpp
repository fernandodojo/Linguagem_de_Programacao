/*
Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faç̧ a a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor
lido.
*/
#include <iostream>
using namespace std;

int main()
{
  int n, i, aux;
  int *vetor;

  cout<<"Digite a quatidade de espaco no vetor";
  cin>>n;
  vetor = new int[n];//alocacao do vetor a partir do tamanho definido anteriormente
  
  for(i=0; i<n; i++) //laco para insercao do valor em cada posicao do vetor dinamico
  {
    cout<<"Digite um valor para o indice "<<i;
    cin>>aux;
    vetor[i]=aux;
  }
  
  //IMPRESSAO
  for(i=0; i<n; i++)
  {
    cout<<vetor[i]<<" ";
  }
  //IMPRESSAO
  
  delete []vetor; //DESALOCANDO A MEMORIA
}
