# Progra que simula um caixa eletrônico, com as seguintes funcionalidades:
# 1 - Perguntar ao usuário qual o valor a ser sacado (número inteiro) e informar quantas cédulas de cada valor serão entregues.
# 2 - Considere que o caixa possui cédulas de R$50, R$20, R$10 e R$1.

# Cabeçalho
print(f'{'=' * 94}')
print(f"{'=' * 40} BANCO DO DEV {'=' * 40}")
print(f'{'=' * 94}')

# Entrada de dados
valor_saque = int(input("Qual valor você quer sacar? (as cédulas disponíveis são R$50, R$20, R$10 e R$1): R$ "))

# Declaração de variáveis
valor_inicial = valor_saque
total_cedulas = 0
cedula_50 = 0
cedula_20 = 0
cedula_10 = 0
cedula_1 = 0

# Loop principal
while True:
    if valor_saque >= 50:
        valor_saque -= 50
        total_cedulas += 1
        cedula_50 += 1
    elif valor_saque >= 20:
        valor_saque -= 20
        total_cedulas += 1
        cedula_20 += 1
    elif valor_saque >= 10:
        valor_saque -= 10
        total_cedulas += 1
        cedula_10 += 1
    elif valor_saque >= 1:
        valor_saque -= 1
        total_cedulas += 1
        cedula_1 += 1
    if valor_saque == 0:
        break

# Resultado final
print(f"\n O valor solicitado foi R$ {valor_inicial}.")
print(f" Serão entregues um total de {total_cedulas} cédulas serão elas:")
if cedula_50 > 0:
    print(f" - {cedula_50} cédulas de R$ 50")
if cedula_20 > 0:
    print(f" - {cedula_20} cédulas de R$ 20")
if cedula_10 > 0:
    print(f" - {cedula_10} cédulas de R$ 10")
if cedula_1 > 0:
    print(f" - {cedula_1} cédulas de R$ 1")
print(f'{'=' * 94}')
print(f'{'=' * 23} Volte sempre ao Banco do dev! Tenha um bom dia!{'=' * 23}')
print(f'{'=' * 94}')
