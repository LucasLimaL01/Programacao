a= float(input("Aceleracao em m/s2: "))
v0= float(input("Velocidade inicial em m/s: "))
t= float(input("Tempo de percurso em segundos: "))
v= v0+(a*t)
vf= v*3.6

if (40>= vf):
    print(f"Veiculo muito lento = {vf:.2f}")
elif (vf>40 and vf<=60):
    print(f"Velocidade permitida = {vf:.2f}")
elif (vf>60 and vf<=80):
    print(f"Velocidade de cruzeiro = {vf:.2f}")
elif (vf>80 and vf<=120):
    print(f"Veiculo rapido = {vf:.2f}")
else:
    print(f"Veiculo muito rapido = {vf:.2f}")
                    