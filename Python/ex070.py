# leia o nome, preço de varios produtos e pergunte se o usuário vai continuar. No final, mostre:
# A) Qual é o total gasto na compra.
# B) Quantos produtos custam mais de R$1000.
# C) Qual é o nome do produto mais barato.

# Declaração de variáveis
total_gasto = 0
produtos_mais_1000 = 0
produto_mais_barato = ""

# titulo
print("=" * 60)
print(f"{'='*20} LOJA SUPER BARATÃO {'='*20}")
print("=" * 60)

# Loop principal
while True:
    nome_produto = input("Nome do produto: ")
    preco_produto = float(input("Preço: R$ "))
    total_gasto += preco_produto
    if preco_produto > 1000:
        produtos_mais_1000 =+ 1
    if produto_mais_barato == "" or preco_produto < preco_produto_mais_barato:
        produto_mais_barato = nome_produto
        preco_produto_mais_barato = preco_produto
    continuar = input("Quer continuar? [S/N] ").strip().upper()
    while continuar == "" or continuar[0] not in ['S', 'N']:
        print("Opção inválida! Tente novamente.")
        continuar = input("Quer continuar? [S/N] ").strip().upper()
    if continuar == 'N':
        break

# Resultados
print("=" * 60)
print(f"\n{'='*22} FIM DA COMPRA! {'='*22}")
print(f"Total gasto: R$ {total_gasto:.2f}")
print(f"Produtos acima de R$ 1000: {produtos_mais_1000}")
print(f"Produto mais barato: {produto_mais_barato} que custa R$ {preco_produto_mais_barato:.2f}")
print("=" * 60)
