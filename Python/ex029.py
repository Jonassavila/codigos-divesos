velocidade = float(input("Qual é a velocidade do carro em km/h? "))

if velocidade > 80:
    print("Você foi multado!")
    multa = (velocidade - 80) * 7
    print(f"O valor da multa é R$ {multa:.2f}.")
else:
    print("Você está dentro do limite de velocidade.")
