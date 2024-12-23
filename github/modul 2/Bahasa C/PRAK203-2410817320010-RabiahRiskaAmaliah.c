#include <stdio.h>

int main (){
    //test case 1
    float a, b, i, j, x, y, hasil;
    scanf("%f", &a); 
    scanf("%f", &b); 
    scanf("%f", &i); 
    scanf("%f", &j); 
    scanf("%f", &x); 
    scanf("%f", &y); 
    hasil = (a - b) * (i / j) - (x + y);
    printf("%.3f", hasil);

    //test case 2
    printf("\n");
    float a1, b1, i1, j1, x1, y1, hasil1;
    scanf("%f %f", &a1, &b1); 
    scanf("%f %f", &i1, &j1); 
    scanf("%f %f", &x1, &y1); 
    hasil1 = (a1 - b1) * (i1 / j1) - (x1 + y1);
    printf("%.3f", hasil1);
    return 0;

}