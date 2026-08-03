
#include <stdio.h>

int sum(int n)
{
    int result = 1;
    if(n==0)
    {
        return 0;
    }
    else {
        result = n+sum(n-1);
        return result;
    }

}

int main()
{
    int x = sum(15);
    printf("%d\n", x);
}

