#include <stdio.h>

int main() {
    int matriksa[10][10], matriksb[10][10], matriksab[10][10];
    int a, i, j, k;
    scanf("%d", &a);

    printf("Matriks A:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            scanf("%d", &matriksa[i][j]);
        }
    }

    printf("Matriks B:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            scanf("%d", &matriksb[i][j]);
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            matriksab[i][j] = 0;
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            for (k = 0; k < a; k++) {
                matriksab[i][j] += matriksa[i][k] * matriksb[k][j];
            }
        }
    }

    printf("Matriks AXB:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            printf("%d ", matriksab[i][j]);
        }
        printf("\n");
    }

    return 0;
}