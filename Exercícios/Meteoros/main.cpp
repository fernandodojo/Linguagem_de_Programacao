#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main()
{
    int i, j, pontos=10;
    int px = 20, py=21;         //coordenadas x e y do player
    int rd;                     //numero aleatorio
    int mx=1, my;               //coordenacas x e y do meteoro
    int bx=0, by=0;             //coordenadas x e y da bala
    char tela[22][41], tecla;   //matriz de coordenadas e tecla de movimento

    rd = rand()%40; //gerador de numero aleatorio entre 1 e 39
    my = rd;        //coordenada y do meteoro recebe numero aleatorio

    do{
        system("clear");
        cout<<"pontos = "<<pontos;
        if (mx>=21) //decrescimento e reinicialização da posição do meteoro caso o mesmo chegue ao chao
        {
            pontos = pontos-5;
            mx = 2; //inicio no topo da tela
            rd = rand()%40;
            my = rd;
        }

        if(bx<=1)   //desaparece com a bala caso a mesma atinja o topo da tela
        {
            bx=0;
            by=0;
        }

        mx = mx+1; //aumenta ou diminui a posição vertical da bala e do meteoro
        bx = bx-1;

        for(i=0; i<22; i++)
        {
            for (j=0; j<41; j++)
            {
                if (i==21 || j==0 || i==1 || j==40) //imprime bordas da tela
                    tela[i][j] ='#';
                else
                    tela[i][j] =' ';//preenche qualquer coisa q não seja a borda com espaços

                tela[mx][my] = '*';//define a posição do meteoro em todas as interações
                tela[bx][by] = '|';//define a posição da bala em todas as interações
                tela[px][py]= '_';// define a posição do player em todas as interações

                cout<<tela[i][j]; //impressão da matriz inteira
            }
            cout<<"\n";

        }
        cin>>tecla; // recebimento da letra para realizar uma ação pré programada

        //TELETRANPORTE AO SAIR DA TELA
        if (py<=1)
           py=38;
        if (py>=39)
            py=1;
        //TELETRANPORTE AO SAIR DA TELA

        //TECLAS DE MOVIMENTO DO PLAYER
        if (tecla=='a')
            py = py-1;
        if (tecla=='d')
            py = py+1;
        if (tecla=='s')
            py = py;
        //TECLAS DE MOVIMENTO DO PLAYER

        //TECLAS DE MOVIMENTO DA BALA
        if (tecla =='l')
        {
            pontos = pontos-2;
            bx=21;
            by=py;
            bx = bx-1;
        }
        //TECLAS DE MOVIMENTO DA BALA

        //CONDIÇÃO PARA REINICIALIZAÇÃO DA POSIÇÃO DA BALA E METEORO EM CASO DE COLISÃO
        if (((bx>=mx-1) && (bx<=mx+1)) && (by==my))
        {
            pontos = pontos + 3;
            mx = 2;
            rd = rand()%40;
            my = rd;
            bx=0;
            by=0;
        }
        //CONDIÇÃO PARA REINICIALIZAÇÃO DA POSIÇÃO DA BALA E METEORO EM CASO DE COLISÃO

    //cout<<mx<<" "<<my<<"\n";
    //cout<<bx<<" "<<by<<"\n";
    }
    while(pontos>0);

    if(pontos<=0)
        cout<<"Game Over";
}

