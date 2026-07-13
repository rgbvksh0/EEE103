#include <stdio.h>

int main()
{


// int n1,n2,count;

 //printf("please enter the initial and the last number:\n");
 //scanf("%d", &n1);
 //scanf("%d", &n2);

 //int count = n1;

 //while(count<=n2)
 //{
 //   printf("%d\n", count);
  //  count=count+2;
 //};





// int n1,n2;
// printf("please enter the n1:\n");
// scanf("%d",&n1);
// printf("please enter the n2:\n");
// scanf("%d",&n2);

// int count=n1;

  //   while(count <=n2)
    // {
      //  printf("%d\n", count);
        //count=count+1;
     //}


 //   int n;
 //   printf("please enter the n:\n");
 //   scanf("%d",&n);

 //   int count=1, fact=1;

   // while(count<=n){

     //   fact=fact*count;
       // count=count+1;

   // }

  //  printf("%d", fact);



    int n;
    printf("please enter the n:\n");
    scanf("%d",&n);

    if (n % 2 == 0) {
    printf("nice number!");
} else {

    printf("the %d is an odd number", n);

    int sum=0;

    int count=1;
    while(count <=n*n)
    {

        sum=sum+count*count;
        count=count+2;

    }
    }







    return 0;
}
