# Jogo de par ou impar, onde o usuário joga contra o computador. O jogo só para quando o jogador perder, mostrando o total de vitórias consecutivas que ele conquistou no final do jogo.
# importação de bibliotecas
from random import randint

# Declaração de variáveis
v = 0

# Titulo
print(f"{'='*20} JOGO DE PAR OU ÍMPAR {'='*20}")

# Computador escolhe um número
computador = randint(0, 11)

# Instruções para o jogador
print("O jogo só para quando você perder.")
print("Eu já escolhi um número, agora é a sua vez!")


# Loop principal
while True:
    jogador = int(input("Escolha um número inteiro: "))
    escolha = input("Par ou Ímpar? [P/I] ").strip().upper()[0]
    total = jogador + computador
    if escolha not in 'PI':
        print("Escolha inválida! Tente novamente.")
        continue
    if total % 2 == 0:
        resultado = "par"
    else:
        resultado = "ímpar"
    print(f"Você escolheu {jogador} e eu escolhi {computador}. A soma dos nossos números é {total}, é {resultado}.")
    if (escolha == 'P' and resultado == "par") or (escolha == 'I' and resultado == "ímpar"): # Jogador venceu
        print("Você venceu!")
        v += 1
    else: # Jogador perdeu
        print("Você perdeu!")
        print("GAME OVER!")
        print(f"Você teve {v} vitórias consecutivas.")
        break # Sai do loop
    computador = randint(0, 11) # Computador escolhe outro número