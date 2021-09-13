#include<iostream>
#include<stdio.h>

using namespace std;

int main ()
{
char nome;
double sf, tv;

scanf("%s %lf %lf",&nome,&sf,&tv);

printf ("TOTAL = R$ %.2f\n", (sf+tv*0.15));
	
	return 0;
}
