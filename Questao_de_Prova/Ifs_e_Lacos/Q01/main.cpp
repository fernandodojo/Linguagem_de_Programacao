#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, j, k, ntermos;
    double spositivo, snegativo, s,  x;
    spositivo = 0;
    cout << "Digite o numero de termos" << endl;
    cin>>ntermos;
    j=1;
    k=3;

    if (ntermos%2==0)
    {
        for (i=1; i<=ntermos/2;i++)
        {
            spositivo = spositivo + (1/pow(j,3));
            cout<<j<<" ";
            j+=4;
        }
    }
    if (ntermos%2!=0)
    {
        for (i=1; i<=ntermos/2+1;i++)
        {
            spositivo = spositivo + (1/pow(j,3));
            cout<<j<<" ";
            j+=4;
        }
    }
    cout<<"\n";
    for (i=1; i<=ntermos/2;i++)
    {
        snegativo = snegativo + (1/pow(k,3));
        cout<<k<<" ";
        k+=4;
    }

    s = spositivo - snegativo;
    cout<<"\n"<<s;

    x = pow((s*32), 1.0/3.0);
    cout<<"\n"<<x;

    return 0;
}
