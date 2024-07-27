/*Conversão de temperatura de graus Celsius em graus Fahrenheit*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float grausCelsius,grausFahrenheit;
    printf("Aqui Você vai converter graus Celsius em graus Fahrenheit!\n");
    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);
    grausFahrenheit = (9*grausCelsius+160)/5;
    printf("A temperatura em graus Fahrenheit é: %.0f°F\n", grausFahrenheit);

    return 0;
}
