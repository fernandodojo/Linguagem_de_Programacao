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
      cout <<"a e b são diferentes, sendo a maior que b";
    }
    else
    {
      cout <<"a e b são diferentes, sendo b maior que a";
    }
  }
  else
  {
    cout <<"a e b são iguais\n";
  }


  return 0;
}

*/

//Lista de Exercícios Salles
//1 - Crie um programa que lê três inteiros e informa VERDADEIRO se apenas o maior deles é par ou se o menor deles é ímpar ou informa FALSO em caso contrário.

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
//5-Pelas regras da UFMA, toda disciplina é composta de 3 avaliações obrigatórias. Se um aluno tem média superior ou igual a 7 (sete) nas três avaliações, ele é considerado “Aprovado por média.”. Se tiver média inferior a 7 (sete), tem direito a uma quarta prova, chamada de reposição, que substituiu a menor nota das três provas anteriores (se a nota da reposição for maior que ela). Após a reposição, se as três maiores notas formarem uma média igual ou superior a 7 (sete), o aluno é considerado “Aprovado na reposição.”. Finalmente, apenas se tiver a média com a reposição inferior a 7 (sete), ele faz uma quinta prova, chamada de final, em que é considerado “Aprovado na final.” se a soma da média com a reposição e a nota da prova final for igual ou maior que 12 (doze). Nesse último caso, caso a soma da média com reposição e prova final for inferior a 12 (doze), o aluno é dito como “Reprovado.”. Faça um programa que lê as três notas obrigatórias de uma disciplina e depois, apenas se necessário, lê as notas da reposição e final. O programa deve dar como saída as frases “Aprovado por média.”, “Aprovado na reposição”. “Aprovado na final.” ou “Reprovado.” respectivamente em cada uma dessas situações conforme a descrição anterior.

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

        cout<<"\nDigite a nota da reposição\n";
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
