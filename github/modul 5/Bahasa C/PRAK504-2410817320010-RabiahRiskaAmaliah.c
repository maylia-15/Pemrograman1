#include <stdio.h> 

int reverse(int a){ 
    int reserved = 0;
    while (a > 0) {reserved = reserved * 10 + a % 10; a = a/10;}
return reserved;
} 

    int main() { 
        int A, B; 
        scanf("%d %d",&A,&B); 
        A=reverse(A); 
        B=reverse(B); 
        int C = A+B; 
        printf("%d",reverse(C)); 
}