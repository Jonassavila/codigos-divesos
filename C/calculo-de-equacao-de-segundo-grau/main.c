/*Cálculo de equação de segundo grau*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/
#include <math.h> /*Biblioteca de funções matematicas*/

int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float a,b,c,delta,r1,r2;
    printf("Vamos calcular uma equação de segundo grau!\n");
    printf("Informe um número inteiro para A:");
    scanf("%f", &a);
    printf("Informe outro número inteiro para B:");
    scanf("%f", &b);
    printf("Informe mais um número inteiro para C:");
    scanf("%f", &c);
    if(a==0){
    printf("Esse números não formam uma equação de segundo grau, pois A não pode ser zero!");
    }else{
    printf("Com esses números a formula inificial fica: %.0fx²+%.0fx+%.0f=0\n",a,b,c);
        delta = (b*b) - (4*a*c);
        r1 = ( (-b) + (sqrt(delta)) ) / (2*a);
	    r2 = ( (-b) - (sqrt(delta)) ) / (2*a);
	if (delta <= 0 || a == 0 || b == 0 || c == 0){
	printf("Impossível calcular as raízes\n");
	    }else{
	    printf("A raiz 1 = %.5lf\n", r1);
    	printf("A raiz 2 = %.5lf\n", r2);
    	
    }
    }
    return 0;
}


