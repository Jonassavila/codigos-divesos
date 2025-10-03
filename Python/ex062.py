# Sequencia de fibonacci

# define a função para gerar a sequência de Fibonacci
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b
    print("FIM")

# solicita ao usuário o número de termos da sequência
n = int(input("Quantos termos da sequência de Fibonacci você quer mostrar? "))
fibonacci(n)