#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int matriz[3][3];
    int vetorsoma[3];
    int valor;
    int soma=0;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout<<"digite um valor";
            cin>>valor;
            matriz[i][j]= valor;
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }

    cout<<"\n";

    for (i=0; i<3; i++)
    {
        soma = 0;
        for (j=0; j<3; j++)
        {
            soma = soma + matriz[i][j];
            //cout<<matriz[i][j];
            //cout<<soma;
        }
        //vetorsoma
        cout<<soma;
        cout<<"\n";
    }










    return 0;

}
