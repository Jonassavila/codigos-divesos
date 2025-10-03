# Tabuada de varios números, o programa para quando o número solicitado for negativo.

# Titulo
print(f"{'='*42} TABUADA {'='*42}")

# Loop principal
while True:
    n=int(input("Digite um número inteiro para ver a sua tabuada (Digite um número negativo para parar): "))
    print(f"{'='*93}")
    if n < 0:
        print(f"{'='*39} Até a próxima {'='*39}")
        break
    print(f"A tabuada de {n} é:")
    for t in range(1, 11):
        print(f"{n} x {t} = {n*t}")
    print(f"{'='*93}")
