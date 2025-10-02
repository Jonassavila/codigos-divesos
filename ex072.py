# Tupla totalmente preenchida de zero a´te vinte
# Deve ler pelo teclado (entre 0 e 20) e mostralo por extenso
# Ex: 0 = zero, 1 = um, 2 = dois, etc

# Tupla com os números por extenso
num = ('zero', 'um', 'dois', 'três', 'quatro', 'cinco', 'seis', 'sete', 'oito', 'nove', 'dez', 'onze', 'doze', 'treze', 'quatorze', 'quinze', 'dezesseis', 'dezessete', 'dezoito', 'dezenove', 'vinte')

# loop
while True:
    n = int(input("Digite um número entre 0 e 20: "))
    if 0 <= n <= 20:
        print(f"Você digitou o número {num[n]}.")
        break
    print("Tente novamente.")