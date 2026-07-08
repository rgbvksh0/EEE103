#include <stdio.h>

int main(){

int n1;
int n2;
printf("enter the range:\n");
scanf("%d", &n1);
scanf("%d", &n2);

int i,j;

for(i=n1; i<=n2; i=i+1)
{
    int count=0;
    for(j=1; j<=i; j=j+1)
    {
        if(i%j==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("%d\n",i);
    }
}


return 0;
}
