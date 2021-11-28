sexo= (input("Genero: \n(F)Feminino\n(M)Masculino\n"))
p= float(input("Digite seu peso: "))
h= float(input("Digite sua altura: "))
imc=p/(h*h)
if (sexo=='M'):
    if (imc<20):
        print(f"Abaixo do peso! {imc:.2f}")
    elif (imc>=20 and imc<25):
        print(f"Peso ideal! {imc:.2f}")
    elif (imc>=25):
        print(f"Acima do peso! {imc:.2f}") 
if (sexo=='F'):
    if (imc<19):
        print(f"Abaixo do peso! {imc:.2f}")
    elif (imc>=19 and imc<24):
        print(f"Peso ideal! {imc:.2f}")
    elif (imc>=24):
        print(f"Acima do peso! {imc:.2f}")           
