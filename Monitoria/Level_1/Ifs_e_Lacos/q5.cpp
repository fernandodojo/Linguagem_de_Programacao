/*5) Faça programas para calcular as seguintes sequências:

a) 1 - 2 + 3 - 4 + 5 + ... + (2n - 1)
b) 1+ 3 + 5 +7 +...+ (2n - 1)*/

#include <iostream>
using namespace std;

int main()
{
	int i, somapar, somaimpar, soma, n;
	cout<<"digite um valor n";
	cin>>n;
	somapar = 0;
	somaimpar = 0;	
	
	for(i=1; i<=2*n-1; i+=2)
		somaimpar = somaimpar =i;
		
	for(i=2; i<2*n-1; i+=2)
		somapar = somapar+i;
		
	soma = somaimpar - somapar;	
	cout<<soma;
	
}
