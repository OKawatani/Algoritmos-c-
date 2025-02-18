#include<iostream>
using namespace std;

void isertionSort(int vetor[],int tamanho)
{
	int i,j;
	int chave;
	
	for(j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		
		i = j - 1;
		
		while((i >= 0) && (vetor[i] < chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
	
		}
		vetor[i+1] = chave;
	}
	
}



int main()
{
	int v[50],v1,tamanho = 0;
	
	for(int i = 0; i < 100; i++)
	{
		cin >> v1;

		if(v1 != 0)
		{
			v[i] = v1;
			tamanho++;
		}
		else
		{
			break;
		}
		
	}
	
	isertionSort(v,tamanho);
	
	for(int i = 0; i < tamanho; i++)
	{
		cout << v[i] << " ";
	}
	
	
	return 0;
}
