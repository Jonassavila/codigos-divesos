nome = input("Digite o seu nome completo: ").strip()

print(f'O seu primeiro nome é {nome.split()[0]}')
print(f'O seu último nome é {nome.split()[-1]}')