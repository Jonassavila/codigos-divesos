# Leia o nome, idade e sexo de cinco pessoas, e retorne a media de peso do grupo, qual o nome do homem mais velho e quantas mulheres tem menos de 20 anos.

# Variáveis
sexo = ''
maior_idade = 0
nome_maior_idade = ''
contador_mulheres = 0
media_idade = 0

# Laço de repetição
for i in range(5):
    nome = input(f'Digite o nome da {i + 1}ª pessoa: ')
    idade = int(input(f'Digite a idade da {i + 1}ª pessoa: '))
    sexo = input(f'A {nome} é homem ou mulher? (h/m) ').strip().lower()

    # Processamento
    media_idade += idade
    if idade > maior_idade and sexo == 'h':
        maior_idade = idade
        nome_maior_idade = nome
    if idade < 20 and sexo == 'm':
        contador_mulheres += 1

# Resultados
print(f'A média de idade do grupo é {media_idade / 5:.1f} anos.')
print(f'O homem mais velho é {nome_maior_idade} com {maior_idade} anos.')
print(f'O total de mulheres com menos de 20 anos é {contador_mulheres}.')
