def maksimal(a, b) :
    return a if a > b else b 

def minimal(a, b) :
    return a if a < b else b 

bilangan =  int(input())
nilai = input().split()

batas = 0
maks = -100000 
minim = 100000

while batas < bilangan: 
    maks = maksimal(maks, int (nilai [batas]) )
    minim = minimal(minim, int(nilai[batas]))
    batas += 1

print(maks, minim)