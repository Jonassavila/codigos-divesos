# Soma de seis numeros pares digitados pelo usuário se algum deles foir impar será ignorado na soma

# Variáveis
soma = 0
cont = 0

# Laço de repetição
for i in range(1, 7):
    n = int(input('Digite um número: '))
    if n % 2 == 0:
        soma += n
        cont += 1
        if cont == 6:
            break
print(f'Você informou {cont} números e a soma dos pares foi {soma}.')
