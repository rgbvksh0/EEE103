#include <stdio.h>

int main()
{
    int arr[5] = {2, 5, 1, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array using a loop
    for (int i = 0; i < len / 2; i++)
    {
        // Temporary variable to hold the value during the swap
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
