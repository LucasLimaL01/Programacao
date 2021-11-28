a= float(input("Digite o primeiro valor: "))
b= float(input("Digite o segundo valor: "))
c= float(input("Digite o terceiro valor: "))
if (a>=b) and (a>=c):
    print(f"O maior numero = {a:.2f}")
elif (b>=a) and (b>=c):
    print(f"O maior numero = {b:.2f}") 
elif (c>a) and (c>b):
    print(f"O maior numero = {c:.2f}")         