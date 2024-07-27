/* Vetor de 10 posições que conta os números pares,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos e programação. */
#include <stdio.h> // Biblioteca padrão
#include <locale.h> // Biblioteca de localização

int main()// Inicio do programa 
{
    setlocale(LC_ALL, "Portuguese"); // Seleção de idioma

    int vetor[10];
    int numerosPares = 0;

    // Lendo os valores do vetor
    printf("Digite 10 números para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificando quantos valores são pares
    for (int i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0 ) {
            numerosPares++;
        }
    }

    // Exibindo o resultado
    printf("A quantidade de números pares é: %d\n", numerosPares);
    
    return 0;//Fim do programa
}
