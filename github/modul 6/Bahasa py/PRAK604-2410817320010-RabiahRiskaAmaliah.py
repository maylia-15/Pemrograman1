asli = input().strip()
palsu = input().strip()
kode = len(asli)
pesan = len(palsu)
bintang = 0
pagar = 0

if kode != pesan:
    print("Panjang kalimat berbeda, Pesan Palsu")
    exit()

for i in range(kode):
    if asli[i] == palsu[i]:  
        if asli[i] == " ":  
            print(" ", end="")  
        else:
            print("*", end="")  
            bintang += 1
    else:  
        print("#", end="")
        pagar += 1
print()  

print(f"* = {bintang}")
print(f"# = {pagar}")

if bintang >= pagar:
    print("Pesan Asli")
else:
    print("Pesan Palsu")
