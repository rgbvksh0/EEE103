//Draw a flowchart and write a program to find the sum of the digits of a given number.

#include<stdio.h>

int main()
{

    int n;
    printf("Please enter your number : \n");
    scanf("%d", &n);

    int temp = n;
    int last_digit;
    int count=0;
    int sum=0;

    if(temp==0){
        count=1;
    }else{
        while(temp!=0)
        {
            last_digit=temp%10;
            sum+=last_digit;
            temp/=10;
            count+=1;
            printf("%d\n",last_digit);
        }
    }
    printf("Number of digits in %d is: %d\n",n,count);
    printf("And the sum of all the digits of the given number is: %d",sum);
    return 0;
}
