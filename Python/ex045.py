# Jogo de jokenpô contra o computador

# Importando a biblioteca random
import random

# Definindo as opções em uma lista
itens = ["Pedra", "Papel", "Tesoura"]

# Escolhendo aleatoriamente a opção do computador
computador = random.choice(itens)

# Iniciando o jogo
print("Vamos jogar Jokenpô!")
print("Eu já escolhi!")
print("Agora é a sua vez de escolher:")
print("1 - Pedra")
print("2 - Papel")
print("3 - Tesoura")

# Recebendo a escolha do jogador
jogador = input("Digite o número da sua escolha: ")

# Verificando a escolha do jogador
if jogador == "1":
    print("Você escolheu Pedra.")
elif jogador == "2":
    print("Você escolheu Papel.")
elif jogador == "3":
    print("Você escolheu Tesoura.")
else:
    print("Escolha inválida.")

# Verificando o resultado
if jogador == computador:
    print(f"Empate! pois eu escolhi {computador}.")
elif (jogador == "1" and computador == "Tesoura") or (jogador == "2" and computador == "Pedra") or (jogador == "3" and computador == "Papel"):
    print(f"Você ganhou! pois eu escolhi {computador}.")
else:
    print(f"Você perdeu! pois eu escolhi {computador}.")