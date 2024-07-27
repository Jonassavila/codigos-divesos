/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int idade;
int main()
{
    printf("Informe a idade do atleta:");
    scanf("%d", &idade);
    switch(idade){
    case 1: (idade >= 6, idade <= 8);
        printf("A categoria do atleta e Infantil A");
        break;
    case 2: (idade >= 9, idade <= 12);
        printf("A categoria do atleta e Infantil B");
        break;
    case 3: (idade >= 13, idade <= 14);
        printf("A categoria do atleta e Juvenil A");
        break;
    case 4: (idade >= 15, idade <= 18);
        printf("A categoria do atleta e Juvenil B");
        break;
        default:
        printf("Pessoas com menos de 6 anos ou maiores de 18 anos não podem participar da competição!");
    }

    return 0;
}

