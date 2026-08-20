#include<stdio.h>
/*
int main()
{
    int len,indx;
    printf("Please enter the array length: ");
    scanf("%d",&len);
    len = len-1;
    int arr[len];

    for(int i=0;i<=len;i+=1)
    {
        printf("\nSlot num %d: \n", i);
        scanf("%d",&arr[i]);
    }

    printf("The digits in the array: \n");
    for(int i=0;i<=len;i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
*/


#include <stdio.h>

int main() {
    int a[10];
    int index;

    // 1. Read 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    // 2. Read the desired index
    printf("\nEnter an index number between 0 and 9: ");
    scanf("%d", &index);

    // 3. Validate the index and display the corresponding value
    if (index >= 0 && index <= 9) {
        printf("The value at index %d is: %d\n", index, a[index]);
    } else {
        printf("Error: Index out of bounds. Please choose a number between 0 and 9.\n");
    }

    return 0;
}


