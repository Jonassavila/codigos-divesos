/*Cálculo de variáveis */
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    int a,b,c,d;
    printf("Vamos fazer alguns cálculos com quatro números inteiros!\n");
    printf("Informe o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Informe o segundo número inteiro: ");
    scanf("%d", &b);
    printf("Informe o terceiro número inteiro: ");
    scanf("%d", &c);
    printf("Informe o quarto número inteiro: ");
    scanf("%d", &d);
    printf("Os números digitados são: %d, %d, %d, %d,\n", a,b,c,d);
    printf("O primeiro mais o segungo é: %d,\nO primeiro mais o terceiro é: %d,\nO primeiro mais o quarto é: %d,\nO primeiro multiplicado pelo segungo é: %d,\nO primeiro multiplicado pelo terceiro é: %d,\nO primeiro multiplicado pelo quarto é: %d,\nO segungo mais o terceiro é: %d,\nO primeiro mais o quarto é: %d,\nO segungo multiplicado pelo terceiro é: %d,\nO segungo multiplicado pelo quarto é: %d,\nO terceiro mais o quarto é: %d,\nO terceiro multiplicado pelo quarto é: %d", a+b, a+c, a+d, a*b, a*c, a*d, b+c, c+d, b*c, b*d, c+d, c*d);
    

    return 0;
}
