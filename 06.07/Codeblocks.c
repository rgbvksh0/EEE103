#include <stdio.h>

int main(){

int n;
printf("enter the num:\n");
scanf("%d",&n);

int i=1;
int count=0;
while(i<=n)
{
    if(n%i==0){
        count=count+1;
    }
    i=i+1;
}

if(count==2)
{
    printf("the num is prime\n");
}else{
  printf("the num is NOT prime\n");
};
return 0;
}
