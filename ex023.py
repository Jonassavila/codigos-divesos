while True:
    entrada = input("Digite um número entre 0000 e 9999: ")
    if entrada.isdigit() and len(entrada) <= 4:
        n = int(entrada)
        break
    print("Entrada inválida. um número entre 0000 e 9999.")

# Usando operações matemáticas
print(f"Unidade: {n % 10}")
print(f"Dezena: {n // 10 % 10}")
print(f"Centena: {n // 100 % 10}")
print(f"Milhar: {n // 1000}")

# Usando string com zfill
n_str = entrada.zfill(4)
print(f"Unidade: {n_str[3]}")
print(f"Dezena: {n_str[2]}")
print(f"Centena: {n_str[1]}")
print(f"Milhar: {n_str[0]}")