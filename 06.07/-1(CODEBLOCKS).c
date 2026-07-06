#include <stdio.h>

int main(){

int n;
int pos_count=0;
int zero_count =0;
int neg_count = 1;


printf("enter num:");

while(n!=-1)
{
    scanf("%d",&n);
    if(n>0)
    {

        pos_count = pos_count+1;
    }else{
        if(n==0)
        {
            zero_count = zero_count+1;
        }else{
            neg_count = neg_count+1;
        }
    }

}

printf("num of pos nums = %d\n num of neg nums = %d\n num of zeros = %d", pos_count,neg_count,zero_count);


return 0;
}
