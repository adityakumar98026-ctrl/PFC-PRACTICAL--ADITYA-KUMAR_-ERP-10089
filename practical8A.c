//1. Write Function sumOfDigits that take n as input and return sum of its digits 
      // Eg n = 4123  output = 10
                                                //Name -Aditya kumar               ERP-10089
#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
     sum = sum + (n % 10);
    n = n / 10;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
        //output
// Enter a number: 4123
// Sum of digits = 10