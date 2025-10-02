print("Conversor de bases numéricas")
print(f"escolha o tipo de conversão:")
print(f"1. Binário para Hexadecimal")
print(f"2. Octal para Hexadecimal")
print(f"3. Hexadecimal para Binário")
print(f"4. Hexadecimal para Octal")
print(f"5. Decimal para Hexadecimal, Binário e Octal")
opcao = int(input("Digite a opção desejada: "))
if opcao == 1:
    numero = input("Digite o número binario a ser convertido: ")
    print(f"Esse {numero} binario convertido para hexadecimal é {hex(int(numero, 2))[2:]}.")
elif opcao == 2:
    numero = input("Digite o número octal a ser convertido: ")
    print(f"Esse {numero} octal convertido para hexadecimal é {hex(int(numero, 8))[2:]}.")
elif opcao == 3:
    numero = input("Digite o número hexadecimal a ser convertido: ")
    print(f"Esse {numero} hexadecimal convertido para binário é {bin(int(numero, 16))[2:]}.")
elif opcao == 4:
    numero = input("Digite o número hexadecimal a ser convertido: ")
    print(f"Esse {numero} hexadecimal convertido para octal é {oct(int(numero, 16))[2:]}.")
elif opcao == 5:
    numero = int(input("Digite o número decimal a ser convertido: "))
    print(f"Esse {numero} decimal convertido para hexadecimal é {hex(numero)[2:]}.")
    print(f"Esse {numero} decimal convertido para binário é {bin(numero)[2:]}.")
    print(f"Esse {numero} decimal convertido para octal é {oct(numero)[2:]}.")
else:
    print("Opção inválida.")
