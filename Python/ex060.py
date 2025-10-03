# Calcular fatorial de um número inserido pelo usuário


numero = int(input("Digite um número inteiro para calcular seu fatorial: "))

def formatar_fatorial(n):
    if n < 0:
        return "Fatorial não definido para números negativos."
    elif n == 0 or n == 1:
        return "1"
    else:
        resultado = 1
        fatores = []
        for i in range(n, 0, -1):
            resultado *= i
            fatores.append(str(i))
        return " x ".join(fatores) + f" = {resultado}"
    
print(f"O fatorial de {numero} é: {formatar_fatorial(numero)}")