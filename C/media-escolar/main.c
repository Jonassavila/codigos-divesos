/*Média escolar*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float media,nota1,nota2,nota3,nota4;
    printf("Vamos calcular a média do alununo para saber se o mesmo foi aprovado lembrando que a média é 70.\n");
    printf("Informe as quatro notas do aluno:\n");
    scanf("%f%f%f%f", &nota1,&nota2,&nota3,&nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("A média do aluno é: %.2f\n", media);
    if(media<70){
        printf("Infelizmente o aluno foi reprovado!");
    }else{
         printf("Parabéns o aluno foi aprovado!");
    }
    
    
    return 0;
}


