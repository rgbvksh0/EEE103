//Draw a flowchart and write a program to find the factorial of a number entered by the user.


#include<stdio.h>

int main()
{

    int n;
    printf("Please enter your number : \n");
    scanf("%d", &n);

    int fact=1;
    for(int i=1;i<=n;i+=1)
    {
        fact*=i;
    }

    printf("the factorial of %d! is: %d" ,n,fact);

    return 0;
}
