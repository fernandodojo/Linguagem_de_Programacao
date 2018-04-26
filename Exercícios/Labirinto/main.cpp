#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int **labirinto;
    int i, j, m, n, playerx, playery, fimx, fimy, count = 0;    
    char tecla;     
    cout<<"Digite o numero de linhas e o numero de colunas: ";
    cin>>m>>n;    
    labirinto = new int *[m];
    
    for (i=0; i<m; i++)
        labirinto[i]= new int [n];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            labirinto[i][j]=0;
            labirinto[i][0]=1;
            labirinto[i][n-1]=1;
            labirinto[0][j]=1;
            labirinto[m-1][j]=1;
            cout<<labirinto[i][j];
        }
        cout<<"\n";
    }
    system("clear");
    //inserindo paredes aleatorias
    for(i=0; i<(m*n)/10; i++)//the number of obstacle is the number of colluns multiplied by the number of line divided by four. Each means that 1/4 of all index is used.
    {
        labirinto[rand()%m][rand()%n] = 1; // o each interaction of the loop, is generated a new random number
    }
    playery=rand()%n-1; //gerando posição aleatoria do player no eixo y, fora da parede
    playerx=1; //gerando posição  do player no eixo x, fora da parede

    fimy=rand()%m-2; //gerando posição aleatoria da sauda no eixo y, fora da parede
    fimx=n-2; //gerando posição da saida no eixo x, fora da parede

    labirinto[playery][playerx] = 2; //valor 2 representa o player
    labirinto[fimy][fimx] = 3; //valor 3 representa o fim

    //IMPRESSAO
    do {
        //count = 0;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if (labirinto[i][j]==0) //conversão para impressao de caracteres
                    cout<<' ';
                if (labirinto[i][j]==1) //conversão para impressao de caracteres
                    cout<<'-';
                if (labirinto[i][j]==2) //conversão para impressao de caracteres
                    cout<<'@';
                if (labirinto[i][j]==3) //conversão para impressao de caracteres
                    cout<<'$';
            }
            cout<<"\n";
        }
        cin>>tecla;
        if (tecla=='d') //direita
        {
            if (labirinto[playery][playerx+1]==0 || labirinto[playery][playerx+1]==3)
            {
                labirinto[playery][playerx+1]=2; //move 1 posição no eixo x para a direita
                labirinto[playery][playerx]=0; // transforma em vazio a posição anterior
                playerx++;
            }
        }
        if (tecla=='a') //esquerda
        {
            if (labirinto[playery][playerx-1]==0 || labirinto[playery][playerx-1]==3)
            {
                labirinto[playery][playerx-1]=2;
                labirinto[playery][playerx]=0;
                playerx--;
            }
        }
        if(tecla == 'w') //paracima
        {
            if (labirinto[playery-1][playerx]==0 || labirinto[playery-1][playerx]==3)
            {
                labirinto[playery-1][playerx]=2;
                labirinto[playery][playerx]=0;
                playery--;
            }
        }
        if (tecla=='s') //para baixo
        {
            if (labirinto[playery+1][playerx]==0 || labirinto[playery+1][playerx]==3)
            {
                labirinto[playery+1][playerx]=2;
                labirinto[playery][playerx]=0;
                playery++;
            }
        }        
    }while(tecla!='p' && (playerx != fimx || playery != fimy)); // caso a tecla p seja pressionada ou o player alcançar a posicao exata do fim o jogo acaba
    cout<<"Fim do Jogo";
}
