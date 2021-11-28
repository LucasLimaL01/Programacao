print("Tabuada de um a vinte, no intervalo de um a dez:")
n=1
for n in range (1, 20, 1):
    n=n+1
    input ("Pressiona um tecla")
    for i in range (1, 11, 1):
        r=n*i
        print(n, "*", i, "=", r)
