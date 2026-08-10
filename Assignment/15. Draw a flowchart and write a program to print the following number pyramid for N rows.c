//Draw a flowchart and write a program to print the following number pyramid for N rows using nested loops


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
