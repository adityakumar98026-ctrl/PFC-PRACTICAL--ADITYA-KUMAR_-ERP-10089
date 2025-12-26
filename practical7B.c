// 2. Hourglass of length 2n-1                  Name -Aditya kumar               ERP-10089
#include <stdio.h>
int main() {
    int n, i, j, space;
     printf("Enter n: ");
     scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (space = 0; space < n - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
         printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (space = 0; space < n - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }   return 0;
}

//         OUTPUT
// Enter n: 4
// *******
//  *****
//   ***
//    *
//   ***
//  *****
// *******