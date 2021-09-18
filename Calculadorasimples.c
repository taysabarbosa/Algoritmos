#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    char operador;

    printf("Digite um valor: ");
    scanf("%d",&A);

    setbuf (stdin, NULL); // PARA LIMPAR O BUF DO TECLADO, STDIN É ENTRADA PADRÃO  - TECLADO

    printf("Digite outro valor: ");
    scanf("%d",&B);

    setbuf (stdin, NULL);

    printf("Digite o operador: (+ - * /):");
    scanf("%c",&operador);
    setbuf (stdin, NULL);

          if (operador=='+') {
      C=A+B;
   } else if (operador=='-') {
      C=A-B;
   } else if (operador=='*') {
      C=A*B;
   } else if (operador=='/') {
      C=A/B;
   } else{
        printf ("operador invalido");
   }
       printf (" O resultado e: %d",C);

    return 0;
}
