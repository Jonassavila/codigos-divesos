"""
nome = input("Qual é o seu nome?")
dia = input("Qual é o dia do seu aniversário?")
mes = input("Qual é o mês do seu aniversário?")
ano = input("Qual é o ano do seu nascimento?")

print(f"Olá, {nome}! Prazer em conhecê-lo!")
print(f"A data do seu nascimento é em {dia} de {mes} de {ano}.")

numero1 = int(input("Digite um número: "))
numero2 = int(input("Digite outro número: "))
soma = numero1 + numero2
print(f"A soma de {numero1} e {numero2} é {soma}.")

import math
num = int(input("Digite um número: "))
raiz = math.sqrt(num)

print(f"A raiz quadrada de {num} é {raiz:.2f}.")

import random
num = random.randint(1, 1000)
print(f"O número aleatório gerado é {num}.")    

frase = "Curso em Vídeo Python"
print(frase.split())

nome = input("Digite o seu nome completo: ")
if nome == 'Jonas':
    print("Olá, Jonas!")
else:
    print("Olá, cadê o Jonas?")
    
print('\033[1;31;44mExercícios 032 a 034\033[m')

for i in range(0, 10):
    print(i, end=' ')
print('FIM')

c = 1
while c < 10:
    print(c)
    c += 1

n=1

while n != 0:
    n = int(input("Digite um número: "))
print("FIM")

cont = 1
while True:
    print(cont, '->', end=' ')
    cont += 1
    if cont == 100:
        break
print('FIM')

def titulo(txt):
    print("=" * 100)
    print(txt)
    print("=" * 100)

titulo("CURSO EM VÍDEO".center(100))


def soma(a, b):
    print(f"A = {a} e B = {b}")
    s = a + b
    print(f"A soma de A + B = {s}")

soma(4, 5)
soma(8, 9)
soma(2, 1)


def contador(*num):
    print(num)

contador(2, 1, 7)
contador(8, 0)
contador(4, 4, 7, 6, 2)


def dobra(lst):
    pos = 0
    while pos < len(lst):
        lst[pos] *= 2
        pos += 1


valores = [6, 3, 9, 1, 0, 2]
dobra(valores)
print(valores)


lanche = ("hamburguer", "suco", "pizza", "pudim", "batata frita")

print(len(lanche))

for cont in range(0, len(lanche)):
    print(f"Eu vou comer {lanche[cont]} na posição {cont}")

for comida in lanche:
    print(f"Eu vou comer {comida}")

for pos, comida in enumerate(lanche):
    print(f"Eu vou comer {comida} na posição {pos}")
    
print("Comi pra caramba!")

print(sorted(lanche))

a = (2, 5, 4)
b = (5, 8, 1, 2)
c = a + b
print(c)
print(c.count(5))
print(c.index(2, 3))

pessoas = ("João", 25, "M", 85.5)
print(pessoas)
del(pessoas)
print(pessoas)

"""