#include <stdio.h>

int main() {
   
int X;
float  Y, km, l, consumo; 

scanf ("%d %f", &X, &Y);
consumo = X/Y;
printf ("%4.3f km/l\n", consumo);

return 0; 
}
