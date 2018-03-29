#include <iostream>

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
