#include <iostream>
using namespace std;
int main() {
  int cod, qtde =0;
  const char *item;
  float valor;
  cout<<"***Cardápio***\n";
  cout<<"100 - Hamburguer - R$6,00\n";
  cout<<"101 - Tapioca - R$5,75\n";
  cout<<"102 - Suco - R$3,50\n";
  cout<<"103 - Pizza brotinho - R$5,80\n";
  cout<<"104 - Coxinha - R$4,80\n";
  cout<<"Olá, informe o código do seu pedido: ";
  cin>>cod;
  cout<<"Qual a quantidade desejada? ";
  cin>>qtde;
  switch (cod)
  {
case 100: item= "Hamburguer"; valor=qtde*6.00; break;
case 101: item= "Tapioca"; valor=qtde*5.75; break;
case 102: item= "Suco"; valor=qtde*3.50; break;
case 103: item= "Pizza_brotinho"; valor=qtde*5.80; break;
case 104: item= "Coxinha"; valor=qtde*4.80; break;

default: cout<<"\n Pedido inválido!!!"; break;
  }
  cout<<qtde << " x " << item << " = " << valor;
}
