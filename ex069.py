# leia a idade e o sexo de várias pessoas. A cada pessoa cadastrada, o programa deverá perguntar se o usuário quer ou não continuar. No final, mostre:
# A) Quantas pessoas têm mais de 18 anos.
# B) Quantos homens foram cadastrados.
# C) Quantas mulheres têm menos de 20 anos.

# Variáveis
pessoas_maior_18 = 0
homens = 0
mulheres_menos_20 = 0

# Loop principal
while True:
    print("=" * 80)
    print("CADASTRE UMA PESSOA")
    print("=" * 80)

    # Entrada e validação de dados idade
    idade = input("Qual é a idade? ").strip()
    while not idade.isdigit() or int(idade) < 1 or int(idade) > 120:
        print("Idade inválida! Tente novamente.")
        idade = input("Qual é a idade? ").strip()
    idade = int(idade)

    # Entrada e validação de dados sexo
    sexo = input("Qual o sexo? [M/F] ").strip().upper()
    while sexo == "" or sexo[0] not in ['M', 'F']:
        print("Sexo inválido! Tente novamente.")
        sexo = input("Qual o sexo? [M/F] ").strip().upper()
    sexo = sexo[0]

    # Processamento de dados
    if idade >= 18:
        pessoas_maior_18 += 1
    if sexo == 'M':
        homens += 1
    if sexo == 'F' and idade < 20:
        mulheres_menos_20 += 1

    # Pergunta para continuar
    continuar = input("Quer continuar? [S/N] ").strip().upper()
    while continuar == "" or continuar[0] not in ['S', 'N']:
        print("Opção inválida! Tente novamente.")
        continuar = input("Quer continuar? [S/N] ").strip().upper()
    continuar = continuar[0]
    print("=" * 80)
    if continuar == 'N':
        break

# Resultados
print(f"O total de pessoas com mais de 18 anos é {pessoas_maior_18}.")
print(f"O total de homens cadastrados foi {homens}.")
print(f"O total de mulheres com menos de 20 anos é {mulheres_menos_20}.")
print("=" * 80)
