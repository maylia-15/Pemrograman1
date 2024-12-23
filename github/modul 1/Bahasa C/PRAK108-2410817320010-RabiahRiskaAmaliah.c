#include <stdio.h>
int main () {
    float keliling_taman = 5;
    float jarak = 14;
    float jari_jari = jarak /(2 * 3.14 * 5);
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.f", keliling_taman);
    printf(" putaran\n");
    printf("Jarak tempuh Pak Dengklek = %.f", jarak);
    printf(" kilometter\n");
    printf("\n");
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f", jari_jari );
    return 0;
}