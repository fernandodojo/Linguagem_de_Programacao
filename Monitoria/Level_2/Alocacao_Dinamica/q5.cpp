/*
Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em
um vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de
memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior
ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10
primeiros elementos do vetor valores aleatórios (usando a função rand)
entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.
*/
#include <iostream>
using namespace std;

int main()
{
  int n, i;
  double *vetor;
  srand(time(NULL));
  
  cin>>n;
  while(n<10)
  {
    cout<<"\nDigite uma valor n maior ou igual a 10\n";
    cin>>n;//recebe o tamanho do vetor, euquanto o valor nao for superior a 10, continua pedindo valor
  }

  vetor = new double[n];
  
  cout<<"\nVetor com "<<n<<" posições\n";
  for(i=0; i<n;i++)
  {
    vetor[i]=rand()%100;//insere valor entre 0 e 100 aleatorio
    cout<<vetor[i]<<" ";//imprime todas as posicoes do vetor
  }
  cout<<"\n\n";
  delete []vetor; //libera a memoria do vetor
}
