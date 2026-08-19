#include<stdio.h>

int main()
{
    int arr[2][3] = {1,2,3,4,5,6};

    int row=2;
    int column=3;

    for(int c=0;c<column;c++)
    {
        for(int r=0; r<row;r++)
        {
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }


    return 0;
}
