soma = 0
aux = 0
idade = float (input("Digite as idades: "))

while ( idade >= 0):
    
    soma = soma + idade 
    aux = aux + 1
    
    idade = float (input("Digite as idades: "))
    
if (aux == 0):
    print("IMPOSSIVEL CALCULAR") 
else:
    media = soma / aux
    print("Media = ", media)
