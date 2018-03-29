#include <iostream>
using namespace std;

int main()
{
    int posi, i, j, state;
    char velha[9], simb;


    state = 0;//flag

    //PRENCHIMENTO DO VETOR PARA EVITAR EMPRESSÃO DE VALOR/CARACTER ALEATORIO GUARDADO NA MEMORIA
    for(i=0; i<9; i++)
    {
        velha[i]='#';
    }

    cout<<"MAPA DE POSICOES\n";
    cout<<"   [1][2][3]\n";
    cout<<"   [4][5][6]\n";
    cout<<"   [7][8][9]\n";

    do// CRIACAO DE LACO/FLAG, PARA PERMANENCIA NO JOGO
    {
        //SOLICITAÇÃO E VERIFICAÇÃO DO VALOR ATRIBUIDO PELO USUARIO A POSIÇÃO//
        posi=0;
        while (posi<1 || posi>9)
        {
            cout<<"Digite a posicao entre 1 e 9: ";
            cin>>posi;
        }

        //SOLICITAÇÃO E VERIFICAÇÃO DO VALOR ATRIBUIDO PELO USUARIO AO SIMBOLO( X OU O)//
        simb = 'i';
        while ((simb!='x') && (simb!='o'))
        {
            cout<<"Digite a letra 'x' ou 'o': ";
            cin>>simb;
        }

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

        //CONDICOES DE VITORIA DO JOGADOR X
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
        //CONDICOES DE VITORIA DO JOGADOR O
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
    }
    while (state==0); //FLAG PARA PERMANENCIA DO JOGO ENQUANTO NINGUEM GANHAR

    return 0;
}
