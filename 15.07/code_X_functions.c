    #include <stdio.h>

    int main()
    {
        int x=2;

        x*=3; // x=x*3, x=6
        printf("%d\n",x);

        x/=2; // x=x/3, x=3
        printf("%d\n",x);

        x%=2; // x=x%2. x=1
        printf("%d\n",x);


    //=+ is not the same as +=
        x=+2; // x value becomes +
        printf("%d\n",x);


        int y=2;
        x=2+(y>2);
        printf("%d\n",x);


        return 0;
    }
