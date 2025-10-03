# Leia o peso de cinco pessoas e mostre qual foi o maior e o menor peso

# Variáveis
maior_peso = 0
menor_peso = 0

# Laço de repetição
for i in range(5):
    peso = float(input(f'Digite o peso da {i + 1}ª pessoa: '))
    if i == 0:
        maior_peso = peso
        menor_peso = peso
    else:
        if peso > maior_peso:
            maior_peso = peso
        if peso < menor_peso:
            menor_peso = peso

# Resultados
print(f'O maior peso foi {maior_peso}kg.')
print(f'O menor peso foi {menor_peso}kg.')
