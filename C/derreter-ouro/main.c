/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp;
 

    printf("informe a temperatura do ouro:");
    scanf("%d", &temp);
    
    if(temp < 1063) {
        printf("você precisa aumentar mais %d graus, para derreter o ouro!", 1064-temp);
    }
     else{(temp > 1064); 
    printf("Parabens o ouro esta liquido!");
    }
    
        return 0;
}

