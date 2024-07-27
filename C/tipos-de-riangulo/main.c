/*Tipos de riangulo*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float l1,l2,l3;
    printf("Informe as medidas e para definirmos os tipos de triângulo\n");
    printf("Informe a medida do primeiro lado do triângulo:");
    scanf("%f", &l1);
    printf("Informe a medida do segundo lado do triângulo:");
    scanf("%f", &l2);
    printf("Informe a medida do terceiro lado do triângulo:");
    scanf("%f", &l3);
    if(l1<l2+l3 && l2<l1+l3 && l3<l1+l2)
        if(l1==l2 && l2==l3)
            printf("O tipo desse triângulo gulo é triângulo equilátero");
        else
            if(l1==l2 || l1==l3 || l3==l2)
                printf("O tipo desse triângulo é triângulo isósceles");
            else
                 printf("O tipo desse triângulo é triângulo escaleno");
    else
         printf("Essas medidas não formam triângulo!\n");
        

 
    
    return 0;
}
