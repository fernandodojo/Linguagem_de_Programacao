#include <iostream>
using namespace std;

int main()
{
    int vetor[1000];
    int n, i, par=0, valor, cont=0;
    i= 0;
    do{
        cin>>valor;
        vetor[i] = valor;
        if (vetor[i]%2 == 0)
        {
            par++;
        }
        cont++;
        i++;
    }while(valor!=1000);
    cout<<cont-1<<" ";
    cout<<"\n"<<par-1;
}
