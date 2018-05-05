#include <iostream>

using namespace std;

int main()
{
    int num1, num2,i, soma=0, menor, maior, multi = 1;
    int *vetor;
    cin>>num1>>num2;
    menor = num1;
    maior = num2;

    if(num2< menor)
    {
        menor = num2;
        maior = num1;
    }

    vetor = new int[maior - menor];

    cout<<*vetor;

    for(i=menor; i<=maior; i++)
    {
        vetor[i]=i;
        cout<<vetor[i]<<" ";
        if(vetor[i]%2==0)
        {
            soma = soma + vetor[i];
        }
        if(vetor[i]%2!=0)
        {
            multi = multi * vetor[i];
        }
    }

    delete [ ]vetor;
    cout<<"\n"<<soma;
    cout<<"\n"<<multi;
    cout<<*vetor;
}
