soma=0
n1=int(input("Numero positivo menor que 100: "))
while (n1<=0) or (n1>100):
    n1=(input("Numero invalido, digite novamente: "))
for i in range (1, n1+1, 1):
    n2=(i*i)+1
    soma=soma+n2
print(f"A soma dos {n1:.0f}"f" numeros em sequencia = {soma:.0f}") 

