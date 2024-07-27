/*Categoria do atleta,
Elaborado por Jonas Silveira de Avila,
Aluno do primeiro semestre de engenharia de programação, na universidade Feevale,
Para avaliação prática da cadeira de Algoritmos  e programação*/

#include <stdio.h> /*Biblioteca padrão*/
#include <locale.h> /*Biblioteca de localização*/



int main()/*Início do programa*/
{
    int idade;/*Variável*/
    setlocale(LC_ALL, "Portuguese");/*Seleção de idioma*/
    printf("Vamos selecionar a categoria adequada para faixa etária do atleta!\n");/*Mensagem de saudação*/
    printf("Informe a idade do atleta:");/*Mensagem para inserir o valor da variável*/
    scanf("%d", &idade);/*Registra o valor da variável*/
    if(idade <= 5){/*Se a variável for igual ou menor que 5*/
        printf("Pessoas com menos de 6 anos não podem participar da competição!");
    }
        if(idade >= 6 && idade <= 8){/*Se a variável for entre 6 e 8*/
        printf("A categoria do atleta é Infantil A");
    }
        if(idade >= 9 && idade <= 12){/*Se a variável for entre 9 e 12*/
        printf("A categoria do atleta é Infantil B");
    }
        if(idade >= 13 && idade <= 14){/*Se a variável for entre 13 e 14*/
        printf("A categoria do atleta é Juvenil A");
    }
        if(idade >= 15 && idade <= 18){/*Se a variável for entre 15 e 18*/
        printf("A categoria do atleta é Juvenil B");
    }
        if(idade >= 19){/*Se a variável for igual ou maior que 19*/
        printf("Pessoas maiores de 18 anos não podem participar da competição!");
    }
        
        
    return 0;/*Fim do programa*/
}


