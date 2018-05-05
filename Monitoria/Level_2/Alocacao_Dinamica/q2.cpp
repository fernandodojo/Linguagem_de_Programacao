/*
Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos desse número que existem
no vetor.
*/
#include <iostream>
using namespace std;

int main()
{
  int *vetor;
  int i, n, x, cont=0;
  cout<<"Digite o tamanho do vetor\n";
  cin>>n;
  vetor = new int[n];
  cout<<"Digite o valor de teste para multiplos\n";
  cin>>x;

  srand( time (NULL) );
  
  cout<<"\nVetor\n";
  for (i=0; i<n; i++)
  {
    vetor[i]= rand()%10 ;// vetor aleatorio
    cout<<vetor[i]<<" ";
  }
  
  
  cout<<"\nMultiplos\n";  
  
  for (i=0; i<n; i++)
  {
    if(vetor[i]%x==0) // se o valor de cada indice do vetor tiver como resto 0, entao eh multiplos
    {
      cont++; //contador para cada ocorrencia de multiplo
      cout<<vetor[i]<<" ";
    }
  }
  
  cout<<"\n";

  cout<<"O vetor tem um total de "<<cont<<" multiplos";
  delete []vetor;
}
