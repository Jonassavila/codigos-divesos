# Jogo de adivinhação

# importa a biblioteca random para gerar números aleatórios
import random

# gera um número aleatório entre 0 e 10
numero_aleatorio = random.randint(0, 10)

# Variáveis para armazenar o número do usuário e o número de palpiteas
numero_usuario = -1
palpites = 0

# continua solicitando palpites até o usuário acertar o número
while numero_aleatorio != numero_usuario:

    # solicita ao usuário que adivinhe o número
    numero_usuario = int(input("Adivinhe o número (entre 0 e 10): "))

    # incrementa o contador de palpites
    palpites += 1

    # verifica se o palpite do usuário está correto
    if numero_usuario < numero_aleatorio:
        print("Tente um número maior.")
    elif numero_usuario > numero_aleatorio:
        print("Tente um número menor.")
    else:
        print("Parabéns! Você adivinhou o número.")
        print(f"Você acertou em {palpites} tentativas.")
