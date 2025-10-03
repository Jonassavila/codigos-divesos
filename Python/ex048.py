# Somatorio todo os números impares que são multiplos de 3 no intervalo de 1 a 500

print('a soma dos números ímpares que são múltiplos de 3 no intervalo de 1 a 500 são:\n ')

# Laço de repetição
soma = 0
cont = 0
for i in range(1, 501):
    if i % 2 != 0 and i % 3 == 0:
        soma += i
        cont += 1
print(f'A soma de todos os {cont} valores solicitados é {soma}.')
