#include <stdio.h>

int main (){
    int A = 40000;
    int B = 35000;

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", A - (A * 13 / 100));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", B - (B * 21 / 100));
    return 0;
}