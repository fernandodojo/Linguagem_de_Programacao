#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;


int main()
{
   int i, j, state=0, px = 22, py=21;
    char tela[23][41], tecla;

    //position = player(px,py)

    do{
        for(i=0; i<=23; i++)
        {
            for (j=0; j<=41; j++)
            {
                if (i==23 || j==0 || i==1 || j==41)
                    tela[i][j] ='#';
                else
                    tela[i][j] =' ';

                tela[px][py]= '_';
                cout<<tela[i][j];
            }
            cout<<"\n";

        }
        //cout<<"digite tecla de movimento";
        cout<<py;
        cin>>tecla;


        /*if (tecla=='w')
        {
            px = px-1;
        }
        if (tecla=='s')
        {
            px = px+1;
        }
        */

        if (py<=1)
           py=38;
        if (py>=39)
            py=2;


        if (tecla=='a')
        {
            py = py-1;
        }
        if (tecla=='d')
        {
            py = py+1;
        }



        //system("clear");

    }
    while(state==0);
    //system("clear");

}

