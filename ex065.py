# Lê números inteiros e retorna a média, o maior e o menor valor, e pergunta se o usuário quer continuar ou não.

# Variáveis
total = 0
soma = 0
maior = None
menor = None
continuar = 'S'

# Laço de repetição
while continuar == 'S':
    numero = int(input("Digite um número: "))
    total += 1
    soma += numero
    if maior is None or numero > maior:
        maior = numero
    if menor is None or numero < menor:
        menor = numero
    continuar = input("Quer continuar? [S/N] ").upper()

# resultados
if total > 0:
    media = soma / total
    print(f"A média dos números digitados é {media:.2f}.")
    print(f"O maior número digitado foi {maior}.")
    print(f"O menor número digitado foi {menor}.")
else:
    print("Nenhum número válido foi digitado.")