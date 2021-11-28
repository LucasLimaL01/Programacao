print("Com esse programa sera calculado seu IMC")
a= float(input("Digite seu peso em 'KG': "))
b= float(input("Digite sua altura em 'm': "))
imc=a/(b*b)
print(f"Seu IMC eh: {imc:.2f}")
if (imc<20):
    print("Abaixo do peso!")
elif (imc>=20) and (imc<25):
    print("Peso ideal!")
else:
     print("Acima do peso!")       