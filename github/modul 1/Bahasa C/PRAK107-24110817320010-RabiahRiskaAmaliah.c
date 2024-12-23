#include <stdio.h>
int main () {
    int a = 4;
    int b = 5;
    int c = 7;
    int keliling = a + b + c;
    int harga = 85000;
    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d", a );
    printf(" %d", b );
    printf(" dan %d\n", c);
    printf("Keliling tanah pak Dengklek adalah %d\n", keliling );
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan pak Dengklek adalah: Rp %d\n", keliling * harga );
    return 0;
}
