    // Draw a flowchart and write a program to check whether a given number is an Armstrong number or not.
#include <stdio.h>

int main() {

/*
    int n, tempn, last_d;
    int count = 0;
    int sum = 0;

    printf("Please enter your number: ");
    scanf("%d", &n);

    // Block 1: Count digits
    tempn = n;
    while (tempn != 0) {
        count += 1;
        tempn /= 10;
    }

    // Block 2: Power & Sum Calculation
    tempn = n;
    while (tempn != 0) {
        last_d = tempn % 10;

        // Compute power manually (last_d raised to the power of count)
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= last_d;
        }

        sum += power;
        tempn /= 10;
    }

    // Block 3: Verification
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }
*/

    int n, tempn, last_digit;
    int count;
    int sum;

    printf("enter num:");
    scanf("%d", &n);

    tempn = n;
    while(n!=0){
        temp/10;
        count+=1;
    }

    tempn = n;
    while(n!=0){
        last_digit = tempn % 10;

        power=1;
        for(int i=1; i<=count;i+=1){
            power*=last_digit;
        }
    }


        sum += power;
        tempn /= 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }





    return 0;
}
