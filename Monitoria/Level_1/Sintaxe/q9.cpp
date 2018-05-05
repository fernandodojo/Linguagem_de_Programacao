#include <iostream>
using namespace std;

int main()
{
    float valor;
    cin>>valor;

    cout<<"Valor com desconto: "<<valor-(valor*0.1)<<"\n";
    cout<<"Valor da parcela em 3x: "<<valor/3<<"\n";
    cout<<"Comissão do vendedor a vista: "<<(valor-(valor*0.1))*0.05<<"\n";
    cout<<"Comissão do vendedor parcelado: "<<valor*0.05<<"\n";
}
