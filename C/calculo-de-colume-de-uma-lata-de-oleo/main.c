/*Cálculo de colume de uma lata de óleo*/
#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/


int main()
{
    setlocale(LC_ALL, "Portuguese"); /*Seleção de idioma*/
    float volume,altura,raio;
    printf("Vamos calcular o volume da sua lata de óleo!\n");
    printf("Informe a altura da lata em centímetros: ");
    scanf("%f", &altura);
    printf("Informe o raio da lata em centímetros: ");
    scanf("%f", &raio);
    volume = 3.14159*raio*raio*altura;
    printf("O volume da lata é: %.2fcm³\n", volume);

    return 0;
}


