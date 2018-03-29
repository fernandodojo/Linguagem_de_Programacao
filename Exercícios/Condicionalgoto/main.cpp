#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char rstart;
	int nota1, nota2, media;
	inicio:

    system ("cls");

    cout<<"\nDigite as duas notas\n";
    cin>>nota1>>nota2;

    media = (nota1 + nota2)/2;

    if (media>=7)
    {
        cout<<"Aprovado\n";
    }
    else
    {
        cout<<"Reprovado\n";
    }

	cout<<"\nDeseja reiniciar o programa?[s/n] ";
	cin>> rstart;
	if(rstart == 's' or rstart == 'S')
	{
		goto inicio;
	}
	return 0;
}
