#include <iostream>
using namespace std;

int main()
{
    int i, aux=1, soma=0;

    for (i=0; i<3; i++)
    {
        soma = soma + aux;
        aux = aux +2;
    }
    cout<<soma;
}
