#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main()
{
    int i, j, l, k,  pontos=50;
    int px = 20, py=11;         //coordenadas x e y do player
    int rd, ran, ran2;                     //numero aleatorio
    //int mx=1, my;               //coordenacas x e y do meteoro
    int bx=0, by=0;             //coordenadas x e y da bala
    char tela[22][22], tecla;   //matriz de coordenadas e tecla de movimento
    int bullet[2][3];

    //rd = rand()%40; //gerador de numero aleatorio entre 1 e 39
    //my = rd;        //coordenada y do meteoro recebe numero aleatorio

    for (i=0; i<2; i++)
    {
        for(j=0; j<5; j++)
        {
            bullet[i][j] = 0;
        }
    }

    do{
        system("clear");
        cout<<"pontos = "<<pontos;

        ran = rand()%(3)+1;
        ran2 = rand()%(20)+2;


        //IMPRESSAO MATRIZ BULLET
        /*for (i=0; i<2; i++)
        {

            for(j=0; j<5; j++)
            {
                cout<<bullet[i][j]<<" ";
            }
            cout<<"\n";
        }
        //IMPRESSAO MATRIZ BULLET
        */

        for (i=0; i<1; i++)
        {
            for(j=0; j<ran; j++)
            {
                if (bullet[0][j]==0)
                {
                    bullet[0][j]=1;
                    bullet[1][j]=ran2;
                    break;
                }
                if (bullet[1][j+1] == bullet[1][j])
                {
                    bullet[1][j+1] = bullet[1][j+1]+1;
                }
            }
            cout<<"\n";
        }


        //cout<<"\n"<<"Soma:"<<soma;


        for (i=0; i<1; i++)
        {
            for(j=0; j<3; j++)
            {
                if (bullet[i][j]!=0)
                    bullet[i][j] = bullet[i][j] + 1;
                if (bullet[0][j]==20)
                {
                    bullet[0][j]=0;
                    bullet[1][j]=0;
                    pontos = pontos -5;
                }
            }
        }


        if(bx<=1)   //desaparece com a bala caso a mesma atinja o topo da tela
        {
            bx=0;
            by=0;
        }

        bx = bx-1;


        for(i=0; i<22; i++)
        {
            for (j=0; j<22; j++)
            {
                if (i==21 || j==0 || i==0 || j==21) //imprime bordas da tela
                    tela[i][j] ='#';
                else
                    tela[i][j] =' ';//preenche qualquer coisa q não seja a borda com espaços

                for (k=0; k<2; k++)
                {
                    for(l=0; l<3; l++)
                    {
                        tela[bullet[0][l]][bullet[1][l]] = '*';//define a posição do meteoro em todas as interações
                    }
                }

                tela[bx][by] = '|';//define a posição da bala em todas as interações
                tela[px][py]= '_';// define a posição do player em todas as interações

                cout<<tela[i][j]; //impressão da matriz inteira
            }
            cout<<"\n";

        }
        cin>>tecla; // recebimento da letra para realizar uma ação pré programada

        //TELETRANPORTE AO SAIR DA TELA
        if (py<=1)
           py=20;
        if (py>=21)
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
        /*if (((bx>=mx-1) && (bx<=mx+1)) && (by==my))
        {
            pontos = pontos + 3;
            mx = 2;
            rd = rand()%40;
            my = rd;
            bx=0;
            by=0;
        }*/
        //CONDIÇÃO PARA REINICIALIZAÇÃO DA POSIÇÃO DA BALA E METEORO EM CASO DE COLISÃO

    //cout<<mx<<" "<<my<<"\n";
    //cout<<bx<<" "<<by<<"\n";
    }
    while(pontos>0);

    if(pontos<=0)
        cout<<"Game Over";
}

