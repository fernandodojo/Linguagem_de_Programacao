#include <iostream>
using namespace std;

int main()
{
    int dias, imposto, liquido, bruto;
    cin>>dias;

    bruto = 30*dias;
    imposto = bruto*0.08;
    liquido = bruto - imposto;
    cout<<liquido;
}
