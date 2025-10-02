numero = int(input("Digite um número inteiro: "))
print(f"escolha a base de conversão:")
print(f"1. Binário")
print(f"2. Octal")
print(f"3. Hexadecimal")
opcao = int(input("Digite a opção desejada: "))
if opcao == 1:
    print(f"{numero} em binário é {bin(numero)[2:]}.")
elif opcao == 2:
    print(f"{numero} em octal é {oct(numero)[2:]}.")
elif opcao == 3:
    print(f"{numero} em hexadecimal é {hex(numero)[2:]}.")
else:
    print("Opção inválida.")