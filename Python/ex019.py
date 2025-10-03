import random

a1 = input("Nome do primeiro aluno: ")
a2 = input("Nome do segundo aluno: ")
a3 = input("Nome do terceiro aluno: ")
a4 = input("Nome do quarto aluno: ")

alunos = [a1, a2, a3, a4]
sorteado = random.choice(alunos)
print(f'O aluno sorteado foi {sorteado}')