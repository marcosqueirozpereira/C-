#include <iostream>
using namespace std;
int main()
{
float dianasc, mesnasc, anonasc, diaatual, mesatual, anoatual, diasatuais, diasdeidade, anosdeidade;
cout <<"Qual o dia do nascimento?";
cin >>dianasc;
cout <<"Qual � seu m�s de nascimento? ";
cin >>mesnasc;
cout <<"Qual � seu ano de nascimento? ";
cin >>anonasc;
cout <<"Qual � o dia atual? ";
cin >>diaatual;
cout <<"Qual � o m�s atual? ";
cin >>mesatual;
cout <<"Qual � o ano atual? ";
cin >>anoatual;
diasdeidade=((anoatual*365)+(30*mesatual)+diaatual-(anonasc*365)+(30*mesnasc)+dianasc);
anosdeidade=diasdeidade/365;
cout <<"Voc� tem " <<anosdeidade << " anos" << " e " <<diasdeidade << " dias de idade ";
}
