#include <stdio.h>

int feeah(int happiness, int love) //global variable
{
    int result = happiness + love;
    return result;
}

int main()
{

    printf("The Result is %d.\n", feeah(4,5));

    int a = feeah(2,3)*5;
    printf("%d\n",a);


    int x=2, y=3; // this is a local variable and wouldn't affect the next line as they would use the global variable

    int b = feeah(4,5)*5;
    printf("%d\n",b);

    int local_adder = 0;
    local_adder = x+y;
    printf("Using the local variables = %d\n", local_adder);



    return 0;
}
