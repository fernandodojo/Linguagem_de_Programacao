#include <iostream>

using namespace std;

int main()
{
    int matrizA[3][3]={8,6,1,3,4,2,5,7,1};
    int matrizB[3][3];
    int i, j;


    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            cout<<matrizA[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            //matrizB[i][j] = 0;
            matrizB[i][j] = matrizA[i][j] * 2;
        }
    }

    cout<<"\n";

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            cout<<matrizB[i][j]<<" ";
        }
        cout<<"\n";
    }
}
