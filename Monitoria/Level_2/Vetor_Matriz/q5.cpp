#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
    int i, temp, trocado = 0;

    int vetor[10];

    for (i=0; i<10; i++)
    {
        {
            vetor[i] = rand( )%50 + 1;
        }
    }

    for (i=0; i<10; i++)
    {
        cout<<vetor[i]<<" ";
    }



    do
    {
        trocado = 0;
        for (i=0; i<10-1; i++)
        {
            if (vetor[i]>vetor[i+1])
            {
                temp = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = temp;
                trocado = 1;
                //break;           }
            }
        }
    }
    while (trocado==1);




    cout<<"\n";




    for (i=0; i<10; i++)
    {
        cout<<vetor[i]<<" ";
    }

}
