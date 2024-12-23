#include <stdio.h>

int main (){
    int i;
    float a, b, hasil;
    
while (1){
    printf("Pilih Program \n");
    printf("1. Penjumlahan \n");
    printf("2. Pengurangan \n");
    printf("3. Perkalian \n");
    printf("4. Pembagian \n");
    printf("5. Exit \n"); 
    printf("Masukan pilihan:"); 
    scanf("%d", &i);

    if (i==5) {printf("Terimakasih, telah menggunakan kalkulator Rabiah Riska Amaliah\n"); break;} 
    else if (i <= 0 || i > 5) {printf("Input anda salah, silahkan coba lagi\n");continue;}
    else {
    printf("Masukan nilai pertama:");
    scanf("%f", &a);
    printf("Masukan nilai kedua:");
    scanf("%f", &b);}
    if (i == 1) {printf("Hasil penjumlahan antara %.2f dengann %.2f adalah %.2f\n", a, b, a+b);}
    else if (i == 2) {printf("Hasil pengurangan antara %.2f dengann %.2f adalah %.2f\n", a, b, a-b);}
    else if (i == 3) {printf("Hasil perkalian antara %.2f dengann %.2f adalah %.2f\n", a, b, a*b);}
    else if (i == 4) {printf("Hasil pembagian antara %.2f dengann %.2f adalah %.2f\n", a, b, a/b);}
}
    return 0;
}