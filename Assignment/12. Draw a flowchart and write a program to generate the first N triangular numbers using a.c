#include <stdio.h>

int main() {
    int n, count = 1, triangular = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("First %d triangular numbers:\n", n);

    while (count <= n) {
        triangular = triangular + count;
        printf("%d ", triangular);
        count++;
    }

    printf("\n");

    return 0;
}

