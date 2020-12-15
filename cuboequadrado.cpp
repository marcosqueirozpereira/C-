#include <iostream>
#include <locale>
using namespace std;
int main()
{
  setlocale(LC_ALL, "ptb");
  float numerox, numeroaoquadrado, numeroaocubo;
  cout <<"Informe o numero que deseja saber elevado ao quadrado e ao cubo: ";
  cin >> numerox;
  numeroaoquadrado=numerox*numerox;
  numeroaocubo=numerox*(numerox*numerox);
  
  cout <<" O valor do numero ao quadrado é " <<numeroaoquadrado <<endl;
  
  cout <<" O valor do numero ao cubo é " <<numeroaocubo;
}
