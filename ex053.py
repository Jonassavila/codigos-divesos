# Verifica se a frase é um palíndromo

# Variável
frase = input('Digite uma frase: ').strip().lower().replace(' ', '')

print(f'A frase "{frase}" ao contrário é "{frase[::-1]}".')

# Verificação
if frase == frase[::-1]:
    print('A frase é um palíndromo.')
else:
    print('A frase não é um palíndromo.')
