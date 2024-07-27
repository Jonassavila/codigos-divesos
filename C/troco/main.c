/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int valorDaCompra, valorPago;
 
    printf("informe o valor da compra: ");
    scanf("%d", &valorDaCompra);
    printf("informe o valor do pagamento em dinheiro: ");
    scanf("%d", &valorPago);

    if(valorPago < valorDaCompra) {
        printf("O valor é insuficiente! falta: %d\n", valorPago-valorDaCompra);
    }
    else{(valorPago > valorDaCompra);
        printf("O seu troco e: %d\n", valorPago-valorDaCompra);
    }
    
    
   return 0;
}