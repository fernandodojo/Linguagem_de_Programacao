//8. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para 3 variáveis inteiras. Antes disso, verifique se as barras est ́ ao no lugar certo, e se DD, MM e AAAA são numéricos.
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
	char *data;
	char *achado;
	char **vetor;
	int dia, mes, ano;
	int i, cont=0;

	data = new char[20];
	cout<<"Digite uma data seguindo o formato DD/MM/AAAA , DD/MM/YYYY\n";
	cin.getline(data, 20);

    if(data[2]=='/' && data[5]=='/')        //verifica se o formato da data digitado obedece o formato requisitado.
    {
        for (i=0; i<strlen(data); i++)      //verifica e conta a quantidade de digitos que são numeros
        {
            if (isdigit(data[i]))           //verificação se é um digito numérico
                cont++;
        }

        if(cont==8)                         //verifica-se se existem de fato 8 numeros na data
        {
            vetor = new char*[3];           //alocação de um vetor de ponteiro com 3 posições

            achado = strtok(data,"/");      //achado aponta para inicio da posicao da string antes da barra
            i=0;
            while(achado!=NULL)
            {
                vetor[i]= achado;           //o vetor recebe os valores que se encontram entre as barras, cada parte da data entra em uma unica posição do vetor
                achado = strtok(NULL, "/"); //continua-se a verificar a existencia de novas barras, caso encontre o retorno é um ponteiro para posição de tudo ente barras
                i++;
            }

            dia	= atoi(vetor[0]);           //conversao de cada posicao do vetor em um inteiro
            mes	= atoi(vetor[1]);
            ano	= atoi(vetor[2]);

            cout<<"dia "<<dia<<"\n";
            cout<<"mes "<<mes<<"\n";
            cout<<"ano "<<ano<<"\n";
        }
        else
            cout<<"Data inválida, encerrando...\n";
    }
	else
        cout<<"Data inválida, encerrando...\n";

    return 0;
}
