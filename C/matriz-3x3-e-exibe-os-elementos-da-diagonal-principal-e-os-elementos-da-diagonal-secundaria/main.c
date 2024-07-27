/* Matriz 3x3 e exibe os elementos da diagonal principal e os elementos da diagonal secundária
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos e programação. */
#include <stdio.h> // Biblioteca padrão
#include <locale.h> // Biblioteca de localização

int main()// Inicio do programa 
{
    setlocale(LC_ALL, "Portuguese"); // Seleção de idioma

    int matriz[3][3];

    // Função para ler um número inteiro positivo
    int lerNumeroPositivo() {
        int num;
        do {
            scanf("%d", &num);
            if (num <= 0) {
                printf("Por favor, insira um número inteiro positivo: ");
            }
        } while (num <= 0);
        return num;
    }

    // Lendo os valores da matriz
    printf("Digite os valores inteiros positivos para a matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            matriz[i][j] = lerNumeroPositivo();
        }
    }

    // Exibindo os elementos da diagonal principal
    printf("Elementos da diagonal principal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    // Exibindo os elementos da diagonal secundária
    printf("Elementos da diagonal secundária: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][2 - i]);
    }
    printf("\n");

    return 0;//Fim do programa
}



