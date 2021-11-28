print("Os trinta primeiros valores da serie de Fibonacci sao:\n")
n=1
n1=1
print(f"\n{n:.0f}\n"f"{n1:.0f}")
for i in range (2, 30, 1):
    s=n+n1
    print(f"{s:.0f}")
    n=n1
    n1=s