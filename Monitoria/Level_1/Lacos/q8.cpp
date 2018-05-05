#include <iostream>
using namespace std;

int main()
{
    int a, b, impar = 1, i, d, soma=0;

    cin>>a>>b;

    for(i=a; i<=b;i++)
    {
        impar = 1;
        if (i<=1 ||(i!=2 && i%2==0))
        {
            impar =0;
        }
        d=3;
        while (impar==1 && d<i/2)
        {
            if (i%d==0)
                impar = 0;

            d+=2;
        }
        if(impar==1)
        {
            cout<<i<<"Primo"<<"\n";
            soma = soma + i;
        }
        else
            cout<<i<<"Nao Primo"<<"\n";
    }

    cout<<soma;
}



