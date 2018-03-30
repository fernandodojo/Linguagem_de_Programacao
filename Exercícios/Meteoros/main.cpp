#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main()
{
    int i, j, pontos=10, px = 20, py=21, rd, mx=1, my, bx=0, by=0;
    char tela[22][41], tecla;
    //int bullet[10];


    rd = rand()%40;
    my = rd;

    do{
        cout<<"pontos = "<<pontos;
        if (mx>=21)
        {
            pontos = pontos-5;
            mx = 2;
            rd = rand()%40;
            my = rd;
        }

        mx = mx+1;
        bx = bx-1;


        //cout<<mx<<my;
        for(i=0; i<22; i++)
        {
            for (j=0; j<41; j++)
            {
                if (i==21 || j==0 || i==1 || j==40)
                    tela[i][j] ='#';
                else
                    tela[i][j] =' ';

                tela[mx][my] = '*';
                tela[bx][by] = '|';
                tela[px][py]= '_';

                cout<<tela[i][j];
            }
            cout<<"\n";

        }
        //cout<<py;
        cin>>tecla;

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
        if (tecla =='l')
        {
            pontos = pontos-2
            bx=21;
            by=py;
            bx = bx-1;
        }
        if (bx==mx)
            pontos = pontos + 3
        //TECLAS DE MOVIMENTO DO PLAYER

    }
    while(pontos>0);

}

