/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
    float num1, num2, num3, soma, produto, maior, menor;
    printf("digite um numero:");
    scanf("%f", &num1);
    printf("digite mais um numero:");
    scanf("%f", &num2);
    printf("digite mais um numero:");
    scanf("%f", &num3);
    printf("os numeros digutatos foram numero 1 %.0f, numero 2 %.0f e numero 3 %.0f!\n", num1, num2, num3);
    soma = num1+num2+num3;
    printf("a soma deles e:%.0f\n", soma);
    produto = num1*num2*num3;
    printf("o produto deles e:%.0f\n", produto);
    if(num1>num2){
        maior = num1;
        menor = num2;
    }else{
        maior = num2;
        menor = num1;
    }
    
    if(num3>maior){
        maior = num3;
    }else if(num3<menor){
        menor = num3;
    }
    printf("o maior destes numeros e:%.0f\n", maior);
    printf("o menor destes numeros e:%.0f\n", menor);
    
    return 0;

}
