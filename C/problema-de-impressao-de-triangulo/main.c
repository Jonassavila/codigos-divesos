/*Problema de impressão de triângulo,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos  e programação*/

#include <stdio.h>/*Biblioteca padrão*/
#include <locale.h>/*Biblioteca de localização*/
#include <math.h>/*Biblioteca de funções matemáticas*/



int main()/*Função main inicia a execução do programa*/
{
    int linhas = 21; /*Número total de linhas*/
    int espacos = 0; /* Número de espaços iniciais*/
    /*Parte A*/
    printf("A)\n");/*Imprime na tela "A)"*/
    for (int i = 1; i <= linhas / 3 + 1; i++) {/*Estrutura de repetição inicial*/
        for (int j = 1; j <= espacos; j++) {/*Estrutura de repetição para os espaços*/
            printf(" ");/*Imprime na tela " "*/
        }
        for (int j = 1; j <= i; j++) {/*Estrutura de repetição para os asteriscos*/
            printf("*");/*Imprime na tela "*"*/
        }
        printf("\n");/*Imprime na tela uma nova linha*/
        
    }  

    /*Parte B*/
    printf("B)\n");/*Imprime na tela "B)"*/
    espacos -= 1; /*Ajuste para a parte intermediária*/
    for (int i = linhas / 3; i >= 1; i--) {/*Estrutura de repetição inicial*/
        for (int j = 1; j <= espacos; j++) {/*Estrutura de repetição para os espaços*/
            printf(" ");/*Imprime na tela " "*/
        }
        for (int j = 1; j <= i; j++) {/*Estrutura de repetição para os asteriscos*/
            printf("*");/*Imprime na tela "*"*/
        }
        printf("\n");/*Imprime na tela uma nova linha*/
        
    }  
    /*Parte C*/
    printf("C)\n");/*Imprime na tela "C)"*/
    espacos = 0; /*Ajuste para a parte intermediária*/
    for (int i = linhas / 3; i >= 1; i--) {/*Estrutura de repetição inicial*/
        for (int j = 1; j <= espacos; j++) {/*Estrutura de repetição para os espaços*/
            printf(" ");/*Imprime na tela " "*/
        }
        for (int j = 1; j <= i; j++) {/*Estrutura de repetição para os asteriscos*/
            printf("*");/*Imprime na tela "*"*/
        }
        printf("\n");/*Imprime na tela uma nova linha*/
        espacos += 1; /*Aumenta o número de espaços para a próxima linha*/
        
    }  

    /*Parte D*/
    printf("D)\n");/*Imprime na tela "D)"*/
    espacos = 6; /*Reinicia o número de espaços*/
    for (int i = 1; i <= linhas / 3; i++) {/*Estrutura de repetição inicial*/
        for (int j = 1; j <= espacos; j++) {/*Estrutura de repetição para os espaços*/
            printf(" ");/*Imprime na tela " "*/
        }
        for (int j = 1; j <= i; j++) {/*Estrutura de repetição para os asteriscos*/
            printf("*");/*Imprime na tela "*"*/
        }
        printf("\n");/*Imprime na tela uma nova linha*/
       espacos -= 1; // Aumenta o número de espaços para a próxima linha
    } /* fim dos estruturas de repetição*/
   
    return 0; /* indica que o programa foi concluído com sucesso */

    
} /* fim da função main */



