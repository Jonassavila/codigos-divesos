/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temp;
 

    printf("informe sua temperatura:");
    scanf("%f", &temp);
    
    if(temp > 37.4) {
        printf("Você está com febre!");
    }
    if(temp < 35.4) {
    printf("Você está com hipotermia!");
    }
     else{
    printf("Sua temperatura está normal!");
    }
    
        return 0;
}
