# calculadora simples

# solicita dois números ao usuário
num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))

# exibe o menu de opções
print("Escolha a operação:")
print("[1] - somar")
print("[2] - multiplicar")
print("[3] - maior")
print("[4] - novos números")
print("[5] - sair do programa")

# define a função para realizar as operações
def calcular(num1, num2, opcao):
    match opcao:
        case 1:
            return num1 + num2
        case 2:
            return num1 * num2
        case 3:
            return max(num1, num2)
        case 4:
            return "novos números"
        case 5:
            return "sair do programa"
        case _:
            return "opção inválida"

# define a função para formatar o resultado
def formatar_resultado(resultado):
    if resultado == int(resultado):
        return str(int(resultado))
    else:
        return str(resultado)

# solicita a opção do usuário
opcao = int(input("Digite a opção desejada: "))

# executa o loop até o usuário escolher sair
while opcao != 5:
    # chama a função calcular
    resultado = calcular(num1, num2, opcao) 
    
    # trata as opções especiais
    if opcao == 4:
        num1 = float(input("Digite o primeiro número: "))
        num2 = float(input("Digite o segundo número: "))
        opcao = int(input("Digite a opção desejada: "))
    elif resultado == "opção inválida":
        print("Opção inválida. Tente novamente.")
    else:
        print(f"O resultado é: {formatar_resultado(resultado)}")
        opcao = int(input("Digite a opção desejada: "))
    continue
