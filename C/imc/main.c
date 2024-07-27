/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    float altura, peso, sexo, alturaAoQuadrado, imc;
    printf("Vamos calcula seu IMC!\n");
    printf("para isso precisamos de algumais informacoes suas!\n");
    printf("primeiro me informe o seu sexo, '1' para masculino ou '2' para feminino:\n");
    scanf("%f", &sexo);
    printf("informe a sua idade:");
    scanf("%d", &idade);
    printf("informe a sua altura(no formato 1.70):");
    scanf("%f", &altura);
    printf("informe a sua peso (no formato 85.0):");
    scanf("%f", &peso);
    alturaAoQuadrado = altura*altura;
    imc = peso/alturaAoQuadrado;
    if(sexo==1)
        printf("seu IMC e: %f\n\n",imc );
    if(sexo==2)
        printf("seu IMC e: %f\n\n",imc );
        printf("IMC - CLASSIFICAÇÃO: \n Menor que 18.5 - Abaixo do peso; \n Entre 18.5 e 24.9 - Peso normal; \n Entre 25.0 e 29.9 - Pré-obesidade ; \n Entre 30.0 e 34.9 - Obesidade Grau 1; \n Entre 35.0 e 39.9 - Obesidade Grau 2; \n Acima de 40 - Obesidade Grau 3; \n fonte: OMS ( Organização Mundial da Saude ). Última consulta em 16-01-2024.");
        
    return 0;
}
