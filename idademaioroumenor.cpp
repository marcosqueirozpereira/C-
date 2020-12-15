#include <iostream>
using namespace std;
int main()
{
	int idade, contador;
	for (contador=1;contador<=5;contador++);
	{
		cout<<"Qual a " <<"a. idade? ";
		cin>>idade;
		if (idade>=18)
		{ cout<<"Já pode tirar sua carteira de motorista!\n";}
		else
		{cout<<"Ainda não pode tirar sua carteira de motorista!\n";}
	}
}
