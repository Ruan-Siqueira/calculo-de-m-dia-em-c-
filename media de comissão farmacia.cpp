#include<iostream>
using namespace std;

int main(){

setlocale(LC_ALL,"Portuguese") ;//configura��o da l�ngua Portuguesa

cout<<fixed;

cout.precision(2);//configura��o das casas decimais, no caso 2 casas decimais


  float comi1, comi2, comi3, comi4, comi5, comi6, mediacom;

  cout<<"Informe o valor das comiss�es dos ultimos 6 meses para fazer a m�dia! "<<endl;
   cin>>comi1;
   cin>>comi2;
   cin>>comi3;
   cin>>comi4;
   cin>>comi5;
   cin>>comi6;

  mediacom = (comi1+comi2+comi3+comi4+comi5+comi6) / 6;
  


  cout<<"A m�dia de comiss�o mensal � de: R$ "<<mediacom<<endl;
  cout<<"O Ruan merece um aumento n� Jo�o Paulo?"<<endl;

}
