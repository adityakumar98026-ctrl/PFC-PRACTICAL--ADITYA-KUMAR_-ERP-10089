//Swap 2 numbers using pass by reference                        Name -Aditya kumar               ERP-10089
#include <stdio.h>
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int a, b;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}
// output -
// Enter two numbers: 4
// 5
// After swap: a = 5, b = 4