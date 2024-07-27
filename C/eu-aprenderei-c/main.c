/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int soma(int a, int b) {
return a + b;
}

int main() {
    
int a = 0, b = 0, result = 0;
printf("Vamos somar 2 valores!\n");
printf("Digite o primeiro valor da soma: ");
scanf("%d", &a);
printf("Digite o segundo valor da soma: ");
scanf("%d", &b);
result = soma(a, b);
printf("O resultado da soma eh: %d", result);
getch(); // Aguarda uma tecla para finalizar o programa
return 0;
}