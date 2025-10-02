from datetime import datetime

ano = int(input("Digite um ano (coloque 0 para o ano atual): "))
ano_atual = datetime.now().year
if ano == 0:
    ano = ano_atual
if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
    print(f"{ano} é um ano bissexto.")
    print("Fevereiro terá 29 dias.")
else:
    print(f"{ano} não é um ano bissexto.")
    print("Fevereiro terá 28 dias.")