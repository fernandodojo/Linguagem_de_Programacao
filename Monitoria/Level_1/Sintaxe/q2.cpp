#include <iostream>
using namespace std;

int main()
{
    float ct, ft, kt;
    cout<<"Digite a temperatura em C°";
    cin>>ct;
    ft = ct*(9.0/5.0)+32.0;
    kt = ct + 273.15;

    cout<<ft<<" "<<kt;
}
