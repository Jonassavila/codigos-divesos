# Recebe um número e responda se ele é primo ou não

# Variável
numero = int(input('Digite um número: '))

# Verificação
if numero > 1:
    # Laço de repetição
    for i in range(2, int(numero ** 0.5) + 1):
        if numero % i == 0:
            print(f'O número {numero} não é primo pois é divisível por:.')
            break
    else:
        print(f'O número {numero} é primo.')
else:
    print(f'O número {numero} não é primo.')
for i in range(1, numero + 1):
    if numero % i == 0:
        print('\033[34m', end='')
    else:
        print('\033[m', end='')
    print(i, end=' ')