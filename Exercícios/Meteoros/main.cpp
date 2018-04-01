#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main()
{
    int i, j, l, k,  score=50, meteorcounter=0;     //indices, contagem de score
    int ran, ran2;                                  //numero aleatorio
    int playerx = 20, playery=11;                   //coordenadas x e y do player
    int bulletx=21, bullety=21;                     //coordenadas x e y da bala
    char map[22][22], key;                          //matriz de coordenadas e key de movimento
    int meteor[2][5];                               //matriz de coordenadas dos meteoros
    int bullet[2][20];                              //matriz de coordenadas das balas

    srand( time (NULL) );

    //MATRIZ DE COODENADAS DOS METEOROS
    for (i=0; i<2; i++) // matriz de coordenadas dos meteoros / fila 0 responsavel por guardar as coordenadas y, movimento descendente. fila 1 responsavel por guardar coordenadas aleatorias x.
    {
        for(j=0; j<5; j++)
        {
            meteor[i][j] = 0;
        }
    }
    //MATRIZ DE COODENADAS DOS METEOROS

    //MATRIZ DE COODENADAS DAS BALAS

    for (i=0; i<2;i++)
    {
        for(j=0; j<20;j++)
        {
            bullet[i][j] = 21;
        }
    }
    //MATRIZ DE COODENADAS DAS BALAS


    do{
        system("clear");
        cout<<"score = "<<score; //contagem de pontos

        if (meteorcounter <= 2) //controle pra gerar numero aleatorio
            ran = rand()%(5)+1;//gerador aleatorio entre 5 e 1 q define quantos meteoros seram acrescentados


        ran2 = rand()%(19)+2;//gerador aleatorio q define a coordenada x de posição do meteoro



        for (i=0; i<1; i++)
        {
            for(j=0; j<5; j++)
            {
                if (meteor[0][j]==0 && meteorcounter<=ran)//se a matriz de meteoro estiver com 0 esta automaticamente iniciara a coordenada y comř 1 e coordenada x aleatoria
                {
                    meteorcounter++; //acrescenta na contagem de meteoros na tela
                    meteor[0][j]=1;
                    meteor[1][j]=ran2;
                    break; //limita o aparecimento de apenas um meteoro por execução
                }
            }
            cout<<"\n";
        }


        for (i=0; i<1;i++)
        {
            for(j=0; j<20;j++)
            {
                if (bullet[0][j]!=21) //se a matriz de coordenadas estiver preenchida com valores diferentes de 21, essa condição permitira a mudança de coordenada
                    bullet[0][j] = bullet[0][j]-1;

                if (bullet[0][j]<=1)//se o valor de coordenada da bala for menor q 1, topo da tela, esta bala voltara a coordenada padrão
                    bullet[i][j] = 21;

                if((key=='l') && (bullet[i][j]==21))//se a matriz tiver valor padrão 21 e for pressionado tecla de disparo, a bala recebera as coordenadas do player
                {
                    bullet[0][j] = playerx;
                    bullet[1][j] = playery;
                    score = score-2;
                    break;
                }
            }
        }

        for (i=0; i<1; i++)
        {
            for(j=0; j<5; j++)
            {
                if (meteor[i][j]!=0)
                    meteor[0][j] = meteor[0][j] + 1;// permiti-se o movimento descendente do meteoro caso o mesmo não esteja na coordenada 0
                if (meteor[0][j]==21) //se o meteoro alcançar o fim da map, ele retorna pra sua coordenada padrão 0,0, e subtrai-se 5 score
                {
                    meteorcounter--; //decrementa na contagem do numero de meteoros na tela
                    meteor[0][j]=0; //reseta o meteoro pra coordenada padrão
                    meteor[1][j]=0;
                    score = score -5;
                }


                for (k=0; k<1;k++)
                {
                    for(l=0; l<20;l++)
                    {
                        if ((bullet[0][l]>=meteor[0][j]-1) && (bullet[0][l]<=meteor[0][j]+1) && (bullet[1][l]==meteor[1][j])) //condições para detecção de coolisão, e acrescimento de potução. Verifica-se a posição x = X da bala e meteoro, verifica-se Y-1>y e y<Y+1
                        {
                            score = score + 3;
                            bulletx=21; //coordenada padrão da bala
                            bullety=21; //coordenada padrão da bala
                            meteor[0][j]=0; //coordenada padrão do meteoro
                            meteor[1][j]=0; //coordenada padrão do meteoro
                            meteorcounter--; //decremento na contagem de meteoros na tela
                        }
                    }
                }
            }
        }


        for(i=0; i<22; i++)
        {
            for (j=0; j<22; j++)
            {
                if (i==21 || j==0 || i==0 || j==21) //imprime bordas da map
                    map[i][j] ='#';
                else
                    map[i][j] =' ';//preenche qualquer coisa q não seja a borda com espaços

                for (k=0; k<2; k++)
                {
                    for(l=0; l<5; l++)
                    {
                        if (meteor[k][l]!=0)
                            map[meteor[0][l]][meteor[1][l]] = '*';//define a representação de * para a coordenada definida pela matriz meteor dentro da matriz map
                    }
                }

                for (k=0; k<2;k++)
                {
                    for(l=0; l<20;l++)
                    {
                        if(bullet[0][l]!=21)
                        {
                            map[bullet[0][l]][bullet[1][l]] = '|';//define a posição da bala em todas as interações
                        }
                    }
                }
                map[playerx][playery]= '_';// define a posição do player em todas as interações
                cout<<map[i][j]; //impressão da matriz inteira
            }
            cout<<"\n";
        }

        cin>>key; // recebimento da letra para realizar uma ação pré programada

        //TELETRANPORTE AO SAIR DA map
        if (playery<=1)
           playery=19;
        if (playery>=20)
            playery=1;
        //TELETRANPORTE AO SAIR DA map

        //keyS DE MOVIMENTO DO PLAYER
        if (key=='a')
            playery = playery-1;
        if (key=='d')
            playery = playery+1;
        if (key=='s')
            playery = playery;
        //keyS DE MOVIMENTO DO PLAYER
    }
    while(score>0);

    if(score<=0)
        cout<<"Game Over";

}
