/*#include <iostream>

using namespace std;

int main()
{
    int num1, num2,divisor, mdc;
    mdc=0;
    divisor=1;

    cout << "Digite duas variaveis" << endl;
    cin>>num1>>num2;

    while (divisor<=num1 && divisor<=num2)
    {
        divisor++;
        if (num1%num2==0)
            mdc = num2;
        else if (num2%num1==0)
            mdc = num1;
        else if (num1%divisor==0 && num2%divisor==0)
            mdc = divisor;
    }
    cout<<mdc;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{

   int i, j, n, menor, k, maxi, mdc;
    cout<<"Digite a quantidade de numeros: ";
    cin>>n;
    int vetor[n];
    cout<<"Digite os respectivos valores: ";

    //vetor[0]=-5;
    //vetor[1]=9;
    //vetor[2]=7;

    for (i=0; i<n; i++)
    {
        cin>>vetor[i];
        //cout<<vetor[i]<<" ";
    }

    menor = vetor[0];
    for (j=0; j<n; j++)
    {
        //cin>>vetor[j];
        cout<<vetor[j]<<" ";
        if (vetor[j]< menor)
             menor = vetor[j];
    }
    cout<<"\nmenor = "<<menor<<"\n";

    k=1;

    while (k<=menor)
    {
        k++;
        maxi = 0;
        for (i=0; i<n; i++)
        {
            if ((vetor[i]%k)==0)
                maxi = maxi+1;

        }

        if (maxi==n)
            mdc = k;

        cout<<k<<" "<<maxi<<" "<<mdc<<"\n";
    }


    cout<<"mdc = "<<mdc<<"\n";
    //cout<<"maxi = "<<maxi;
    return 0;
}
