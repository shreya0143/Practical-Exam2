#include <stdio.h>

int main() {
    int i, j;

    
    for(i = 5; i >= 1; i--) {
        switch(i) {
            case 5:
                for(j = 1; j <= 5; j++) {
                    printf("%d ", j * 5);
                }
                break;
            case 4:
                for(j = 1; j <= 4; j++) {
                    printf("%d ", j * 5);
                }
                break;
            case 3:
                for(j = 1; j <= 3; j++) {
                    printf("%d ", j * 5);
                }
                break;
            case 2:
                for(j = 1; j <= 2; j++) {
                    printf("%d ", j * 5);
                }
                break;
            case 1:
                printf("5 ");
                break;
        }
        printf("\n"); 
    }

    return 0;
}


