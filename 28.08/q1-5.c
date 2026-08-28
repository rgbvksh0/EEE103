#include <stdio.h>

void q1greet(char name[])
{
    printf("Hello, %s!", name);
}


int q2add(int a, int b)
{
    return a+b;
}

int q3square(int n)
{
    return n*n;
}

int q4isevod(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int q5factl(int n)
{
    int fact=1;
    for(int i=n;i>=1;i-=1)
    {
        fact*=i;
    }

    return fact;

}

int q5factr(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * q5factr(n - 1);
    }
}

int main()
{
    //q1
    // q1greet("Adam");

    //q2
    /*
    int res=q2add(10,20);
    printf("Result = %d", res);
    */


    //q3
    /*
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    int sqr = q3square(n);
    printf("The square of n: %d", sqr);
    //instead of this we could also write :
    //printf("The square of n: %d",q3square(n);
    */


    //q4
    /*
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("The number %d is %d", n, q4isevod(n));
    */


    //q5 with loops
    /*
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("The factorial of %d! is %d", n, q5factl(n));
    */

    //q5 with recursion
    /*
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("The factorial of %d! is %d", n, q5factr(n));
    */




    return 0;
}
