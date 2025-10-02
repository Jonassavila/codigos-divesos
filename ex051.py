# Lê o primeiro termo e a razão de uma progressão aritmética e retorne os 10 primeiros termos.

# Variáveis
primeiro_termo = int(input('Digite o primeiro termo da PA: '))
razao = int(input('Digite a razão da PA: '))
decimo_termo = primeiro_termo + (10 - 1) * razao

# Laço de repetição
for i in range(primeiro_termo, decimo_termo + 1, razao):
    print(i)
    