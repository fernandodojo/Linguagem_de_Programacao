//Se for necessario armazenar diferente tipos de dados não usar vetor; se for necessario crescer ou diminuir, tbm nã é possivel usar vetor;

#include <iostream>
using namespace std;

int main()
{
    int posi, positemp, i, j, state;
    int horizontal1x, horizontal1o, horizontal2x=0, horizontal2o=0, horizontal3x=0, horizontal3o=0;
    int vertical1=0, vertical2=0, vertical3=0;
    int diagonalp=0, diagonals=0;

    char velha[9], simb, simbtemp;

    /*cout<<"Digite a posicao: ";
    cin>>posi;
    cout<<"Digite o simbolo 'x' ou 'o' ";
    cin>>simb;
    //velha[3*x+y]= n;*/

    state = 0;

    //PRENCHIMENTO DO VETOR PARA EVITAR EMPRESSÃO DE VALOR/CARACTER ALEATORIO GUARDADO NA MEMORIA
    for(i=0; i<9; i++)
    {
        velha[i]='#';
    }

    do// CRIACAO DE LACO/FLAG, PARA PERMANENCIA NO JOGO
    {
        //SOLICITAÇÃO E VERIFICAÇÃO DO VALOR ATRIBUIDO PELO USUARIO A POSIÇÃO//
        cout<<"Digite a posicao entre 1 e 9: ";
        cin>>positemp;
        if (positemp>=1 && positemp<=9)
            posi = positemp;
        else
            cout<<"DIGITE O NUMERO DA POSICAO ENTRE 1 E 9\n";

        //SOLICITAÇÃO E VERIFICAÇÃO DO VALOR ATRIBUIDO PELO USUARIO AO SIMBOLO(X OU O)//
        cout<<"Digite a letra 'X' ou 'O': ";
        cin>>simbtemp;
        if (simbtemp=='x' || simbtemp=='X' || simbtemp=='o' || simbtemp=='O')
            simb = simbtemp;
        else
            cout<<"DIGITE A LETRA 'x', 'X', 'o', 'O'!\n";

        //INSERÇÃO DA LETRA X OU O SE E SOMENTE SE A POSIÇÃO ESTIVER DESOCUPADA//
        if (velha[posi-1]== '#')
            velha[posi-1]= simb;
        else
            cout<<"\nTente outra posicao!\n";
        //INSERÇÃO DA LETRA X OU O SE E SOMENTE SE A POSIÇÃO ESTIVER DESOCUPADA//


        //IMPRESSÃO
        for (j=0; j<3; j++)
            cout<<velha[j];
        cout<<"\n";
        for (j=3; j<6; j++)
            cout<<velha[j];
        cout<<"\n";
        for (j=6; j<9; j++)
            cout<<velha[j];
        cout<<"\n";
        //IMPRESSÃO


        //contax = 0;
        //contao = 0;

       /* horizontal1x=0;
        horizontal1o=0;

        //CHECAGEM HORIZONTAL
        for(i=0; i<3; i++)
        {
            if (velha[i]=='x')
                horizontal1x = horizontal1x + 1;
            else if (velha[i]=='o')
                horizontal1o = horizontal1o + 1;



        }

        if (horizontal1x == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            else if (horizontal1o == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        for(i=3; i<6; i++)
        {
            if (velha[i]=='x')
                horizontal2 = horizontal2 + 1;
            if (velha[i]=='o')
                horizontal2 = horizontal2 + 1;
            if (horizontal2 == 3)
            {
                state=1;
            }
        }
        for(i=6; i<9; i++)
        {
            if (velha[i]=='x')
                contax = contax + 1;
            if (velha[i]=='o')
                contao = contao + 1;
            if (contax == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            if (contao == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        }

        //CHECAGEM VERTICAL
        for(i=0; i<7; i+=3)
        {
            if (velha[i]=='x')
                contax = contax + 1;
            if (velha[i]=='o')
                contao = contao + 1;
            if (contax == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            if (contao == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        }
        for(i=1; i<8; i+=3)
        {
            if (velha[i]=='x')
                contax = contax + 1;
            if (velha[i]=='o')
                contao = contao + 1;
            if (contax == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            if (contao == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        }
        for(i=2; i<9; i+=3)
        {
            if (velha[i]=='x')
                contax = contax + 1;
            if (velha[i]=='o')
                contao = contao + 1;
            if (contax == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            if (contao == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        }

        //CHECAGEM DIAGONA PRINCIPAL
        for(i=0; i<9; i+=4)
        {
            if (velha[i]=='x')
                contax = contax + 1;
            if (velha[i]=='o')
                contao = contao + 1;
            if (contax == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            if (contao == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        }

        //CHECAGEM DIAGONA SECUNDARIA
        for(i=2; i<7; i+=2)
        {
            if (velha[i]=='x')
                contax = contax + 1;
            if (velha[i]=='o')
                contao = contao + 1;
            if (contax == 3)
            {
                cout<<"Jogador 'x' ganhou.";
                state=1;
            }
            if (contao == 3)
            {
                cout<<"Jogador '0' ganhou.";
                state=1;
            }
        }

*/

       	if ((velha[0]=='x' && velha[1]=='x' && velha[2]=='x')||
		(velha[3]=='x' && velha[4]=='x' && velha[5]=='x')||
		(velha[6]=='x' && velha[7]=='x' && velha[8]=='x')||
		(velha[0]=='x' && velha[3]=='x' && velha[6]=='x')||
		(velha[1]=='x' && velha[4]=='x' && velha[7]=='x')||
		(velha[2]=='x' && velha[5]=='x' && velha[8]=='x')||
		(velha[0]=='x' && velha[4]=='x' && velha[8]=='x')||
		(velha[2]=='x' && velha[4]=='x' && velha[6]=='x'))
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }



        if ((velha[0]=='o' && velha[1]=='o' && velha[2]=='o')||
		(velha[3]=='o' && velha[4]=='o' && velha[5]=='o')||
		(velha[6]=='o' && velha[7]=='o' && velha[8]=='o')||
		(velha[0]=='o' && velha[3]=='o' && velha[6]=='o')||
		(velha[1]=='o' && velha[4]=='o' && velha[7]=='o')||
		(velha[2]=='o' && velha[5]=='o' && velha[8]=='o')||
		(velha[0]=='o' && velha[4]=='o' && velha[8]=='o')||
		(velha[2]=='o' && velha[4]=='o' && velha[6]=='o'))

        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }

       /*
       if (velha[0]=='x' && velha[1]=='x' && velha[2]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[0]=='o' && velha[1]=='o' && velha[2]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[3]=='x' && velha[4]=='x' && velha[5]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[3]=='o' && velha[4]=='o' && velha[5]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[6]=='x' && velha[7]=='x' && velha[8]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[6]=='o' && velha[7]=='o' && velha[8]=='o')
         {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[0]=='x' && velha[3]=='x' && velha[6]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[0]=='o' && velha[3]=='o' && velha[6]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[1]=='x' && velha[4]=='x' && velha[7]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[1]=='o' && velha[4]=='o' && velha[7]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[2]=='x' && velha[5]=='x' && velha[8]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[2]=='o' && velha[5]=='o' && velha[8]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[0]=='x' && velha[4]=='x' && velha[8]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[0]=='o' && velha[4]=='o' && velha[8]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }
        /////////////////////////////////////////////////////

        else if (velha[2]=='x' && velha[4]=='x' && velha[6]=='x')
        {
            cout<<"Jogador 'x' ganhou.";
            state=1;
        }
        else if (velha[2]=='o' && velha[4]=='o' && velha[6]=='o')
        {
            cout<<"Jogador 'o' ganhou.";
            state=1;
        }*/

    }
    while (state==0); //FLAG PARA PERMANENCIA DO JOGO ENQUANTO NINGUEM GANHAR

    return 0;
}
