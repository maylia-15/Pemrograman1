#include <stdio.h>

int main () {
    //test case 1
    float a, b, hasil;
    printf("Masukan Nilai Pertama :");
    scanf("%f", &a);
    printf("Masukan Nilai Kedua :");
    scanf("%f", &b);
    hasil = a + b;
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" ", a, b, hasil);

    //test case 2
    printf("\n");
    float c, d, hasil2;
    printf("Masukan Nilai Pertama :");
    scanf("%f", &c);
    printf("Masukan Nilai Kedua :");
    scanf("%f", &d);
    hasil2 = c + d;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" ", c, d, hasil2);
    return 0;

}