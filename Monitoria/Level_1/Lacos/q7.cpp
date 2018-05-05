#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin>>n;

    for(i=0; i<=n; i++)
    {
        if (n>=11*i && n<11*(i+1))
            cout<<11*(i+1)<<"\n";
        if (n>=13*i && n<13*(i+1))
            cout<<13*(i+1)<<"\n";
        if (n>=17*i && n<17*(i+1))
            cout<<17*(i+1)<<"\n";
    }
    return 0;
}
