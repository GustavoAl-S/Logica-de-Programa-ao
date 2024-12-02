distancia1 = float(input("Digite a primeira distancia: "))
distancia2 = float(input("Digite a segunda distancia: "))
distancia3 = float(input("Digite a terceira distancia: "))

if (distancia1 > distancia2) & (distancia1 > distancia3):
    maior = distancia1
elif(distancia2 > distancia3):
    maior = distancia2
else:
    maior = distancia3
    
print(maior)