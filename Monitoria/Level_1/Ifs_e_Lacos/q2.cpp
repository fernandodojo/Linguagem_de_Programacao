#include <iostream>
using namespace std;

int main()
{
	int soma, i, n;
	
	cout<<"digite um inteiro positivo";
	cin>>n;

	soma = 0;
	for(i=1; i<=n/2; i++)
	{
		if (n%i==0)
			soma = soma + i;
	}	
	cout<<soma;	
}


