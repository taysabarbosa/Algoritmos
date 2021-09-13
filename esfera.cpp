#include<stdio.h>

int main ()
{
	double raio, pi,VOLUME;
	
	scanf ("%lf", &raio );
	pi = 3.14159;
	VOLUME = (4.0/3)*3.14159*(raio*raio*raio);
	printf ("VOLUME = %.3lf\n",VOLUME);
	
	return 0; 
	
}
