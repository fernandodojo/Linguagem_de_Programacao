/*
Faça um programa que leia numeros do teclado e os armazene em um vetor alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade.
Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de
dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste
modo.
• Inicie com um vetor de tamanho 10 alocado dinamicamente;
• Após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do
vetor anterior adicionado espaco para mais 10 valores (tamanho N+10, onde N
inicia com 10);• Copie os valores já digitados da área inicial para esta área maior e libere a
memória da área inicial;
• Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor
alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser ’expandido’ de 10
em 10 valores.
Ao final, exiba o vetor lido.
*/
#include <iostream>
using namespace std;

int main()
{
  int i, n=10, x, j;
  int *vetormenor;
  int *vetormaior;
  //int *vetormenoraux;
  vetormenor = new int[n];

  for(i=0; i<n; i++)
  {
    cin>>x;
    vetormenor[i]=x; //INSERCAO DE VALORES NO vetormenor MENOR
  }

  //IMPRESSAO
  for(i=0; i<n; i++)
  {
    cout<<vetormenor[i]<<" "; //IMPRESSAO APENAS DO vetormenor MENOR
  }
  cout<<"\n";

  //vetormenoraux = vetormenor;

  do
  {
    if(vetormenor[n-1]>=0)//QUANDO VERIFICA-SE QUE O vetormenor MENOR ESTA CHEIO, OCORRE O AUMENTO E A ALOCACAO DE UM vetormenor MAIOR
    {
      n = n+10; //AUMENTO DO TAMANHO DO NOVO vetormenor
      vetormaior = new int[n]; //CRIACAO DO vetormenor QUE SERA O NOVO MAIOR
      for(i=0; i<n; i++)// O LOOP ESTA SEMPRE SE ADAPTANDO AO NOVO TAMANHO DO vetormenor
      {
        if(i<n-10)// ENQUANTO OS INDICES DO vetormenor MAIOR FOREM MENOR OU IGUAL AO TAMANHO DO vetormenor MENOR, OCORRE APENAS A COPIA DE VALORES
          vetormaior[i]=vetormenor[i];
        else // QUANDO O INDICE ULTRAPASSA O TAMANHO DO vetormenor MENOR, O USUARIO VOLTA A INSERIR VALORES NO vetormenor
        {
          cin>>x;
          vetormaior[i]=x;
        }
      }
      delete []vetormenor; //LIBERACAO DE MEMORIA
      vetormenor=vetormaior; //POSSIBILITANDO A CONTINUACAO DO LOOP COM UM NOVO vetormenor MENOR
    }

    //IMPRESSAO
    for(i=0; i<n; i++)
    {
      cout<<vetormaior[i]<<" "; // IMPRESSAO APENAS DO vetormenor MAIOR
    }
    cout<<"\n";
    //IMPRESSAO

  }while(n<30);// 30 - APENAS PARA POSSIBILITAR O TESTE
}
