"""
cto = float(input("Digite o cateto oposto: "))
cta = float(input("Digite o cateto adjacente: "))
hip = (cto**2 + cta**2)**(1/2)
print(f'A hipotenusa vai medir {hip:.2f}')
"""

from math import hypot
cto = float(input("Digite o cateto oposto: "))
cta = float(input("Digite o cateto adjacente: "))
hip = hypot(cto, cta)
print(f'A hipotenusa vai medir {hip:.2f}')
