#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 0, aux = 1;
    int **matriz;

    cin>>n;

    matriz = new int *[n];
    for (i=0; i<n; i++)
        matriz[i] = new int[n];


    for (i=0; i<n; i++)
    {
        for(j=0; j<i+1; j++)
        {
            matriz[i][j] = aux;
            aux++;
            if (matriz[i][j]<10)
                cout<<"0"<<matriz[i][j]<<" ";
            else
                cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    for (i=0; i<n; i++)
        delete []matriz[i];
    delete []matriz;
}
