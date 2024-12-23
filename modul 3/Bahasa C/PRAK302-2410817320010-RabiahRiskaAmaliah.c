#include <stdio.h>

int main (){
    int a;
    printf("Masukan Nilai: ");
    scanf("%d", &a);
    if (a >= 80 && a<= 100) {printf("A");}
    else if (a >= 70 && a<= 79) {printf("B");}
    else if (a >= 60 && a<= 69) {printf("C");}
    else if (a >= 50 && a<= 59) {printf("D");}
    else { printf("E");}
    return 0;
}