#include <stdio.h>
#include <string.h>

int main() {
    char asli[100], palsu[100];
    int kode, pesan, bintang = 0, pagar = 0;

    scanf(" %[^\n]%*c", asli);
    scanf(" %[^\n]%*c", palsu);

    kode = strlen(asli);
    pesan = strlen(palsu);

    if (kode != pesan) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;  
    }

    for (int i = 0; i < kode; i++) {
        if (asli[i] == ' ' && palsu[i] == ' ') {
            continue; 
        } else if (asli[i] == palsu[i]) {
            printf("*");
            bintang++;  
        } else {
            printf("#");
            pagar++;  
        }
    }

    printf("\n");
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar) {printf("Pesan Asli\n");}
    else {printf("Pesan Palsu\n");}

    return 0;
}