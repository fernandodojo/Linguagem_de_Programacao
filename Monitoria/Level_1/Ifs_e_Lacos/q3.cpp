#include <iostream>
using namespace std;

int main()
{
	float soma, i, n;
	
	cout<<"digite um inteiro positivo";
	cin>>n;

	soma = 0;
	for(i=1; i<=n; i++)
	{
		soma = soma + 1/(i);
	}	
	cout<<soma;	
}


