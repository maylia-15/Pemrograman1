#include <stdio.h>

int main (){
    //test case 1
    float jari_jari, tinggi, volume, luas, keliling;
    scanf("%f", &jari_jari);
    scanf("%f", &tinggi);

    volume = 22.0/7 * jari_jari * jari_jari * tinggi;
    luas = 2 * jari_jari * 22/7 * (jari_jari + tinggi);
    keliling = 2 * jari_jari * 22/7; 

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    //test case 2
    float jari_jari1, tinggi1, volume1, luas1, keliling1;
    scanf("%f", &jari_jari1);
    scanf("%f", &tinggi1);

    volume1 = 22.0/7 * jari_jari1 * jari_jari1 * tinggi1;
    luas1 = 2 * jari_jari1 * 22/7 * (jari_jari1 + tinggi1);
    keliling1 = 2 * jari_jari1 * 22/7; 

    printf("Volume = %.2f\n", volume1);
    printf("Luas = %.2f\n", luas1);
    printf("Keliling = %.2f\n", keliling1);
    
    return 0;
}