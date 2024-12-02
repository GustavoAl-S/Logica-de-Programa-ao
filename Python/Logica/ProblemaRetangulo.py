
"""
Problema 2 "retangulo"
Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. 
"""
base = float(input("Digite o valor da base do retangulo: "))
altura = float(input("Digite a altura do retangulo: "))

areDoRetangulo = base * altura
perimetroDoRetangulo = 2 * base + 2 * altura
diagonalDoRetangulo = (base ** 2 + altura ** 2) ** (1/2)
print(areDoRetangulo)
print(perimetroDoRetangulo)
print(diagonalDoRetangulo)

