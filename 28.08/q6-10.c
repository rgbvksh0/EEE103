#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int q7findMax(int arr[], int len)
{

}

int main() {

    //q6
    /*
    int tn;
    printf("Enter the first number of terms (N): ");
    scanf("%d", &tn);

    for (int i = 0; i < tn; i++)
        printf("%d ", fib(i));
    printf("\n");
    */


    //q7

    int len;
    printf("Enter array length: ");
    scanf("%d", &len);
    int arr[len];

    printf("\nEnter the Indices\n");
    for(int i=0;i<len;i+=1)
    {
        printf("\nEnter the %d nth index: ", i);
        scanf("%d", &arr[i]);
    }

    /*
    printf("\nThe Array : arr[%d]= ",len);
    for(int i=0;i<len;i+=1)
    {
        printf("%d, ", arr[i]);
    }
    */


    //loop for max amount
    /*
    int max=0;
    for(int i=0;i<len;i+=1)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nThe max number existing in this array is: %d\n", max);
    */


    //to find which array the max number is in
    /*
    for(int i=0;i<len;i+=1)
    {
        if(max==arr[i])
        {

    printf("Which is in index number %d.\n", i);
        }
    }
    */


    return 0;
}
