# Contagem regressiva de fogos de artifício

# Importando a biblioteca time
import time

# Contagem regressiva em laço de repetição
for i in range(10, 0, -1):
    print(f"Os fogos de artifício vão estourar em {i}...")
    time.sleep(1)
print("FIM")
