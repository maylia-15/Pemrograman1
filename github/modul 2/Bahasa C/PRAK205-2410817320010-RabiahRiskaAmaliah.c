#include <stdio.h>
#include <math.h>

int main(){
    //tast case 1
    int a, b, c, keliling, luas; 
    scanf ("%d", &a);
    scanf("%d", &b);
    c = sqrt (b * b - a * a);
    keliling = a + b + c;
    luas = a * c / 2;

    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    //test case 2
     int a1, b1, c1, keliling1, luas1; 
    scanf ("%d", &a1);
    scanf("%d", &b1);
    c1 = sqrt (b1 * b1 - a1 * a1);
    keliling1 = a1 + b1 + c1;
    luas1 = a1 * c1 / 2;

    printf("Alas = %d cm\n", c1);
    printf("Tinggi = %d cm\n", a1);
    printf("Keliling = %d cm\n", keliling1);
    printf("Luas = %d cm^2\n", luas1);

    return 0;

}