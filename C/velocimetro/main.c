/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float velocidade;
 
    printf("informe sua velocidade:");
    scanf("%f", &velocidade);
    

    if(velocidade > 110) {
        printf("Você está a cima do limite permitido!");
    }else
    if(velocidade < 55) {
    printf("Você está está a baixo do limite permitido!");
    }
    else{
    printf("Voce esta dentro do limite permitido!");
    
    }
    
   return 0;
}