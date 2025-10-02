salario = float(input("Digite o salário: R$ "))
if salario <= 1250:
    print(f"O aumento será de R$ {salario * 0.15:.2f}.")
    print(f"O novo salário será de R$ {salario * 1.15:.2f}.")
else:
    print(f"O aumento será de R$ {salario * 0.10:.2f}.")
    print(f"O novo salário será de R$ {salario * 1.10:.2f}.")