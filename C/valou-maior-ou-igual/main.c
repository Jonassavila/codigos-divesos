/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int num1, num2;
int main()
{
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    if(num1==num2){
        printf("os valores sao iguais!\n");
    }else
        if(num1<num2){
        printf("o valor mairo é %d!\n", num2);
    }else
        if(num1>num2){
        printf("o valor mairo é %d!\n", num1);
        }

    return 0;
}
