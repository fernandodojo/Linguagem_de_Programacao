#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main()
{
    int i, j, l, k,  pontos=50;
    int px = 20, py=11;         //coordenadas x e y do player
    int ran, ran2;                     //numero aleatorio
    int bx=0, by=0;             //coordenadas x e y da bala
    char tela[22][22], tecla;   //matriz de coordenadas e tecla de movimento
    int meteor[2][3];

    for (i=0; i<2; i++)
    {
        for(j=0; j<5; j++)
        {
            meteor[i][j] = 0;
        }
    }

    do{
        system("clear");
        cout<<"pontos = "<<pontos;

        ran = rand()%(3)+1;
        ran2 = rand()%(20)+2;


        //IMPRESSAO MATRIZ METEOR
        /*for (i=0; i<2; i++)
        {

            for(j=0; j<5; j++)
            {
                cout<<meteor[i][j]<<" ";
            }
            cout<<"\n";
        }
        //IMPRESSAO MATRIZ METEOR
        */

        for (i=0; i<1; i++)
        {
            for(j=0; j<ran; j++)
            {
                if (meteor[0][j]==0)
                {
                    meteor[0][j]=1;
                    meteor[1][j]=ran2;
                    break;
                }
                if (meteor[1][j+1] == meteor[1][j])
                {
                    meteor[1][j+1] = meteor[1][j+1]+1;
                }
            }
            cout<<"\n";
        }

        for (i=0; i<1; i++)
        {
            for(j=0; j<3; j++)
            {
                if (meteor[i][j]!=0)
                    meteor[i][j] = meteor[i][j] + 1;
                if (meteor[0][j]==20)
                {
                    meteor[0][j]=0;
                    meteor[1][j]=0;
                    pontos = pontos -5;
                }

                if (((bx>=meteor[0][j]-1) && (bx<=meteor[0][j]+1)) && (by==meteor[1][j]))
                {
                    pontos = pontos + 3;
                    bx=0;
                    by=0;
                    meteor[0][j]=0;
                    meteor[1][j]=0;
                }
            }
        }



        if(bx<=1)   //desaparece com a bala caso a mesma atinja o topo da tela
        {
            bx=0;
            by=0;
        }

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
                        tela[meteor[0][l]][meteor[1][l]] = '*';//define a posição do meteoro em todas as interações
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
            bx=20;
            by=py;
            bx = bx-1;
        }
        bx = bx-1;
        //TECLAS DE MOVIMENTO DA BALA

    }
    while(pontos>0);

    if(pontos<=0)
        cout<<"Game Over";
}

