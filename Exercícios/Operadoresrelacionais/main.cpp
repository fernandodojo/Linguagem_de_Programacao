/*#include <iostream>
using namespace std;

int main() {

  int a, b;

  cout << "Digite 3 numeros inteiros\n";
  cin >> a>>b;

  if (a!=b)
  {
    if (a>b)
    {
      cout <<"a e b s�o diferentes, sendo a maior que b";
    }
    else
    {
      cout <<"a e b s�o diferentes, sendo b maior que a";
    }
  }
  else
  {
    cout <<"a e b s�o iguais\n";
  }


  return 0;
}

*/

//Lista de Exerc�cios Salles
//1 - Crie um programa que l� tr�s inteiros e informa VERDADEIRO se apenas o maior deles � par ou se o menor deles � �mpar ou informa FALSO em caso contr�rio.

/*#include <iostream>
using namespace std;

int main()
{
  int a,b,c;

  cout << "Digite 3 numeros inteiros\n";
  cin>> a>>b>>c;
  int menor = a;

  if (menor > b)
    menor = b;
  if (menor > c)
    menor = c;

  if (menor%2!=0)
  {
    cout<< "Verdadeiro\n";
  }
  else if ((a > b) && (a > c))
  {
    if ((a%2 == 0) && (b%2!=0) && (c%2!=0))
      cout <<"Verdadeiro\n";
    else
      cout<<"Falso\n";
  }
  else if ((b>a)&&(b>c))
  {
    if ((b%2==0) && (a%2!=0)&&(c%2!=0))
      cout <<"Verdadeiro\n";
    else
      cout<<"Falso\n";
  }
  else if ((c>a)&&(c>b))
  {
    if((c%2==0)&&(a%2!=0)&&(b%2!=0))
      cout <<"Verdadeiro\n";
    else
      cout<<"Falso\n";
  }
  else
    cout<<"Falso\n";

  return 0;

}
*/
//5-Pelas regras da UFMA, toda disciplina � composta de 3 avalia��es obrigat�rias. Se um aluno tem m�dia superior ou igual a 7 (sete) nas tr�s avalia��es, ele � considerado �Aprovado por m�dia.�. Se tiver m�dia inferior a 7 (sete), tem direito a uma quarta prova, chamada de reposi��o, que substituiu a menor nota das tr�s provas anteriores (se a nota da reposi��o for maior que ela). Ap�s a reposi��o, se as tr�s maiores notas formarem uma m�dia igual ou superior a 7 (sete), o aluno � considerado �Aprovado na reposi��o.�. Finalmente, apenas se tiver a m�dia com a reposi��o inferior a 7 (sete), ele faz uma quinta prova, chamada de final, em que � considerado �Aprovado na final.� se a soma da m�dia com a reposi��o e a nota da prova final for igual ou maior que 12 (doze). Nesse �ltimo caso, caso a soma da m�dia com reposi��o e prova final for inferior a 12 (doze), o aluno � dito como �Reprovado.�. Fa�a um programa que l� as tr�s notas obrigat�rias de uma disciplina e depois, apenas se necess�rio, l� as notas da reposi��o e final. O programa deve dar como sa�da as frases �Aprovado por m�dia.�, �Aprovado na reposi��o�. �Aprovado na final.� ou �Reprovado.� respectivamente em cada uma dessas situa��es conforme a descri��o anterior.

#include <iostream>
using namespace std;

int main(){

    float nota1, nota2, nota3, media;

    cout<<"Digite a nota das 3 provas\n";
    cin >>nota1>>nota2>>nota3;
    media = (nota1 + nota2 + nota3)/3;

    if (media>= 7)
    {
        cout <<"\nAPROVADO POR MEDIA\n";
    }
    else if (media<7)
    {
        cout<<"\nMedia = "<< media<<"\n";
        float menor;
        menor = nota1;
        if (menor>nota2)
          menor = nota2;
        if (menor > nota3)
          menor = nota3;

        float reposicao;

        cout<<"\nDigite a nota da reposi��o\n";
        cin >> reposicao;
        media = (nota1 + nota2 + nota3 + reposicao - menor)/3;


        if (media>=7)
        {
            cout<<"\nAPROVADO\n";
        }
        else if (media<7)
        {
            cout<<"\nMedia = "<< media<<"\n";

            float final;
            cout<<"\nDigite o valor da nota Final\n" ;
            cin>> final;
            media = (media + final)/2;
            cout<<"\nMedia Final= "<< media<<"\n";
            if (media>=6)
                cout<<"\nAPROVADO\n";
            else
                cout<<"\nREPROVADO\n";
        }
    }

    return 0;
}
