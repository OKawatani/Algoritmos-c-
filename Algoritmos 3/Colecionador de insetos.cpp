#include<iostream>
#include<cstdlib>
using namespace std;

struct Inseto
{
    string nome;
    double tamanho;
};

void bubbleSort(Inseto dados[], int n)
{
    int mudancas = 0;
    int tamanho;
    string nome;

    for(int i = n-1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(dados[j].tamanho > dados[j+1].tamanho)
            {
                tamanho = dados[j].tamanho;
                dados[j].tamanho = dados[j+1].tamanho;
                dados[j+1].tamanho = tamanho;
                nome = dados[j].nome;
                dados[j].nome = dados[j+1].nome;
                dados[j+1].nome = nome;
                mudancas++;
            }
        }

        if (mudancas <= 1 )
        {
            break;
        }
    }
}


int main()
{
    Inseto dados[10];

    int n; 

    cout << "Digite o numero de insetos: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o tamanho do " << i+1 << " inseto: " << endl;
        cin >> dados[i].tamanho;

        cout << "Digite o nome do " << i+1 << " inseto: " << endl;
        cin >> dados[i].nome;
        
        system("cls");
    }

    bubbleSort(dados, n);

    system("cls");

    cout << "Insetos ordenados por tamanho:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Inseto " << i+1 << ": " << dados[i].nome << " - " << dados[i].tamanho << " cm" << endl;
    }


    // Complexidade do algoritmo: O(n^2) no pior caso, O(n) no melhor caso (quando os insetos já estão ordenados) e O(n^2) no caso médio. A complexidade espacial é O(1) para o Bubble Sort, pois é um algoritmo de ordenação in-place que não requer espaço adicional significativo além de algumas variáveis temporárias para a troca de elementos.
    return 0;
};