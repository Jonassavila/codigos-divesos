#Calculadora de pagamentos
valor_total = float(input("Digite o valor total da compra: "))

# Escolha da forma de pagamento
print("Escolha a forma de pagamento:")
print("1 - À vista em dinheiro")
print("2 - À vista no cartão")
print("3 - 2X no cartão")
print("4 - 3X ou mais no cartão")
opcao = input("Digite o número da opção desejada: ")

# Cálculo do valor final
if opcao == "1":
    desconto = 0.1
    valor_final = valor_total - (valor_total * desconto)
    print(f"Valor final com desconto: {valor_final:.2f}")
elif opcao == "2":
    desconto = 0.05
    valor_final = valor_total - (valor_total * desconto)
    print(f"Valor de cada parcela: {valor_final:.2f}")
elif opcao == "3":
    print(f"Valor de cada parcela: {valor_total:.2f}")
elif opcao == "4":
    juros = 0.2
    valor_final = valor_total + (valor_total * juros)
    print(f"Valor de cada parcela: {valor_final:.2f}")
else:
    print("Opção inválida.")
