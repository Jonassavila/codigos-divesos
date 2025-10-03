#calculadora

# import biblioteca
import math

print("=== Calculadora ===")

# opções
print("Selecione a operação:")
print("1. Adição")
print("2. Subtração")
print("3. Multiplicação")
print("4. Divisão")
print("5. Raiz Quadrada")
print("6. Potência")
print("0. Sair")

# dicionário para nome das operações
nomes_operacoes = {
    "1": "Adição",
    "2": "Subtração",
    "3": "Multiplicação",
    "4": "Divisão",
    "5": "Raiz Quadrada",
    "6": "Potência"
}

# função para formatar números
def formatar_numero(resultado):
    if resultado == int(resultado):
        return str(int(resultado))
    else:
        return str(resultado)
 
# Loop principal
while True:
    opção = input("Digite a opção desejada: ")

    if opção == "0":  # sair
        print("Saindo...")
        break
    elif opção == "1":  # adição
        print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")
        num1 = float(input("Digite o primeiro número: "))
        num2 = float(input("Digite o segundo número: "))
        resultado = num1 + num2
        print(f"Resultado da adição: {formatar_numero(num1)} + {formatar_numero(num2)} = {formatar_numero(resultado)}")
    elif opção == "2":  # subtração
        print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")
        num1 = float(input("Digite o primeiro número: "))
        num2 = float(input("Digite o segundo número: "))
        resultado = num1 - num2
        print(f"Resultado da subtração: {formatar_numero(num1)} - {formatar_numero(num2)} = {formatar_numero(resultado)}")
    elif opção == "3":  # multiplicação
        print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")
        num1 = float(input("Digite o primeiro número: "))
        num2 = float(input("Digite o segundo número: "))
        resultado = num1 * num2
        print(f"Resultado da multiplicação: {formatar_numero(num1)} * {formatar_numero(num2)} = {formatar_numero(resultado)}")
    elif opção == "4":  # divisão
        print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")
        num1 = float(input("Digite o dividendo: "))
        num2 = float(input("Digite o divisor: "))
        if num2 != 0:  # evitar divisão por zero
            resultado = num1 / num2
            print(f"Resultado da divisão: {formatar_numero(num1)} / {formatar_numero(num2)} = {formatar_numero(resultado)}")
        else:
            print("Erro: Divisão por zero não é permitida.")
    elif opção == "5":  # raiz quadrada
        print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")
        num = float(input("Digite um número: "))
        if num < 0: # evitar raiz quadrada de número negativo
            print("Erro: Não é possível calcular a raiz quadrada de um número negativo.")
        else:
            resultado = math.sqrt(num)
            print(f"Resultado da raiz quadrada: {formatar_numero(num)} = {formatar_numero(resultado)}")
    elif opção == "6":  # potência
        print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")
        base = float(input("Digite a base: "))
        expoente = float(input("Digite o expoente: "))
        resultado = math.pow(base, expoente)
        print(f"Resultado da potência: {formatar_numero(base)} elevado na {formatar_numero(expoente)} = {formatar_numero(resultado)}")
    else:  # opção inválida
        print("Opção inválida.")
        continue

    print("Deseja realizar outra operação? (s/n)")  # perguntar se deseja continuar
    resposta = input().lower()
    if resposta == "n":  # sair
        print("Saindo...")
        break
    elif resposta != "s" and resposta != "n":  # resposta inválida
        print("Resposta inválida.")
        continue
        # Reiniciar o loop

