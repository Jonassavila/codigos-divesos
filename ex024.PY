"""

cidade = input("Digite o nome da sua cidade: ")
if cidade.lower().startswith("santo"):
    print("A cidade começa com 'Santo'")
else:
    print("A cidade não começa com 'Santo'")

"""


cidade = input("Digite o nome da sua cidade: ").strip()

# Pega a primeira palavra e compara exatamente com "santo"
if cidade.lower().split()[0] == "santo":
    print("A cidade começa com 'Santo'")
else:
    print("A cidade não começa com 'Santo'")
