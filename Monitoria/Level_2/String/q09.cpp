#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *str1;
	char *str2;
	//char *str3;
	char *straux;

	int n, i, tamanho1, tamanho3;
	cout<<"DIgite o numero de casa para concatenar: ";
	cin>>n;

	str1 = new char [100];
	str2 = new char [100];

	cin.ignore(1);
	cout<<"DIgite a strin1: ";
	cin.getline(str1, 100);
	cout<<"DIgite a strin2: ";
	cin.getline(str2, 100);

	cout<<"String 1: "<<str1<<'\n';
	cout<<"String 2: "<<str2<<'\n';

	straux = &str1[strlen(str1)];//ponteiro para receber endereço da ultima posição ocupada da string
	strncpy(straux, str2, n);//realizado a copia dos valores da string dois para o a posição da ultima posição atras do ponteiro
	str1[strlen(str1)+n]='\0';//coloca-se o delimitador de string logo apos a ultima posicao mais acrescimos
	cout<<"Nova String: "<<str1<<'\n';


	/*tamanho1 =strlen(str1);
	tamanho3 = tamanho1 + n;


	str3 = new char [tamanho3];


	for(i=0; i<tamanho3;i++)
	{
		if(i<tamanho1)
			str3[i]=str1[i];
		if(i>=tamanho1)
			str3[i]=str2[i-tamanho1];
	}

	delete []str1;
	str1 = str3;
	str1[tamanho3]= '\0';

	cout<<"Nova string: "<<str1<<'\n';

	delete []str2;
	delete []str3;
	*/
	return 0;
}
