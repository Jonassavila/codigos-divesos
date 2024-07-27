/*Troca de valores de variáveis*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    int n1,n2;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n1);
    printf("Informe outro numero inteiro: ");
    scanf("%d", &n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("O primeiro número foi: %d\n", n1);
    printf("O segundo número foi: %d\n", n2);

    return 0;
}


