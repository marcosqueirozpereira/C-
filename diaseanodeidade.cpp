#include <iostream>
using namespace std;
int main()
{
float dianasc, mesnasc, anonasc, diaatual, mesatual, anoatual, diasatuais, diasdeidade, anosdeidade;
cout <<"Qual o dia do nascimento?";
cin >>dianasc;
cout <<"Qual é seu mês de nascimento? ";
cin >>mesnasc;
cout <<"Qual é seu ano de nascimento? ";
cin >>anonasc;
cout <<"Qual é o dia atual? ";
cin >>diaatual;
cout <<"Qual é o mês atual? ";
cin >>mesatual;
cout <<"Qual é o ano atual? ";
cin >>anoatual;
diasdeidade=((anoatual*365)+(30*mesatual)+diaatual-(anonasc*365)+(30*mesnasc)+dianasc);
anosdeidade=diasdeidade/365;
cout <<"Você tem " <<anosdeidade << " anos" << " e " <<diasdeidade << " dias de idade ";
}
