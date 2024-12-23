while True:
    print("Pilih Program ")
    print("1. Penjumlahan ")
    print("2. Pengurangan ")
    print("3. Perkalian ")
    print("4. Pembagian ")
    print("5. Exit")

    i= int (input("Masukan pilihan: "))

    if i == 5:
       print("Terimakasih, telah menggunakan kalkulator Rabiah Riska Amaliah \n")
       break 
    elif i <= 0 or i > 5:
        print("Input anda salah, silahkan coba lagi")
        continue
    else:
        a = float (input("Masukan nilai pertama:"))
        b = float (input("Masukan nilai kedua:"))
        if i == 1:
             print("Hasil penjumlahan antara {:.2f} dan {:.2f} adalah {:.2f}".format(a, b, a + b))
        elif i == 2:
            print("Hasil pengurangan antara {:.2f} dan {:.2f} adalah {:.2f}".format(a, b, a - b))
        elif i ==3:
            print("Hasil perkalian antara {:.2f} dan {:.2f} adalah {:.2f}".format(a, b, a * b))
        elif i==4:
            print("Hasil pembagian antara {:.2f} dan {:.2f} adalah {:.2f}".format(a, b, a / b))

   