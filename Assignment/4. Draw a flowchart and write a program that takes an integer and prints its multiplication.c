//Draw a flowchart and write a program that takes an integer and prints its multiplication table up to 10.

#include<stdio.h>

int main()
{

    int n;
    printf("Please enter your number : \n");
    scanf("%d", &n);

    int multip=1;
    printf("The multiplication table of %d :\n", n);
    for(int i=1;i<=10;i+=1)
    {
        multip=n*i;
        printf("%d x %d = %d\n",n,i, multip);
    }

    return 0;
}
