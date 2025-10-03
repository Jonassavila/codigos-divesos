n1 = int(input("Digite o primeiro número inteiro: "))
n2 = int(input("Digite o segundo número inteiro: "))
n3 = int(input("Digite o terceiro número inteiro: "))

if n1 > n2 and n1 > n3:
    print(f"{n1} é o maior número.")
    if n2 < n3:
        print(f"{n2} é o menor número.")
    else:
        print(f"{n3} é o menor número.")
elif n2 > n1 and n2 > n3:
    print(f"{n2} é o maior número.")
    if n1 < n3:
        print(f"{n1} é o menor número.")
    else:
        print(f"{n3} é o menor número.")
elif n3 > n1 and n3 > n2:
    print(f"{n3} é o maior número.")
    if n1 < n2:
        print(f"{n1} é o menor número.")
    else:
        print(f"{n2} é o menor número.")
else:
    print("Os números são iguais.")
