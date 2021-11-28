numeros=[]
for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)
a = int(input('Constante que vai multiplicar cada valor:  '))
for i in range(0, 20, 1):
    print("\n ",numeros[i],"*",a,"=")
    numeros[i]=numeros[i]*a
    print(numeros[i])
