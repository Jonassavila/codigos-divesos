import math

ang = float(input("Digite o ângulo em graus: "))
sen = math.sin(math.radians(ang))
cos = math.cos(math.radians(ang))
tan = math.tan(math.radians(ang))
print(f'O seno de {ang} graus é {sen:.2f}')
print(f'O cosseno de {ang} graus é {cos:.2f}')
print(f'A tangente de {ang} graus é {tan:.2f}')