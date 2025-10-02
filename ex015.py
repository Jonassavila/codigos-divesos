d = int(input('quantos dias de aluguel? '))
km = float(input('quantos km rodados? '))
print(f'O total a pagar é R${d*60 + km*0.15:.2f}')
