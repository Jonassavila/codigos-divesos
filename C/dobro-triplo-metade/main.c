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
    
        
    printf("Informe um número: ");
    scanf("%d", &numeroX);
    printf("o número digitado é %d\n", numeroX);
    printf("o quadrado do  número digitado é %d\n", numeroX *numeroX);
    printf("o dobro do  número digitado é %d\n", numeroX *2);
    printf("o triplo do  número digitado é %d\n", numeroX *3);
    printf("a metade do  número digitado é %d\n", numeroX /2);

return 0;
}