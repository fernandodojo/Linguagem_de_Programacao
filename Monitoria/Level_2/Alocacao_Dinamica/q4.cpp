/*
Faça um programa que leia uma quantidade qualquer de números armazenando-os na
memória e pare a leitura quando o usuário entrar um número negativo. Em seguida,
imprima o vetor lido.
*/
#include <iostream>
using namespace std;

int main()
{
  int i=0, n, cont=0;
  int vetor[10];
  int *leitura;
  
  cout<<"Digite no maximo 10 valores positivos (programa encerra ao digitar negativo)\n";
  for(i=0; i<10;i++)
  {
    cin>>n;
    if (n>=0)
    {
      vetor[i]=n;
      cont++;
    }
    else
      break;
  }

  leitura = new int[cont];

  for(i=0; i<cont;i++)
  {
    if (vetor[i]>=0)
      leitura[i]=vetor[i];
    else
      break;
  }

  cout<<"Vetor de numeros positivos\n";
  for(i=0; i<cont;i++)
  {
    cout<<leitura[i]<<" ";
  }
  cout<<"\n";

  delete []leitura;
}
