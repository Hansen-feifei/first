#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int a[6][6]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int R, C;
    int found = 0; 

    for (R = 0; R < n; R++) {
  
        int max = a[R][0];
        C = 0;
        for (int j = 1; j < n; j++) {
            if (a[R][j] > max) {
                max = a[R][j];
                C = j;
            }
        }

        int min = 1; 
        for (int i = 0; i < n; i++) {
            if (a[i][C] < max) {
                min = 0; 
                break;
            }
        }

        if (min) { 
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d %d\n", R, C);
    } else {
        printf("NONE\n");
    }

    return 0;
}