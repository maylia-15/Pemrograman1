detik = int (input("Masukan angka: "))
hari = detik // 86400
sisa_detik = detik %86400
jam = sisa_detik //3600
sisa_detik %= 3600
menit = sisa_detik //60
detik_sisa = sisa_detik %60

if hari > 0:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik_sisa:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik_sisa:02}")
