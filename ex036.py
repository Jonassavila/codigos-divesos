valor_casa = float(input("Qual é o valor da casa? R$ "))
salario = float(input("Qual é o seu salário? R$ "))
anos = int(input("Em quantos anos você pretende pagar a casa? "))

prestacao_mensal = valor_casa / (anos * 12)

if prestacao_mensal > salario * 0.3:
    print("Empréstimo negado.")
else:
    print(f"Empréstimo aprovado, sua prestação mensal será de R$ {prestacao_mensal:.2f}.")