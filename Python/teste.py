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
    
# solicitar opção inicial
opcao = input("Escolha a operação desejada: ")

# função para calcular operações
def calcular(opção, num1, num2=None):
    match opção:
        case "1":  # adição
            return num1 + num2
        case "2":  # subtração
            return num1 - num2
        case "3":  # multiplicação
            return num1 * num2
        case "4":  # divisão
            if num2 != 0:  # evitar divisão por zero
                return num1 / num2
            else:
                return "Erro: Divisão por zero não é permitida." # mensagem de erro
        case "5":  # raiz quadrada
            if num1 < 0: # evitar raiz quadrada de número negativo
                return "Erro: Não é possível calcular a raiz quadrada de um número negativo." # mensagem de erro
            return math.sqrt(num1)
        case "6":  # potência
            return math.pow(num1, num2)
        
# Loop principal
while opcao != "0":
    if opcao in nomes_operacoes:
        print(f"\nVamos realizar a operação de {nomes_operacoes[opcao]}!")

        if opcao in ["1", "2", "3", "4", "6"]:  # operações que precisam de dois números
            num1 = float(input("Digite o primeiro número: "))
            num2 = float(input("Digite o segundo número: "))
            resultado = calcular(opcao, num1, num2)

            if isinstance(resultado, str):# mensagem de erro divisão por zero
                print(resultado)
            else:
                # dicionário para símbolos das operações
                operadores = {
                    "1": "+",
                    "2": "-",
                    "3": "*",
                    "4": "/",
                    "6": "^"
                }
                operador = operadores[opcao] # obtém o símbolo da operação
                print(f"Resultado da {nomes_operacoes[opcao].lower()}: {formatar_numero(num1)} {operador} {formatar_numero(num2)} = {formatar_numero(resultado)}")
        
        elif opcao == "5": # raiz quadrada
            num = float(input("Digite um número: "))
            resultado = calcular(opcao, num)
            
            if isinstance(resultado, str): # mensagem de erro raiz quadrada de número negativo
                print(resultado)
            else:
                print(f"Resultado da raiz quadrada: √{formatar_numero(num)} = {formatar_numero(resultado)}")
    else:
        print("Opção inválida. Tente novamente.")
    # solicitar nova opção
    opcao = input("\nEscolha a operação desejada (ou 0 para sair): ")
    