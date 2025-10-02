# Lê o primeiro termo e a razão de uma progressão aritmética e retorne os 10 primeiros termos.

# Variáveis
primeiro_termo = int(input('Digite o primeiro termo da PA: '))
razao = int(input('Digite a razão da PA: '))
decimo_termo = primeiro_termo + (10 - 1) * razao

# Laço de repetição até o décimo termo
while primeiro_termo <= decimo_termo:
    print(primeiro_termo)
    primeiro_termo += razao
print("Fim até o décimo termo.")    

# Pergunta se o usuário quer mostrar mais termos
n_termos = int(input("Quantos termos você quer mostrar a mais? "))

# Laço de repetição para mostrar mais termos
while n_termos != 0:
    decimo_termo += n_termos * razao
    while primeiro_termo <= decimo_termo:
        print(primeiro_termo)
        primeiro_termo += razao
    print(f"Fim até o {n_termos+10}º termo.")
    n_termos = int(input("Quantos termos você quer mostrar a mais? "))