// Draw a flowchart and write a program to check whether a given number is prime or not.


#include<stdio.h>

int main()
{

    int n;
    printf("Please enter your number : \n");
    scanf("%d", &n);

    int count=0;

    for(int i=1;i<=n;i+=1)
    {
        if(n%i==0){
            count+=1;
        }
    }

    if(count == 2)
    {
        printf("The number %d is prime\n", n);
    }
    else{
        printf("The number %d isn't prime\n",n);
    };



    return 0;
}
