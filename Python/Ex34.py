numeros = []
for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)
print('Os numeros digitados em ordem crescente foram: ')    
for i in range(0, 10, 1):
    print(numeros[i])
for i in range(0, 10, 1):
  if numeros[0]<numeros[i]:
     numeros[0]=numeros[i]

print("O maior número digitado foi:", numeros[0])
