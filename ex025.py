nome = input("Digite o seu nome completo: ").strip()

# Pega o nome e verifica se contem "silva"
if "silva" in nome.lower().split():
    print("O nome contém 'Silva'")
else:
    print("O nome não contém 'Silva'")