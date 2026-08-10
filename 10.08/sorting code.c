#include <stdio.h>
int main()
{
    int len;
    float sum=0;
    printf("Please Enter the number of students: \n");
    scanf("%d", &len);
    int marks[len];
    int i;
    for(i = 0; i<len; i+=1)
    {
        printf("Please enter the marks of student %d. \n", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    int max=marks[0];
    int min=marks[0];
    for(i=0; i<len; i+=1)
    {
        if(max<marks[i])
        {
            max=marks[i];
        }
        if(min>marks[i])
        {
            min=marks[i];
        }
    }
    printf("The Avg mark is %0.2f \n", sum/len);
    printf("The Max mark = %d\n", max);
    printf("The Min mark = %d\n", min);
 return 0;
}
