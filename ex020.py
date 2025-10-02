"""
import random

a1 = input("Nome do primeiro aluno: ")
a2 = input("Nome do segundo aluno: ")
a3 = input("Nome do terceiro aluno: ")
a4 = input("Nome do quarto aluno: ")

alunos = [a1, a2, a3, a4]
ordem = random.sample(alunos, k=4)
print(f'A ordem de apresentação será \nPrimeiro: {ordem[0]}')
print(f'Segundo: {ordem[1]}')
print(f'Terceiro: {ordem[2]}')
print(f'Quarto: {ordem[3]}')

"""

from random import shuffle

a1 = input("Nome do primeiro aluno: ")
a2 = input("Nome do segundo aluno: ")
a3 = input("Nome do terceiro aluno: ")
a4 = input("Nome do quarto aluno: ")

alunos = [a1, a2, a3, a4]
shuffle(alunos)
print(f'A ordem de apresentação será \nPrimeiro: {alunos[0]}')
print(f'Segundo: {alunos[1]}')
print(f'Terceiro: {alunos[2]}')
print(f'Quarto: {alunos[3]}')
