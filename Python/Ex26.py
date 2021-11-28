n=int(input("Digite um numero para obter a tabuada: "))
while(n<=0):
    print("Numero negativo!")
    n=int(input("Digite um numero positivo para obter a tabuada: "))
i=1
while(i<11):
    r=n*i
    print(f'{n} X {i} = {r}')
    i= i+1
