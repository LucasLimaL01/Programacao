a= float(input("Digite o primeiro valor: "))
b= float(input("Digite o segundo valor: "))
c= float(input("Digite o terceiro valor: "))
d= float(input("Digite o quarto valor: "))
e= float(input("Digite o quinto valor: "))
soma= a+b+c+d+e
print(f"Total= {soma:.2f}")
pagamento= float(input("Valor pago: "))
troco= pagamento-soma
print(f"Seu troco eh: {troco:.2f}")