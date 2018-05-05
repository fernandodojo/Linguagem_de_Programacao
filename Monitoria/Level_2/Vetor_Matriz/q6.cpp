#include <iostream>

using namespace std;


int main()
{

    int i, j, n;

    cin>>n;

    int vetor[n][n];

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            vetor[i][j] = 0;
        }
    }

    vetor[0][1] = 1;


    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            vetor[i+1][j+1] = vetor[i][j]  + vetor [i][j+1];
        }
    }


    for (i=0; i<n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (vetor[i][j] !=0)
                cout<<vetor[i][j]<<" ";
        }
        cout<<"\n";
    }






}
