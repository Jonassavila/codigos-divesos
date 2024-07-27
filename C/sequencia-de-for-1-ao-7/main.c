/*Sequencia de for 1 ao 7,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para a cadeira de Algoritmos de programação*/

#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/




int main()/*Função main nícia a execução do programa*/
{

    setlocale(LC_ALL, "Portuguese");/*Seleção de idioma*/
    int n=0;/*Declara o contador*/
    for(n=0; n<=7; n++){/*Inicialização, condição de repetição e incremento*/
        printf("%d,",n);
    }/*Fim do for*/
    return 0;/*Indica que o programa terminou com sucesso*/
}/*fim da dunção main*/