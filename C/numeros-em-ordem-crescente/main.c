/*Numeros em ordem crescente*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    int n1,n2,n3;
    printf("Informe um número inteiro:");
    scanf("%d", &n1);
    printf("Informe outro número inteiro:");
    scanf("%d", &n2);
    printf("Informe mais um número inteiro:");
    scanf("%d", &n3);
    if(n1<n2 && n1<n3 && n2<n3)
        printf("esses números em ordem crescente ficam:\n%d\n%d\n%d", n1,n2,n3);
    else
    if(n1<n2 && n1<n3 && n3<n2)
        printf("esses números em ordem crescente ficam:\n%d\n%d\n%d", n1,n3,n2);
    else
    if(n2<n1 && n2<n3 && n1<n3)
        printf("esses números em ordem crescente ficam:\n%d\n%d\n%d", n2,n1,n3);
        else
    if(n2<n1 && n2<n3 && n3<n1)
        printf("esses números em ordem crescente ficam:\n%d\n%d\n%d", n2,n3,n1);
    else
    if(n3<n1 && n3<n2 && n1<n2)
        printf("esses numeros em ordem crescente ficam:\n%d\n%d\n%d", n3,n1,n2);
     else
    if(n3<n1 && n3<n2 && n2<n1)
        printf("esses numeros em ordem crescente ficam:\n%d\n%d\n%d", n3,n2,n1);
        
    return 0;
}
