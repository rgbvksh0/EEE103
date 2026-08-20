#include <stdio.h>

int main(){

int n;
printf("enter the num:\n");
scanf("%d",&n);

int i=1;
int count=0;
while(i<=n)
{
    if(n%i==0){
        count=count+1;
    }
    i=i+1;
}

if(count==2)
{
    printf("the num is prime\n");
}else{
  printf("the num is NOT prime\n");
};
return 0;
}


#include <stdio.h>
/*
int prime() {
    int n;
    printf("Enter the num:\n");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        printf("The num is NOT prime\n");
        return 0;
    }

    int isPrime = 1; // Assume the number is prime (1 = true)

    // Check divisors from 2 up to i * i <= n (equivalent to sqrt(n))
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0; // Found a divisor, so it's not prime
            break;       // Exit the loop early to save time
        }
    }

    if (isPrime) {
        printf("The num is prime\n");
    } else {
        printf("The num is NOT prime\n");
    }

    return 0;
} */

