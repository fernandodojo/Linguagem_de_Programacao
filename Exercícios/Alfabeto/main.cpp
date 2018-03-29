#include <iostream>
using namespace std;

void barrahorizontal(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(i<=1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barrahorizontalmenor(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<5*n-1; j++)
        {
            if(i<=1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barrahorizontalcentral(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<5*n-1; j++)
        {
            if(i>=0 && j >=1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barrahorizontaldireita(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(i==0 && j>=1 && j<5*n)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barrahorizontalesquerdamenor(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(i==0 && j<5*n-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticalesquerda(int n)
{
    int i, j;
    for (i=0; i<2*n; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==0)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticalesquerdanegrito(int n)
{
    int i, j;
    for (i=0; i<3*n; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j>=0 && j<=1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticaldupla(int n)
{
    int i, j;
    for (i=0; i<2*n; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==0)
                cout<<"#";
            else if (j==5*n-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticalduplaunitaria(int n)
{
    int i, j;
    for (i=0; i<1*n; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==0)
                cout<<"#";
            else if (j==5*n-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticalduplaunitaria2(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==0)
                cout<<"#";
            else if (j>=4*n-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticaldireita(int n)
{
    int i, j;
    for (i=0; i<2*n; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==5*n-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void barraverticalcentral(int n)
{
    int i, j;
    for (i=0; i<2*n; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==(5*n)/2)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void pontodireita(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<6*n; j++)
        {
            if(j==5*n)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void pontoesquerda(int n)
{
    int i, j;
    for (i=0; i<1; i++)
    {
        for (j=0; j<6*n; j++)
        {
            if(j==0)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void diagonalsecundaria(int n)
{
    int i, j;

    for (i=1; i<5*n-1; i ++)
    {
        for (j=0; j<5*n; j++)
        {
            if(j==5*n-i-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void pernasretadiagonalsecundaria(int n)
{
    int i, j;

    for (i=0; i<5*n-1; i++)
    {
        for (j=0; j<5*n; j++)
        {
            if (j==0)
                cout<<"#";
            else if(j==5*n-i-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void pernasretadiagonalprincipal(int n)
{
    int i, j;

    for (i=1; i<5*n; i ++)
    {
        for (j=0; j<5*n; j++)
        {
            if (j==0)
                cout<<"#";
            else if(j==i)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letran(int n)
{
    int i, j;

    for (i=0; i<6*n; i ++)
    {
        for (j=0; j<6*n; j++)
        {
            if (j==0)
                cout<<"#";
            else if(j==6*n-1)
                cout<<"#";
            else if(j==i)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letrav(int n)
{
    int i, j;

    for (i=0; i<8*n; i ++)
    {
        for (j=0; j<8*n; j++)
        {
            if(j==i && j <4*n)
                cout<<"#";
            else if(j==8*n-i-1 && j>=4*n)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letrax(int n)
{
    int i, j;

    for (i=0; i<8*n; i ++)
    {
        for (j=0; j<8*n; j++)
        {
            if(j==i)
                cout<<"#";
            else if(j==8*n-i-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letray(int n)
{
    int i, j;

    for (i=0; i<8*n; i ++)
    {
        for (j=0; j<8*n; j++)
        {
            if(j==i && j<4*n)
                cout<<"#";
            else if(j==8*n-i-1)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letray2(int n)
{
    int i, j;

    for (i=0; i<8*n; i ++)
    {
        for (j=0; j<8*n; j++)
        {
            if(j==i && j<4*n)
                cout<<"#";
            else if(j==8*n-i-1 && j>=4*n)
                cout<<"#";
            else if (j==4*n-1 && i>4*n-1)
                cout<<"##";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letram(int n)
{
    int i, j;

    for (i=0; i<4*n; i ++)
    {
        for (j=0; j<6*n; j++)
        {
            if (j==0)
                cout<<"#";
            else if(j==6*n-1)
                cout<<"#";
            else if(j==i && j<3*n)
                cout<<"#";
            else if(j==6*n-i-1 && j>=3*n)
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void letraw(int n)
{
    int i, j;

    for (i=0; i<6*n; i ++)
    {
        for (j=0; j<6*n; j++)
        {
            if (j==0)
                cout<<"#";
            else if(j==6*n-1)
                cout<<"#";
            else if(j==i && j>=3*n )
                cout<<"#";
            else if(j==6*n-i-1 && j<3*n  )
                cout<<"#";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

int main() {

    char letra;
    int a;

    cout<<"Digite o tamanho da letra\n";
    cin>>a;
    cout<<"Digite a letra\n";
    cin >> letra;

    switch (letra) {

    case 'a':
        barrahorizontalcentral(a);
        barraverticaldupla(a);
        barrahorizontal(a);
        barraverticaldupla(a);
        break;

    case 'b':
        barrahorizontalmenor(a);
        barraverticaldupla(a);
        barrahorizontalmenor(a);
        barraverticaldupla(a);
        barrahorizontalmenor(a);
        break;

    case 'c':
        barrahorizontal(a);
        barraverticalesquerda(a);
        barraverticalesquerda(a);
        barrahorizontal(a);
        break;

    case 'd':
        barrahorizontalmenor(a);
        barraverticaldupla(a);
        barraverticaldupla(a);
        barrahorizontalmenor(a);
        break;

    case 'e':
        barrahorizontal(a);
        barraverticalesquerda(a);
        barrahorizontal(a);
        barraverticalesquerda(a);
        barrahorizontal(a);
        break;

    case 'f':
        barrahorizontal(a);
        barraverticalesquerda(a);
        barrahorizontal(a);
        barraverticalesquerda(a);
        barraverticalesquerda(a);
        break;

    case 'g':
        barrahorizontalcentral(a);
        barraverticalduplaunitaria(a);
        pontoesquerda(a);
        barraverticalduplaunitaria2(a);
        barraverticalduplaunitaria(a);
        barrahorizontalcentral(a);
        break;

    case 'h':
        barraverticaldupla(a);
        barrahorizontal(a);
        barraverticaldupla(a);
        break;

    case 'i':
        barraverticalesquerdanegrito(a);
        barraverticalesquerdanegrito(a);
        break;

    case 'j':
        barraverticaldireita(a);
        barraverticaldupla(a);
        barrahorizontal(a);
        break;

    case 'k':
        pernasretadiagonalsecundaria(a);
        pernasretadiagonalprincipal(a);
        break;

    case 'l':
        barraverticalesquerda(a);
        barraverticalesquerda(a);
        barrahorizontal(a);
        break;

    case 'm':
        letram(a);
        break;

    case 'n':
        letran(a);
        break;

    case 'o':
        barrahorizontalcentral(a);
        barraverticaldupla(a);
        barraverticaldupla(a);
        barrahorizontalcentral(a);
        break;

    case 'p':
        barrahorizontalmenor(a);
        barraverticaldupla(a);
        barrahorizontalmenor(a);
        barraverticalesquerda(a);
        break;

    case 'q':
        barrahorizontalcentral(a);
        barraverticaldupla(a);
        barraverticaldupla(a);
        barrahorizontaldireita(a);
        pontodireita(a);
        break;

    case 'r':
        barrahorizontalmenor(a);
        barraverticaldupla(a);
        barrahorizontalmenor(a);
        pernasretadiagonalprincipal(a);
        break;

    case 's':
        barrahorizontalcentral(a);
        barraverticalesquerda(a);
        barrahorizontalcentral(a);
        barraverticaldireita(a);
        barrahorizontalesquerdamenor(a);
        break;

    case 't':
        barrahorizontal(a);
        barraverticalcentral(a);
        barraverticalcentral(a);
        break;

    case 'u':
        barraverticaldupla(a);
        barraverticaldupla(a);
        barrahorizontalcentral(a);
        break;

    case 'v':
        letrav(a);
        break;

    case 'w':
        letraw(a);
        break;

    case 'x':
        letrax(a);
        break;

    case 'y':
        letray(a);
        cout<<"\n";
        letray2(a);
        break;

    case 'z':
        barrahorizontal(a);
        diagonalsecundaria(a);
        barrahorizontal(a);
        break;

    default:
        cout<<"Errrouuuu";
  }
    return 0;
}
