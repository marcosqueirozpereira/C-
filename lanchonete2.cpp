#include <iostream>
using namespace std;
int main()
{
	int cod, qtde;
	float valor=0;
	char continua='S';
  cout<<"***Cardápio***\n";
  cout<<"100 - Hambúrguer – R$6,50\n";
  cout<<"101 - Cachorro-quente - R$4,50\n";
  cout<<"102 - Milk-shake - R$7,00\n";
  cout<<"103 - Pizza brotinho - R$8,00\n";
  cout<<"104 - Cheeseburguer - R$8,50\n";
  cout<<"Olá, informe o código do seu pedido: ";
  cin>>cod;
  cout<<"Qual a quantidade desejada? ";
  cin>>qtde;
 while (continua=='S')
 {
 	switch(cod)
 	{
case 100: valor+= qtde*6.50; break;
case 101: valor+= qtde*4.50; break;
case 102: valor+= qtde*7.00; break;
case 103: valor+= qtde*8.00; break;
case 104: valor+= qtde*8.50; break;
default:
	cout<<"Pedido inválido!!";
	 }
	 cout<<"Adicionar outro item? S / N ";
 cin>>continua;
 if (continua=='S')
 {
 	cout<<"***Cardápio***\n";
  cout<<"100 - Hambúrguer – R$6,50\n";
  cout<<"101 - Cachorro-quente - R$4,50\n";
  cout<<"102 - Milk-shake - R$7,00\n";
  cout<<"103 - Pizza brotinho - R$8,00\n";
  cout<<"104 - Cheeseburguer - R$8,50\n";
  cout<<"Olá, informe o código do seu pedido: ";
  cin>>cod;
  cout<<"Qual a quantidade desejada? ";
  cin>>qtde;
 }
 cout<<"Valor total a pagar R$ " <<valor;
 }
}
