/*Nota fiscal da loja de informática, desenvolvida por Gabriel Gaudert e Jonas Silveira de Avila.
Graduandos do primeiro semestre de engenharia de computação da Universidade Feevale.
Disciplina: Algoritmos e programação. */
#include <stdio.h> // Biblioteca padrão.
#include <locale.h> // Biblioteca de localização.
#include <string.h> // Biblioteca contém funções, macros e definições para manipular cadeias de caracteres e regiões de memória.

#define NUM_PRODUTOS 10 // Define o numero de produtos.

// início de programa.
int main() {
  
    // Seleção de idioma.
		setlocale(LC_ALL, "Portuguese");
  
    // Valores dos produtos (em reais).
    float valores[NUM_PRODUTOS] = {1117.46, 959.99, 379.99, 1034.10, 4599.99, 11899.99, 559.00, 28.90, 1899.99, 719.00};

    // Nome dos produtos.
    char nomes[NUM_PRODUTOS][30] = {
        " Monitor Z21           ", " Teclado G915          ", " Mouse G502            ", " Impressora L3250      ", " Notebook Nitro 5      ",
        " Placa de Video RTX4090", " Memoria RAM 32Gb Fury ", " Pen Drive 64Gb        ", " HD Externo 10Tb       ", "Mouse Pad Gamer       "};

    // Variáveis para armazenar informações do cliente.
    char nome_cliente[50];
    char endereco_cliente[100];
  	char forma_pagamento[10];

    // Solicita o nome do cliente.
    printf("Digite o nome do cliente: ");
    fgets(nome_cliente, 50, stdin);
  
    // Remove o caractere de nova linha.
    nome_cliente[strcspn(nome_cliente, "\n")] = 0;

    // Solicita o endereço do cliente.
    printf("Digite o endereço do cliente (EX: Rua dos Garis, 406): ");
    fgets(endereco_cliente, 100, stdin);
  
    // Remove o caractere de nova linha.
    endereco_cliente[strcspn(endereco_cliente, "\n")] = 0;

    // Variáveis para armazenar as compras.
    int codigos_produtos[NUM_PRODUTOS];
    int quantidades[NUM_PRODUTOS];
    int num_itens = 0;
    char continuar_comprando = 's';

    // Apresenta a lista de produtos e seus códigos.
    printf("\nLista de produtos:\n");
    for (int i = 0; i < NUM_PRODUTOS; i++) {
        printf("Código %d: %s - R$ %.2f\n", i + 1, nomes[i], valores[i]);
    }

    // Loop para compra.
    while (continuar_comprando == 's' || continuar_comprando == 'S') {

      	  // Solicita o código do produto.
       		 int codigo_produto;
        do {
            printf("\nDigite o código do produto que deseja comprar (1-10): ");
            scanf("%d", &codigo_produto);
            if (codigo_produto < 1 || codigo_produto > 10) {
                printf("Erro: Código de produto inválido, tente novamente.\n");
            }
        } while (codigo_produto < 1 || codigo_produto > 10);
      
       // Solicita a quantidade do produto.
        int quantidade;
        do {
            printf("Digite a quantidade de unidades que deseja comprar: ");
            scanf("%d", &quantidade);
            if (quantidade <= 0) {
                printf("Erro: Quantidade deve ser maior que zero, tente novamente.\n");
            }
        } while (quantidade <= 0);

        // Armazena o código e a quantidade dos produtos.
        codigos_produtos[num_itens] = codigo_produto;
        quantidades[num_itens] = quantidade;
        num_itens++;

        // Pergunta se deseja continuar comprando.
       do {
            printf("Deseja continuar comprando? (s/n): ");
            scanf(" %c", &continuar_comprando);
            if (continuar_comprando != 's' && continuar_comprando != 'S' && continuar_comprando != 'n' && continuar_comprando != 'N') {
                printf("Erro: Entrada inválida, digite 's' para sim ou 'n' para não.\n");
            }
        } while (continuar_comprando != 's' && continuar_comprando != 'S' && continuar_comprando != 'n' && continuar_comprando != 'N');

    } while (continuar_comprando == 's' || continuar_comprando == 'S');
    
 			// Solicita a forma de pagamento.
    do {
        printf("\nEscolha a forma de pagamento (Opções dinheiro ou pix): ");
        scanf("%s", forma_pagamento);
        if (strcmp(forma_pagamento, "dinheiro") != 0 && strcmp(forma_pagamento, "pix") != 0) {
            printf("Erro: Forma de pagamento inválida, tente novamente.\n");
        }
    } while (strcmp(forma_pagamento, "dinheiro") != 0 && strcmp(forma_pagamento, "pix") != 0);

  
    // Calcula o valor total das compras.
    float valor_total = 0;
    for (int i = 0; i < num_itens; i++) {
        valor_total += valores[codigos_produtos[i] - 1] * quantidades[i];
    }

    // Imprime a nota fiscal.
    printf("\n----------------- Nota Fiscal --------------------\n");
    printf(" Cliente:  %s\n", nome_cliente);
    printf(" Endereço: %s\n", endereco_cliente);
    printf(" Itens Comprados:\n Produto:                Quantidade:  Valor:\n");
    for (int i = 0; i < num_itens; i++) {	
        printf("%s           %d   R$ %.2f\n", nomes[codigos_produtos[i] - 1], quantidades[i], valores[codigos_produtos[i] - 1] * quantidades[i]);
        
    }
    printf(" Valor total:                         R$ %.2f\n", valor_total);
    printf(" Forma de pagamento:                  %s\n", forma_pagamento);
    printf("--------------------------------------------------\n");
    
    return 0;//Fim do programa.
}
    