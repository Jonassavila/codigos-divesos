print("Bem vindo ao sistema da confederação de natação!")
print("Aqui você poderá descobrir em qual categoria você se encaixa.")
idade = int(input("Digite a sua idade: "))
if idade <= 9:
    print("Você é da categoria mirin.")
elif idade > 9 and idade < 15:
    print("Você é da categoria infantil.")
elif idade > 14 and idade < 20:
    print("Você é da categoria júnior.")
elif idade > 19 and idade < 21:
    print("Você é da categoria sênior.")
else:
    print("Você é da categoria master.")

