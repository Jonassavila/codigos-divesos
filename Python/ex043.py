#calculadora de IMC
print("Bem-vindo à calculadora de IMC")

# Entrada com substituição de vírgula por ponto
peso = float(input("Digite o seu peso (kg): ").replace(",", "."))
altura = float(input("Digite a sua altura (m): ").replace(",", "."))

# Cálculo do IMC
imc = peso / (altura ** 2)
print(f"O seu IMC é: {imc:.2f}")

# Classificação do IMC
if imc < 10:
    print("IMC muito baixo. Verifique os dados digitados.")
elif imc < 18.5:
    print("Você está abaixo do peso.")
elif imc < 25:
    print("Você está com o peso ideal.")
elif imc < 30:
    print("Você está com sobrepeso.")
elif imc < 40:
    print("Você está com obesidade.")
elif imc <= 204:
    print("Você está com obesidade mórbida.")
else:
    print("IMC fora dos limites humanos conhecidos. Verifique os dados.")
    