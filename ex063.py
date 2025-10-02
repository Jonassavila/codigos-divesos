# Lê numeros inteiros e retona uantos numeros foram digitados e a soma deles

# Variáveis
total = 0
soma = 0

# Laço de repetição
while True:
    numero = int(input("Digite um número (999 para parar): "))
    if numero == 999:
        break
    total += 1
    soma += numero
print(f"Você digitou {total} números e a soma entre eles é {soma}.")
