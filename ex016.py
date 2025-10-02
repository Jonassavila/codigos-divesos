import math
num = float(input("Digite um número: "))
print(f'O numero {num} tem a parte inteira {math.floor(num)} e a parte decimal é {num - math.floor(num):.2f} com 2 casas depois da vírgula.')
