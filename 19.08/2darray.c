#include<stdio.h>

int main()
{
    int arr[3][2] = {1,2,3,4,5,6};

    int row=3;
    int column=2;

    for(int r=0; r<row;r++)
    {
        for(int c=0;c<column;c++)
        {
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }


    return 0;
}
