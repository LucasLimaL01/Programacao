print("Calculo da area de um retangulo")
b= float(input("Digite a base: "))
h= float(input("Digite a altura: "))
a=b*h
if (a<100):
    print(f"Sua area eh= {a:.2f}")
    print("Terreno pequeno!")
elif (a>100):
    print(f"Sua area eh= {a:.2f}")
    print("Terreno grande!")