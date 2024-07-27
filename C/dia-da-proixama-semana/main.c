/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dia;
    int diaDaProximaSemana;
    printf("Informe o dia de hoje:");
    scanf("%d", &dia);
    printf("O dia informado é: %d \n", dia );
    diaDaProximaSemana = dia +7;
    printf("O dia da proxima semana é %d", diaDaProximaSemana);

    return 0;
}
