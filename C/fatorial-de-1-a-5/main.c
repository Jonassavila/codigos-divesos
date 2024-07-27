/*fatorial de 1 a 5,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos  e programação*/

#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/

/*Função para calcular a fatorial de um número*/
int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main()/*Função main inicia a execução do programa*/
{
    setlocale(LC_ALL, "Portuguese");/*Seleção de idioma*/
    printf("Número\tFatorial\n");/*Imprime o cabeçalho */
    
    for (int i = 1; i <= 5; i++) {/*Loop de 1 a 5 para calcular e imprimir as fatoriais*/
        printf("%d\t%d\n", i, fatorial(i)); /*Imprime o número e sua fatorial*/
    }
    return 0;/*Indica que o programa terminou com sucesso*/
}/*fim da função main*/
