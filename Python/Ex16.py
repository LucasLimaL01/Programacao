l1= float(input("Digite o primeiro lado do triangulo: "))
l2= float(input("Digite o segundo lado do triangulo: "))
l3= float(input("Digite o terceiro lado do triangulo: "))

if ((l1 + l2) > l3) and ((l1 + l3) > l2) and ((l2 + l3) > l1):
    if (l1 == l2) and (l1 == l3) :
        print("Triangulo Equilatero")
    elif (l1 != l2) and (l1 != l3):
        print("Triangulo Escaleno")
    else: 
        print("Triangulo Isosceles")  

else: 
    print("Nao eh um Triangulo")          