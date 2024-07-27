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
    int numeroZ;
    int numeroW;
    
    printf("Informe um número: ");
    scanf("%d", &numeroX);
    printf("o número digitado é %d \n", numeroX);
    numeroY = numeroX*0.03;
    numeroZ = numeroX*0.3;
    numeroW = numeroX*1.3;
    printf("3 porcento do  número digitado é %d \n", numeroY);
    printf("30 porcento do  número digitado é %d \n", numeroZ);
    printf("130 porcento do  número digitado é %d \n", numeroW);

return 0;
}
