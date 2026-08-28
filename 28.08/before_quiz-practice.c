#include <stdio.h>

void greet(char name[])
{
    printf("Hello, %s!", name);
}

//if you write the function below the main function, you MUST!-
// -initialize the function before it
int add(int a, int b);

int main()
{

    // greet("Adam");

    /*
    int res=add(10,20);
    printf("Result = %d", res);
    */

    return 0;
}


int add(int a, int b)
{
    return a+b;
}
