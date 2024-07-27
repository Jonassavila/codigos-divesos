/*juros compostos,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos  e programação*/

#include <stdio.h>/*Biblioteca padrão*/
#include <locale.h>/*Biblioteca de localização*/
#include <math.h>/*Biblioteca de funções matemáticas*/



int main()/*Função main inicia a execução do programa*/
{
    setlocale(LC_ALL, "Portuguese");/*Seleção de idioma*/
    double valor; /* valor em depósito */
    double principal = 1000.0; /* principal inicial */
    double taxa [] = {0.05, 0.06, 0.07, 0.08, 0.09, 0.10}; /* Array de taxa anual de juros */
    int ano; /*contador do ano*/
    
    
        printf( "%4s%25s\n", "Ano", "Valor da conta");/*cabeçalho de coluna da tabela de resultados*/
    for (int i = 0; i < 6; i++) { /*Loop externo para cada taxa de juros*/
        printf("\nTaxa de juros: %.0f%%\n", taxa[i] * 100); // Mostra a taxa de juros atual
            for (ano = 1 ; ano <=10; ano++){/*cula valores depósito para cada um dos dez anos*/ 
    
                valor = principal * pow(1.0 + taxa[i], ano);/*cula o novo valor em depósito para cada um dos dez anos*/ 

                printf( "%4d%21.2f\n", ano, valor );/* exibe uma linha da tabela */
            } /* fim do for 2*/
    } /* fim do for 1*/
   
    return 0; /* indica que o programa foi concluído com sucesso */

    
} /* fim da função main */


