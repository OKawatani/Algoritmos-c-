#include<iostream>
#include<cstring>
using namespace std;

int cadastro(char usuario[], char senha[], char confirmacaosenha[])
{
	int confsenha = strcmp(senha, confirmacaosenha);
	int tam = strlen(usuario);
	int tamsenha = strlen(senha);
	int tamconf = strlen(confirmacaosenha);
	
	
	
	if(tam == 0)
	{
		return -1;
	}
	else if(tamsenha == 0)
	{
		return -1;
	}
	else if(tamconf == 0)
	{
		return -1;
	}
	
	if(confsenha == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
	
		
}
int login(char usuario[], char senha[])
{
   	char comp1[6] = strcpy(comp1, "jorge");
	char comp2[6] = strcpy(comp2, "jorge123");
	int tam = strlen(usuario);
	int tamsenha = strlen(senha);
	int conflogin = 
	
	
	
	if(tam == 0)
	{
		return -1;
	}
	else if(tamsenha == 0)
	{
		return -1;
	}
	
	if()
	
	
	

}



int main()
{
	char usuario[40], senha[40], senha2[40];
	
	cout << "Digite um email: " << endl;
	cin.getline(usuario, 40);
	
	cout << "Digite sua senha: " << endl;
	cin.getline(senha, 40);
	
	cout << "Digite sua senha novamente: " << endl;
	cin.getline(senha2, 40);
	
	cout << cadastro(usuario, senha, senha2) << endl;
	
	cout << "Digite seu email: " << endl;
	cin.getline(usuario, 40);
	
	cout << "Digite sua senha: " << endl;
	cin.getline(senha, 40); 
	 
	
	return 0;
}