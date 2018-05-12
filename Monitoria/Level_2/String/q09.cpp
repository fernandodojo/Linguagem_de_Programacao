#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *str1;
	char *str2;
	char *straux;

	int n;
	cout<<"DIgite o numero de casa para concatenar: ";
	cin>>n;

	str1 = new char [100]; 	//alocacao dinamica da string
	str2 = new char [100];	//alocacao dinamica da string

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
}

//OUTRA FORMA DE FAZER A QUESTÃO, NÃO UTILIZANDO FUNÇÕES E PONTEIROS
/*#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char *str1;
	char *str2;
	char *str3;
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

	tamanho1 =strlen(str1); 		//guarda-se o tamanho da string 1 para posteriormente criar um novo vetor com este mesmo tamanho + o valor de n.
	tamanho3 = tamanho1 + n; 		//tamanho final no novo vetor.


	str3 = new char [tamanho3]; 	//novo vetor de concatenação com novo tamanho


	for(i=0; i<tamanho3;i++)
	{
		if(i<tamanho1) 					// se o i tiver valor menor ao vetor inicial o loop permitira a copia dos valores do vetor inicial para o novo
			str3[i]=str1[i];
		if(i>=tamanho1)					//se o i tiver valor maior ou igual ao vetor inicial, ele copiara os valores do vetor inicial2 para o novo vetor 
			str3[i]=str2[i-tamanho1]; 	//operação i-tamanho1 tem como resultado fazer o contador começar o vetor 2 pelo inicio. EX: str1 tamanho 10, n = 5, quanto i = 10 - 10 = 0; i= 11-10 = 1; i=12-10 = 2.
	}

	delete []str1; 			//desaloca-se o vetor str1
	str1 = str3;  			// str1 para a apontar para o str3
	str1[tamanho3]= '\0'; 	//atribui-se nova posição para o caractere delimitador

	cout<<"Nova string: "<<str1<<'\n';

	delete []str2; 			//desaloca-se 
	delete []str3;			//desaloca-se
	
	return 0;
}
*/
