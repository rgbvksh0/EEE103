
#include <stdio.h>

int fact(int n)
{
    int result = 1;
    if(n==0)
    {
        return 1;
    }
    else {
        result = n*fact(n-1);
        return result;
    }

}

int main()
{
    int
}
























/*
int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);

    int x=fact(n);

}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else {
        result = n * fact(n-1);
        return result;
    }
}
*/
