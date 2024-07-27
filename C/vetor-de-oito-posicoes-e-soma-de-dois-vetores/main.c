/*Vetor de oito posições e soma de dois vetores,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos e programação*/
#include <stdio.h> //Biblioteca padrão
#include <locale.h> //Biblioteca de localização

int main()//Inicio do programa 
{
    setlocale(LC_ALL, "Portuguese"); //Seleção de idioma

    float vetor[8];
    int x, y;

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%f", &vetor[i]);
    }

    // Lendo as posições X e Y
    printf("Digite a posição X (entre 0 e 7): ");
    scanf("%d", &x);
    printf("Digite a posição Y (entre 0 e 7): ");
    scanf("%d", &y);

    // Verificando se as posições são válidas
    if (x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Posições inválidas.\n");
        return 1;
    }

    // Calculando a soma dos valores nas posições X e Y
    float soma = vetor[x] + vetor[y];
    printf("A soma dos valores nas posições %d e %d é: %.2f\n", x, y, soma);

    return 0;//Fim do programa
}
