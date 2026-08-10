#include<stdio.h>

int main()
{

    int n, tempn, last_d;
    int count = 0, power;
    int multiply = 1, sum = 0;

    printf("Please enter your Number: \n");
    scanf("%d", &n);

    tempn=n;
    while(tempn!=0)
    {
        last_d = tempn % 10;
        tempn = tempn/10;
        count+=1;
    }
    power=count;
    tempn=n;
    while(tempn!=0)
    {
        last_d = tempn % 10;
        tempn = tempn/10;
        multiply=1;
        int i;
        for(i=1; i<=power; i+=1)
        {
            multiply *=  last_d;
        }
            sum += multiply;
    }

    if(sum==n)
    {
        printf("The number %d is an Armstrong number.\n", n);
    }
    else {

        printf("The number %d is not an Armstrong number.\n", n);
    }

    return 0;
}
