//Draw a flowchart and write a program to print the following pattern using nested for loops


#include <stdio.h>

int main() {

    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=1)
    {
        for(j=1; j<=i;j+=1)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
