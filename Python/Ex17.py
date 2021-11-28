a= float(input("Valor A: "))
b= float(input("Valor B: "))
c= float(input("Valor C: "))

if (a * a == b * b + c * c) or (b * b == c * c + a * a) or (c * c == a * a + b * b):
 print("Triangulo Retangulo")
else :
    print("Nao eh um Triangulo Retangulo") 