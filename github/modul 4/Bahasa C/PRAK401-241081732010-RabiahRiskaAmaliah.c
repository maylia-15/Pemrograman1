#include <stdio.h>

int main (){
    int i, h;
    char j;
    scanf("%d", &h);
    scanf(" %c", &j);
    for (i = 1; i < 51; i++){
     if (i % h == 0){
        printf("%c ", j);
    }
    else {
        printf("%d ", i);
    }
    }
    return 0;
}