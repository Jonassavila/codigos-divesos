/*Conversão de temperatura de graus Fahrenheit em graus Celsius*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float grausCelsius,grausFahrenheit;
    printf("Aqui Você vai converter graus Fahrenheit em graus Celsius!\n");
    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &grausFahrenheit);
    grausCelsius = ((grausFahrenheit-32)*5)/9;
    printf("A temperatura em graus Celsius e: %.0f°C\n", grausCelsius);

    return 0;
}


