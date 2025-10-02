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

def formatar_numero(resultado):
    if resultado == int(resultado):
        return str(int(resultado))
    else:
        return str(resultado)

# dicionário para nome das operações
nomes_operacoes = {
    "1": "Adição",
    "2": "Subtração",
    "3": "Multiplicação",
    "4": "Divisão",
    "5": "Raiz Quadrada",
    "6": "Potência"
}

while True:
    try:
        opção = input("Digite a opção desejada: ")

        if opção == "0":
            print("Saindo...")
            break

        if opção in nomes_operacoes:
            print(f"\nVamos realizar a operação de {nomes_operacoes[opção]}!")

        if opção in ["1", "2", "3", "4", "6"]:
            num1 = float(input("Digite o primeiro número: "))
            num2 = float(input("Digite o segundo número: "))

            if opção == "1":
                resultado = num1 + num2
                print(f"Resultado da adição: {formatar_numero(num1)} + {formatar_numero(num2)} = {formatar_numero(resultado)}")
            elif opção == "2":
                resultado = num1 - num2
                print(f"Resultado da subtração: {formatar_numero(num1)} - {formatar_numero(num2)} = {formatar_numero(resultado)}")
            elif opção == "3":
                resultado = num1 * num2
                print(f"Resultado da multiplicação: {formatar_numero(num1)} * {formatar_numero(num2)} = {formatar_numero(resultado)}")
            elif opção == "4":
                if num2 == 0:
                    print("Erro: Divisão por zero não é permitida.")
                else:
                    resultado = num1 / num2
                    print(f"Resultado da divisão: {formatar_numero(num1)} / {formatar_numero(num2)} = {formatar_numero(resultado)}")
            elif opção == "6":
                resultado = math.pow(num1, num2)
                print(f"Resultado da potência: {formatar_numero(num1)} elevado na {formatar_numero(num2)} = {formatar_numero(resultado)}")

        elif opção == "5":
            num = float(input("Digite um número: "))
            if num < 0:
                print("Erro: Não é possível calcular a raiz quadrada de número negativo.")
            else:
                resultado = math.sqrt(num)
                print(f"Resultado da raiz quadrada: √{formatar_numero(num)} = {formatar_numero(resultado)}")

        elif opção not in nomes_operacoes and opção != "0":
            print("Opção inválida.")

    except ValueError:
        print("Erro: Entrada inválida. Certifique-se de digitar números válidos.")
    except Exception as e:
        print(f"Ocorreu um erro inesperado: {e}")
    else:
        print("Deseja realizar outra operação? (s/n)")
        resposta = input().lower()
        if resposta == "n":
            print("Saindo...")
            break
        elif resposta != "s":
            print("Resposta inválida. Encerrando por segurança.")
            break