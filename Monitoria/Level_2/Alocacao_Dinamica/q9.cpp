/*
Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo
dessa string. O programa imprime a string sem suas vogais.
*/
#include <iostream>
using namespace std;

int main()
{
  int n, i;
  char *string;

  cout<<"Digite a quatidade de espaco na string";
  cin>>n;

  string = new char[n];
  cin.ignore(1); //ignora a digitacao do enter como string
  cin.getline(string, n); //permite a entrada da string inteira, ate o tamanho da string definido anteriormente

  for(i=0; i<n; i++)
  {
    if(string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u')
    {
      cout<<string[i]; //se o caracter for diferente de vogal, este eh impresso
    }
  }
  delete []string; //liberando a memoria da string
}
