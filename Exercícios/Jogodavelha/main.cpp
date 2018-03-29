//Se for necessario armazenar diferente tipos de dados não usar vetor; se for necessario crescer ou diminuir, tbm nã é possivel usar vetor;

#include <iostream>
using namespace std;

int main()
{
    int x, y, i;
    char velha[9], n;


    cout<<"Digite a posicao x e y";
    cin>>x>>y;
    cout<<"Digite o simbolo 'x' ou 'o' ";
    cin>>n;

    velha[3*x+y]= n;

    for(i=0; i<=9; i++)
    {
        cout<<velha[i];
    }
    return 0;
}
