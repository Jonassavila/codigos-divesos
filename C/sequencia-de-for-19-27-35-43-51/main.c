/*Sequencia de for 19,27,35,43,51,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos  e programação*/

#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/



int main()/*Função main nícia a execução do programa*/
{

    setlocale(LC_ALL, "Portuguese");/*Seleção de idioma*/
    int n=0;/*Declara o contador*/
    for(n=19; n<=51; n+=8){/*Inicialização, condição de repetição e incremento*/
        printf("%d,",n);
    }/*Fim do for*/
    return 0;/*Indica que o programa terminou com sucesso*/
}/*fim da dunção main*/