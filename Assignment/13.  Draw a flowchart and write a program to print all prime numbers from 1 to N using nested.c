// Draw a flowchart and write a program to print all prime numbers from 1 to N using nested loops and conditional statements.


#include <stdio.h>

int main(){

int ln=1;
int un;
printf("Enter the upper limit: ");
scanf("%d",&un);


printf("Prime numbers from 1 to %d are: ", un);
 while(ln<=un)
    {
    int i=1;
    int count=0;
        while(i<=ln)
        {
            if(ln%i==0){
            count=count+1;
                }
                i=i+1;
        }

            if(count==2)
            {
                printf("%d ", ln);
            }

        ln=ln+1;
    }


return 0;
}
