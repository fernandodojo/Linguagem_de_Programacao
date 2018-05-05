#include <iostream>
using namespace std;

int main()
{
    int i, n, aux=1;

    cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<aux;
        aux = aux + 2;
    }
}
