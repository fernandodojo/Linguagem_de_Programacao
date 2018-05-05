#include <iostream>
using namespace std;

int main()
{
    float valor = 780000, gan1, gan2, gan3;
    gan1 = valor*0.46;
    gan2 = valor*0.32;
    gan3 = valor -gan1-gan2;

    cout<<gan1<<" "<<gan2<<" "<<gan3;
}
