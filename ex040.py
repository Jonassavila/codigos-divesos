nota1 = float(input("Digite a primeira nota do aluno: "))
nota2 = float(input("Digite a segunda nota do aluno: "))
media = (nota1 + nota2) / 2
print(f"A média é: {media}")
if media < 5:
    print("O aluno foi reprovado.")
elif media >= 5 and media < 7:
    print("O aluno está de recuperação.")
else:
    print("O aluno foi aprovado.")
