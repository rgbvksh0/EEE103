#include <stdio.h>

int main(){

int ln;
printf("enter the lower limit:\n");
scanf("%d",&ln);

int un;
printf("enter the upper limit:\n");
scanf("%d",&un);


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
                printf("the num %d is prime\n", ln);
            }
         //   else{
         //       printf("the num %d is NOT prime\n", ln);
         //  };

        ln=ln+1;
    }


return 0;
}
