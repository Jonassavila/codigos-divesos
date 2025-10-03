import random

numero_aleatorio = random.randint(0, 5)
numero_usuario = int(input("Adivinhe o número (entre 0 e 5): "))

if numero_usuario == numero_aleatorio:
    print("Parabéns! Você adivinhou o número.")
else:
    print(f"Que pena! O número era {numero_aleatorio}.")