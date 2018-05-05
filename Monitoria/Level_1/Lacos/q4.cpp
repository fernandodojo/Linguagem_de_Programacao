#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int *vetor;
    int n, i, contador = 1;
    cin>>n;
    vetor = new int[n];

    srand( time (NULL) );

    for (i=0; i<n; i++)
    {
        vetor[i]=rand()%5;
        cout<<vetor[i]<<" ";
    }

    int maior = vetor[0];

    for (i=0; i<n; i++)
    {
        if (vetor[i]> maior)
        {
            maior = vetor[i];
            contador = 1;
        }
        if (vetor[i+1]==maior)
            contador++;
    }
    cout<<"\n"<<maior;
    cout<<"\n"<<contador;

}
