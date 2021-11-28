print("Os vinte primeiros valores da serie de Bergamaschi sao:\n")
n=1
n1=1
n2=1
print(f"{n:.0f}\n"f"{n1:.0f}\n"f"{n2:.0f}")
for i in range (3, 20, 1):
    r=n+n1+n2
    print(f"{r:.0f}")
    n=n1
    n1=n2
    n2=r