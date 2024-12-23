#include <stdio.h>

int main (){
    int ruang, zetsu; 

    scanf("%d", &ruang); 

    int matriks [ruang]; 
    for (int a = 0; a < ruang; a++){
       scanf("%d", &zetsu);
       matriks[a] = zetsu; 
    }
     for (int a = 0; a < ruang; a++) {
        printf("%d ", matriks[a] * (a + 1));
    }printf("\n");
}