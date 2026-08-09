//Draw a flowchart and write a C program that prints the sum of the first N natural numbers.


#include<stdio.h>

int main()
{

    int n;
    printf("Please enter your number : \n");
    scanf("%d", &n);

    int sum=0;
    for(int i=1;i<=n;i+=1)
    {
        sum+=i;
    }

    printf("the sum of the first %d number is: %d" ,n,sum);

    return 0;
}
