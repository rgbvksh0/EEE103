//Draw a flowchart and write a program to count the number of digits in a given number.

#include<stdio.h>

int main()
{

    int n;
    printf("Please enter your number : \n");
    scanf("%d", &n);

    int temp = n;
    int count=0;

    if(temp==0){
        count=1;
    }else{
        while(temp!=0)
        {
            temp/=10;
            count+=1;

        }
    }
    printf("Number of digits in %d is: %d\n",n,count);
    return 0;
}
