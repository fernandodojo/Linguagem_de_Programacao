/*
Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6
números do seu bilhete. O programa então compara quantos números o jogador acertou.
Em seguida, ele aloca espaços para um vetor de tamanho igual a quantidade de números
corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os
números sorteados e os seus números corretos.
*/
#include <iostream>
using namespace std;

int main()
{
  int x,cont=0, i, j;
  int loteria[6];
  int bilhete[6];
  int flagbilhete[6];
  int flagacertos[6];
  int *acertos;

  srand( time (NULL) ); //EVITA REPETIÇÃO DE NUMEROS SORTEADOS

  //NUMEROS SORTEADOS PELA LOTERIA
  //cout<<"Digite 6 numeros soteadors pela loteria\n";
  for (i=0; i<6; i++)
  {
    //cin>>y;
    //loteria[i]=y;
    loteria[i]=rand()%10; //numeros sorteados aleatoriamente
  }

  //INSERINDO VALORES APOSTADOS
  cout<<"Digite 6 numeros apostados no bilhete\n";
  for (i=0; i<6; i++)
  {
    cin>>x;
    bilhete[i]=x;
  }

  //INSERINDO VALOR NEGATIVO NOS VETORES FLAG
  for (i=0; i<6; i++)
  {
    flagbilhete[i]=-1;
    flagacertos[i]=-1;
  }

  //CONTANDO QUANTOS ACERTOS OCORRERAM
  for(i=0;i<6;i++)
  {
    for(j=0; j<6; j++)
    {
      if(loteria[i]==bilhete[j] && flagbilhete[j]==-1) //verifica a existencia do memso numero no bilhete e na loteria, e caso o vetor flag na mesma posicao seja -1.
      {
        cont++; //ocorre a contagem
        flagbilhete[j]=bilhete[j]; // e a valor desta posicao no vetor flag recebe um valor diferente de -1, para que esta posicao não seja contada novamente.
        break;
      }
    }
  }

  acertos = new int[cont];//CRIAÇÃO DE VETOR DE ACERTOS DINAMICO A PARTIR DO NUMERO DE ACERTOS


  for(i=0;i<cont;i++)
  {
    for(j=0; j<6; j++)
    {
      if(flagbilhete[j]>-1 && flagacertos[j]==-1) //se vetor flag tiver um valor maior q -1 que recebeu anteriomente quando ocorria do mesmo numero estar no bilhete e na loteria, e o vetor flag acertor tiver com -1(nao utilizado)
      {
        acertos[i] = flagbilhete[j]; // o vetor dinamico acerto recebe finalmente o numero que foi acertado.
        flagacertos[j] = 0; // em seguida o vetor flag recebe um valor qualquer para que na proxima comparacao do loop se o vetor flag estiver com valor diferente de -1, o vetor acerto nao recebera este valor e passara a testar o proximo numero.
        break;
      }
    }
  }


  //IMPRESSAO
  cout<<"\nLoteria\n";
  for (i=0; i<6; i++)
  {
    cout<<loteria[i]<<" ";
  }
  
  cout<<"\n\nBilhete\n";
  for (i=0; i<6; i++)
  {
    cout<<bilhete[i]<<" ";
  }


  /*cout<<"\n\nflagbilhete\n";
  for (i=0; i<6; i++)
  {
    cout<<flagbilhete[i]<<" ";
  }

  cout<<"\n\nflagacertos\n";
  for (i=0; i<6; i++)
  {
    cout<<flagacertos[i]<<" ";
  }
  */

  cout<<"\n\nvetor de numeros corretos\n";
  for (i=0; i<cont; i++)
  {
    cout<<acertos[i]<<" ";
  }
  cout<<"\n\ntotal de acertos: "<<cont<<"\n";

  //IMPRESSAO
}
