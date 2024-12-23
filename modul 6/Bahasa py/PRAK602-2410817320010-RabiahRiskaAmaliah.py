ruang = int (input())
zetsu = []
a = list(map(int, input().split()))
for i in range (ruang):
    print((i+1)*a[i], end=' ')