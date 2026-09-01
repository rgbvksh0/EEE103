#include <stdio.h>

int sum(int n)
{
    int tn=n,ld=0;
    int sumn=0;

    if(n==0)
    {
        return 0;
    }
    else
    {
        ld=sum(n)%10;
        sumn+=ld;
        sum(n)/10;
    }
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("Sum of digits: %d", sum(n));




    return 0;
}
