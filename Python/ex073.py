# Tupla com os 20 primeiros colocados da tabela do brasileirão em ordem de colocação
# A) mostrar os 5 primeiros
# B) os últimos 4 colocados
# C) times em ordem alfabética
# D) em que posição está o time do gremio

# Titulo
print(f"{'='*41} BRASILEIRÃO 2025 {'='*41}")
print(f"{'='*40} feito em 26/09/2025 {'='*39}")

# Tupla com os times
times = ('Flamengo', 'Cruzeiro', 'Palmeiras', 'Mirassol', 'Botafogo', 'Bahia', 'São Paulo', 'Fluminense', 'Red Bull Bragantino', 'Corinthians', 'Grêmio', 'Ceará', 'Vasco', 'Santos', 'Atlético-MG', 'Vitória', 'Juventude', 'Fortaleza', 'Sport', 'Internacional')

print(f"{'='*100}")
print(f"Os 5 primeiros colocados são: {times[0:5]}")  # ou times[:5]
print(f"{'='*100}")
print(f"Os 4 últimos colocados são: {times[-4:]}")  # ou times[16:20]
print(f"{'='*100}")
print(f"O Grêmio está na {times.index('Grêmio') + 1}ª posição.") # +1 pois o índice começa em 0
print(f"{'='*100}")
print(f"Os times em ordem alfabética são: {sorted(times)}") # sorted() ordena em ordem alfabética
print(f"{'='*100}")
print(f"O internacional está na {times.index('Internacional') + 1}ª posição.") # +1 pois o índice começa em 0
print(f"{'='*100}")