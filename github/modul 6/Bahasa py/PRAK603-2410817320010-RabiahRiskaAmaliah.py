a, b = map(int, input ().split())

if a!=b: 
    print("Jumlah tidak sama") 
    exit(1)

barisa = list(map(int, input().split()))
barisb = list(map(int, input().split()))

for d in range(a):
    print(barisa[d] * barisb[d], end=" ")