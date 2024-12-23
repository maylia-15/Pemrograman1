a = int(input())

print("Matriks A:")
matriksa = []
for i in range(a):
    b = list(map(int, input().split()))
    matriksa.append(b)

print("Matriks B:")
matriksb = []
for i in range(a):
    k = list(map(int, input().split()))
    matriksb.append(k) 

matriksab = [[0] * a for _ in range(a)]

for i in range(a):
    for j in range(a):
        for k in range(a):
            matriksab[i][j] += matriksa[i][k] * matriksb[k][j]

print("Matriks AXB:")
for baris in matriksab:
    for k in baris:
        print(k, end=' ')
    print()