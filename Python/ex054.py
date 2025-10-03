# Leia a data de nascimento de sete pessoas e informe quantas são maiores de idade e quantas não são.

# Importa a biblioteca
from datetime import date

# Variáveis
maiores_de_idade = 0
menores_de_idade = 0

# Laço de repetição
for i in range(7):
    ano_nascimento = int(input(f'Digite o ano de nascimento da {i + 1}ª pessoa: '))
    idade = date.today().year - ano_nascimento
    if idade >= 18:
        maiores_de_idade += 1
    else:
        menores_de_idade += 1

# Resultados
print(f'Total de maiores de idade: {maiores_de_idade}')
print(f'Total de menores de idade: {menores_de_idade}')
