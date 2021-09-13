#include<iostream>

using namespace std;

int main()
{ 
 int a,b,d,e;
 float c,f,TOTAL;
 
 scanf("%d %d %f",&a, &b, &c);
 scanf("%d %d %f",&d, &e, &f);
 TOTAL = b*c+e*f;  
 printf ("VALOR A PAGAR: R$ %.2f\n",TOTAL);
 
 return 0;
}
