/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int numeroX;
    int numeroY;
    int somaDosNumeros;
    int produtoDosNumeros;
    int aDiferencaEntreOsNumeros;
    double aDivizaoDosNumeros;
        
    printf("Informe um número: ");
    scanf("%d", &numeroX);
    printf("Informe outro número: ");
    scanf("%d", &numeroY);
    printf("o primeiro número digitado é %d\n", numeroX);
    printf("o segundo número digitado é %d\n", numeroY);
    somaDosNumeros = numeroX + numeroY;
    printf("a soma deles  é %d\n", somaDosNumeros);
    produtoDosNumeros = numeroX * numeroY;
    printf("o produto deles  é %d\n", produtoDosNumeros);
    aDiferencaEntreOsNumeros = numeroX - numeroY;
    printf("a deferensa entre eles  é %d\n", aDiferencaEntreOsNumeros);
    aDivizaoDosNumeros = numeroX / numeroY;
    printf("a divizão entre eles  é %f\n", aDivizaoDosNumeros);
    if(aDivizaoDosNumeros==0)
    printf("Erro: divisao por zero!")

   
return 0;
}
