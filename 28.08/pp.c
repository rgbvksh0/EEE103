#include<stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10) + sum(n/10);
    }

}


int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int rev(int n, int b)
{
    if(n==0)
    {
        return b;
    }
    else
    {
        return rev(n/10, b*10+n%10)
    }
}

int main()
{
    /*
    //sum of digits
    int n;
    printf("Please enter a positive integer numbers: ");

    do
    {
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Enter a Positive integer!!!\n");
    }

    }while(n<=0);

        printf("the sum of the digits: %d", sum(n));

    */


    /*
    //Reversing the order of digits
    int n;
    printf("Please enter a number : ");
    scanf("%d", &n);

    int result = sum(n,0);

    printf("%d", result);
    */

    /*
    //fibonacci
    int n;
    printf("Please enter the term number: ");
    scanf("%d", &n);


        printf("The fib till %d is : %d\n\n", n, fib(n));

        printf("The fib till %d is :", n);
    for(int i=0; i<=n; i++)
    {

        printf(" %d,", fib(i));
    }
    */


    return 0;
}
