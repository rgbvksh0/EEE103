//Draw a flowchart and write a program to generate the first N terms of the Fibonacci series. The value of N must be taken from the user.
#include <stdio.h>

int main() {

    int tn;
    printf("Enter the first number of terms (N): ");
    scanf("%d", &tn);


    printf("The Fibonacci sequence of the first %dth terms are :\n", tn);

    int f1=0, f2=1;
    int res=0;
    for(int i=1;i<=tn;i+=1)
    {
        if(tn<=1)
        {
            res=1;
        } else {

            res= f1+ f2;
            f1= f2;
            f2= res;
            }

        printf("%d ", res);
    }

    return 0;

}
