/* Vetor de 10 posições que imprime quantidade de números negativos e a soma dos números positivos,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos e programação. */
#include <stdio.h> // Biblioteca padrão
#include <locale.h> // Biblioteca de localização

int main()// Inicio do programa 
{
    setlocale(LC_ALL, "Portuguese"); // Seleção de idioma

    float vetor[10];
    float numerosNegativos, numerosPositivos;

    // Lendo os valores do vetor
    printf("Digite 10 números para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    
    // Calculando a quantidade de números negativos e a soma dos positivos
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            numerosNegativos++;
        }else{
            numerosPositivos += vetor[i];
        }
    }
    
    // Exibindo resultado
    printf("A qualidade de números negativos é: %.0f\n", numerosNegativos);
    printf("A soma dos números positivos é: %.2f\n", numerosPositivos);
    


    return 0;//Fim do programa
}


