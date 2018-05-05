#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
    int matriz[3][6];
    int i, j;
    int soma=0, soma2=0, contador=0;
    float media= 0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<6; j++)
        {
            matriz[i][j] = rand()%10;
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<6; j++)
        {
            if ((j+1)%2!=0)
            {
                soma = soma + matriz[i][j];
            }
            if (j+1==2 || j+1==4)
            {
                media = media + matriz[i][j];
                contador++;
            }
            if (j+1==1 || j+1==2)
            {
                soma2 = soma2 + matriz[i][j];
                matriz[i][5] = soma2;
            }
        }
        cout<<"\n";
    }

    cout<<"Soma: "<<soma<<" ";
    cout<<"Media: "<<media/contador<<" \n";

    for(i=0; i<3; i++)
    {
        for(j=0; j<6; j++)
        {
            matriz[i][5] = soma2;
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
