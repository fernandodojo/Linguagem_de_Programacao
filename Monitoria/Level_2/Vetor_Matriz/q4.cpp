#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    int v[10];
    int v1[10];
    int v2[10];
    int i, j;

    for (i=0; i<10; i++)
        v[i]= rand()%50;

    for (i=0; i<10; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<"\n";

    for (i=0; i<10; i++)
    {
        if (v[i]%2==0)
        {
            v1[i] = v[i];
            cout<<v1[i]<<" ";
        }
    }
    cout<<"\n";

    for (i=0; i<10; i++)
    {
        if (v[i]%2!=0)
        {
            v2[i] = v[i];
            cout<<v2[i]<<" ";
        }
    }

    return 0;
}
