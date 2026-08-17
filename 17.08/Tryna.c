#include <stdio.h>

int main()
{
    int arr[7]={2,5,2,1,9,2,5};
    int len= sizeof(arr)/sizeof(arr[0]);
    int freq_arr[len];
    int count;

    for(int i=0; i<len; i++)
    {
        count = 0;
        for(int j=0;j<len; j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
        }
        freq_arr[i] = count;
    }

    for(int i=0;i<len;i++)
    {
        printf("%d", freq_arr[i]);
    }

    int max = freq_arr[0];
    int max_location=0;


    for(int i=0;i<len;i++)
    {
        if(max<freq_arr[i])
        {
            max=freq_arr[i];
            max_location=i;
        }
    }


    printf("\n\nMode is %d.\n",arr[max_location]);


    return 0;
}
