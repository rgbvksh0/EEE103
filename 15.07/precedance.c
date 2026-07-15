    #include <stdio.h>

    int main()
    {
        int y=2;
        int x=0;
        int i=0;

        while(y<=150)
        {
            x=3+(++y)*4;
            y=y+x;
            i=i+1;
        };

        printf("%d\n",y);
        printf("%d\n",x);
        printf("%d\n",i);

        return 0;
    }
