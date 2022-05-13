#include<iostream>
using namespace std;

int main(){

setlocale(LC_ALL,"Portuguese") ;//configuração da língua Portuguesa

cout<<fixed;

cout.precision(2);//configuração das casas decimais, no caso 2 casas decimais


  float comi1, comi2, comi3, comi4, comi5, comi6, mediacom;

  cout<<"Informe o valor das comissões dos ultimos 6 meses para fazer a média! "<<endl;
   cin>>comi1;
   cin>>comi2;
   cin>>comi3;
   cin>>comi4;
   cin>>comi5;
   cin>>comi6;

  mediacom = (comi1+comi2+comi3+comi4+comi5+comi6) / 6;
  


  cout<<"A média de comissão mensal é de: R$ "<<mediacom<<endl;
  cout<<"O Ruan merece um aumento né João Paulo?"<<endl;

}
