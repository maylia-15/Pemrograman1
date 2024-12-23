#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a != b) {printf("Jumlah tidak sama"); return 1;}

    int barisa[a], barisb[b];
    for (int d = 0; d < a; d++) {scanf("%d", &barisa[d]);}
    for (int d = 0; d < b; d++) {scanf("%d", &barisb[d]);}
    for (int d = 0; d < a; d++) {printf("%d ", barisa[d] * barisb[d]);}
    return 0;
}