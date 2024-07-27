/* Vetor de 10 posições que imprime o maior e o menos,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos e programação. */
#include <stdio.h> // Biblioteca padrão
#include <locale.h> // Biblioteca de localização

int main()// Inicio do programa 
{
    setlocale(LC_ALL, "Portuguese"); // Seleção de idioma

    int vetor[10];
    int maior, menor;

    // Lendo os valores do vetor
    printf("Digite 10 números para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializando maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];
    
    // Encontrando o maior e o menor elemento do vetor
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    // Exibindo o maior e o menor número
    printf("Maior número: %d\n", maior);
    printf("Maior número: %d\n", menor);
    


    return 0;//Fim do programa
}

