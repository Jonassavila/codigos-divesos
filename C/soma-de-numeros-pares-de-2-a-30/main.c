/*Soma de números pares de 2 a 30,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos  e programação*/

#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/



int main()/*Função main inicia a execução do programa*/
{

    setlocale(LC_ALL, "Portuguese");/*Seleção de idioma*/
    int n=0;/*Declara o contador*/
    for(int i=2; i<=30; i+=2){/*Inicialização, condição de repetição e incremento*/
     n+=i;   /*Adiciona o número atual à soma*/
    }/*Fim do for*/
    
        printf("A soma dos números inteiros pares de 2 a 30 é: %d",n);/*Imprime na tala o resultado*/
    
    return 0;/*Indica que o programa terminou com sucesso*/
}/*fim da função main*/
