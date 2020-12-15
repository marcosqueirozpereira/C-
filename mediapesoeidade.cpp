#include <iostream>
#include <locale>
using namespace std;
int main()
{
	int idade, total_entrevistados, total_peso, total_idade;
	float peso, media_peso, media_idade;
	peso=0;
	total_entrevistados=0;
	total_peso=0;
	total_idade=0;
	setlocale(LC_ALL, "portuguese");
	cout<<"Qual o peso do entrevistado? ";
	cin>>peso;
	
	while (peso!=0)
	{
	cout<<"Qual a idade do entrevistado? ";
	cin>>idade;
	total_entrevistados++;
		peso++;
		total_peso+=peso;
		total_idade+=idade;
		cout<<"Qual o peso de entrevistado? ";
		cin>>peso;
			}
media_peso=total_peso/total_entrevistados;
media_idade=total_idade/total_entrevistados;
cout<<"Foram entrevistados " <<total_entrevistados <<" pessoas.\n";
cout<<"O peso médio dos moradores é de " <<media_peso <<" quilos.\n";
cout<<"A idade média é de " <<media_idade <<" anos.\n";
	}
