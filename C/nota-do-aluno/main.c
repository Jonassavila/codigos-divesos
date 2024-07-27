/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  float nota1, nota2, nota3, media;
  printf ("Digite a primeira nota do aluno:");
  scanf ("%f", &nota1);
  nota1 = nota1*2;
  printf ("Digite a segunda nota:");
  scanf("%f", &nota2);
  nota2 = nota2*3;
  printf("Digite a terceira nota:");
  scanf("%f", &nota3);
  nota3 = nota3*5;
  media = (nota1+nota2+nota3)/10;
  printf("a media desse aluno ficou:%.2f", media);


  return 0;
}

