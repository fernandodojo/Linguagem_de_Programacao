#include <iostream>
using namespace std;

int main()
{
	int somapar, somaimpar, i, ini, fim;
	
	cout<<"digite 2 inteiro positivo";
	cin>>ini;
	cin>>fim;

	somapar = 0;
	for(i=ini; i<=fim; i++)
	{
		if (i%2==0)
			somapar = somapar +i;
		if (i%2!=0)
			somaimpar = somaimpar *i;
	}	
	cout<<somapar<<"\n";
	cout<<somaimpar<<"\n";	
}


