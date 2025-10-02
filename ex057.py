# registra o sexo apenas como 'M' ou 'F', conforme solicitado
sexo = input("Digite o seu sexo [M/F]: ").upper()
while sexo != 'M' and sexo != 'F':
    sexo = input("Dados inválidos. Digite seu sexo [M/F]: ").upper()