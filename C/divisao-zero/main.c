/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int n1, n2;
main(){
    
    printf("Informe um valor inteiro: ");
    scanf("%d",&n1);
    printf("informe outo valor inteiro: ");
    scanf("%d",&n2);
    printf("soma: %d\n",n1+n2);
    printf("produto: %d\n",n1*n2);
    printf("Diferenca: %d\n",n1-n2);
    
    if (n2!=0){
        printf("Divizao: %f\n", n1/(n2*1.0));
    }
    else
        printf("Erro: Divizao por zero!\n");

    return 0;
}
