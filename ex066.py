# Programa que lê varios número inteiros e só para quando o usuário digitar 999 e mostre a soma entre eles (desconsiderando o flag) e ua quantidade de números digitados.

# Declaração de variáveis
soma = 0
cont = 0
n = 0

# Loop principal
while True:
    n = int(input("digite um numero intero (Digite 999 para parar): "))
    if n == 999:
        break
    soma += n
    cont += 1

# Resultado final
print(f"A soma dos número digitados é {soma} e a quantidade de números digitados foi {cont}.")
