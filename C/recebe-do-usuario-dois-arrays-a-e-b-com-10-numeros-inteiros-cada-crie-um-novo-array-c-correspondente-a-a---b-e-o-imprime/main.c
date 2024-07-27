/* Recebe do usuário dois arrays, A e B, com 10 números inteiros cada,Crie um novo array C, correspondente a A – B e o imprime,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos e programação. */
#include <stdio.h> // Biblioteca padrão
#include <locale.h> // Biblioteca de localização

int main()// Inicio do programa 
{
    setlocale(LC_ALL, "Portuguese"); // Seleção de idioma

    int A[10], B[10], C[10];

    // Lendo os valores do array A
    printf("Digite 10 números para o array A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // Lendo os valores do array B
    printf("Digite 10 números para o array A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }
    
    // Criando o array C correspondente a A - B
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }
    
    // Mostrando os dados do array C
    printf("Array C (A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", C[i]);
    }
    


    return 0;//Fim do programa
}


