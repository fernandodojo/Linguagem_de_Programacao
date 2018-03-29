//Se for necessario armazenar diferente tipos de dados não usar vetor; se for necessario crescer ou diminuir, tbm nã é possivel usar vetor;

#include <iostream>
using namespace std;

int main()
{
    int posi, i, j, k, l, state;
    char velha[9], simb;

    /*cout<<"Digite a posicao: ";
    cin>>posi;
    cout<<"Digite o simbolo 'x' ou 'o' ";
    cin>>simb;
    //velha[3*x+y]= n;*/

    state = 0;

    for(i=0; i<9; i++)
    {
        velha[i]='-';
    }


    do
    {
        cout<<"Digite a posicao: ";
        cin>>posi;
        cout<<"Digite o simbolo 'x' ou 'o' ";
        cin>>simb;
        //velha[posi]= simb;
        for(i=0; i<9; i++)
        {
            //velha[i]='-';
            velha[posi]= simb;

        }
        for (i=0; i<3; i++)
            cout<<velha[j];
        cout<<"\n";
        for (i=3; i<6; i++)
            cout<<velha[k];
        cout<<"\n";
        for (i=6; i<9; i++)
            cout<<velha[l];
        cout<<"\n";

    }
    while (state==0);

    return 0;
}
