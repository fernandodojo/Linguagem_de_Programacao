#include <iostream>
using namespace std;

int main()
{
    int i, j, temp=0;
    int vetor[10] = {-5, 10, 6, 9,-1, -9, 8, 3, 8, 3};

    for (i=0; i<10; i++)
        //[i] = rand()%-50;

    for (i=0; i<10; i++)
    {
        if (vetor[i]<0)
            temp++;
    }
    cout<<temp;

}
