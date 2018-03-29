//Se for necessario armazenar diferente tipos de dados não usar vetor; se for necessario crescer ou diminuir, tbm nã é possivel usar vetor;

#include <iostream>
using namespace std;

int main()
{
    int posi, positemp, i, j, k, l, state;
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
            cout<<"DIGITE O NUMERO DA POSICAO ENTRE 1 E 9";

        //SOLICITAÇÃO E VERIFICAÇÃO DO VALOR ATRIBUIDO PELO USUARIO AO SIMBOLO(X OU O)//
        cout<<"Digite a letra 'X' ou 'O': ";
        cin>>simbtemp;
        if (simbtemp=='x' || simbtemp=='X' || simbtemp=='o' || simbtemp=='O')
            simb = simbtemp;
        else
            cout<<"DIGITE A LETRA 'x', 'X', 'o', 'O'!";

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

    }
    while (state==0); //FLAG PARA PERMANENCIA DO JOGO ENQUANTO NINGUEM GANHAR

    return 0;
}
