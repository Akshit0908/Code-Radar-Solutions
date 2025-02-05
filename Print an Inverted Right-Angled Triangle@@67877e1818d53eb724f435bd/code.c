#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    for (int i = N; i >= 1; i--) {  // Loop from N down to 1
        for (int j = 1; j <= i; j++) {  // Print 'i' stars in each row
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
