/*
Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faca a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos
dos números são pares e quantos são ímpares.
*/
#include <iostream>
using namespace std;

int main()
{
  int n, i, aux, par=0, impar=0;
  int *vetor;

  cout<<"Digite a quatidade de espaco no vetor";
  cin>>n;
  vetor = new int[n]; //alocacao do vetor dinamico a partir do tamanho definido anteriormente
  
  for(i=0; i<n; i++)
  {
    cout<<"Digite um valor para o indice "<<i;
    cin>>aux; 
    vetor[i]=aux; //insersao do valor inserido anteriormente em cada indice do vetor
    if(vetor[i]%2==0) // se for par inicia a contagem de par
      par++;
    else //se não for par inicia a contagem de impar
      impar++;
  }
  for(i=0; i<n; i++)
  {
    cout<<vetor[i]<<" "; //realiza a impressao indice por indice do vertor
  }
  cout<<"\n"<<"par: "<<par<<" impar: "<<impar; //imprime a quantidade de pares e impares do vetor

  delete []vetor; //liberando a memoria do vertor
}
