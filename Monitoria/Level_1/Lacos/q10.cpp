#include <iostream>
using namespace std;

int main()
{
    int num,resto=0, cem=0, cinq=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
    cout<<"Digite uma numero";
    cin>>num;

    cem = num/100;
    resto = num%100;

    cinq = resto/50;
    resto = resto%50;

    vinte = resto/20;
    resto = resto%20;

    dez = resto/10;
    resto = resto%10;

    cinco = resto/5;
    resto = resto%5;

    dois = resto/2;
    resto = resto%2;

    um = resto;

    cout<<"cem: "<<cem<<"\n";
    cout<<"cinq: "<<cinq<<"\n";
    cout<<"vinte: "<<vinte<<"\n";
    cout<<"dez: "<<dez<<"\n";
    cout<<"cinco: "<<cinco<<"\n";
    cout<<"dois: "<<dois<<"\n";
    cout<<"um: "<<um<<"\n";
}
