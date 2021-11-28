n=int(input("Digite um numero positivo: "))
while(n<=0):
    print("Erro! Apenas numeros positivos.")
    n=int(input("Digite novamente: "))
if (n>0):
    n1=int(input("Digite o primeiro numero: "))
    n2=int(input("Digite o segundo numero: "))
while(n1 >= n2):
    n2=int(input("Digite novamente o segundo numero: "))
for i in range (n2, n1-1, -1):
    r=n*i
    print(n,"*", i, "=", r)

