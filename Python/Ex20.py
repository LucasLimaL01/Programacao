p1= float(input("Nota P1: "))
p2= float(input("Nota P2: "))
m=(p1+(2*p2))/3
if (m>=5):
    print(f"O aluno foi aprovado com a nota: {m:.2f}")
else:
    print(f"O aluno foi reprovado com a nota: {m:.2f}")    