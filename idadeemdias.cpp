#include<stdio.h>

using namespace std;

int main (){
int idade, ano, mes, dias;

scanf ("%d", &idade);
ano = (idade / 365);
mes = ( idade%365)/30;
dias = (idade % 365)%30;
printf ("%d ano(s)\n", ano);
printf ("%d mes(es)\n", mes);
printf ("%d dia(s)\n", dias);
 
 return 0;
}
