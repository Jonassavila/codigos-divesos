nota1 = float(input('Digite a primeira nota: '))
nota2 = float(input('Digite a segunda nota: '))
media = (nota1+nota2)/2

if media >= 7:
    print(f'A média do aluno é {media}, O aluno está aprovado!')

else:
    print(f'A média do aluno é {media}. O aluno está reprovado.')
