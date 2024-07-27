/*Cálculo de salário líquido*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float ht,vh,sb,pd,td,sl; /*Horas Trabalhadas, Valor por Hora, Salário Bruto, Percentual de Desconto, Total do Desconto, Salário Líquido*/
    printf("Vamos calcular seu salário líquido!\n");
    printf("Informe quantas horas você trabalha por mês: ");
    scanf("%f", &ht);
    printf("Agora já sabemos que você trabalha %.1f horas por mês, informe quanto você recebe por hora: ", ht);
    scanf("%f", &vh);
    sb = ht*vh;
    printf("Agora já sabemos que seu salário bruto é: R$%.2f por mês!\n", sb);
    printf("Qual o percentual de desconto no seu salário: ");
    scanf("%f", &pd);
    td = (sb/100)*pd;
    printf("O valor descontado no seu salário e: R$%.2f\n", td);
    sl = sb-td;
    printf("O valor líquido do seu salário e:  R$%.2f", sl);
    

    return 0;
}
