//Row wise sum of 2D array
                // Name - Aditya kumar          ERP-10089

#include<stdio.h>
int main(){
    int arr[3][3], i, j, sum;
     printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }       for(i=0; i<3; i++){
        sum = 0;
        for(j=0; j<3; j++){
            sum = sum + arr[i][j];
        }   printf("Sum of row %d = %d\n", i+1, sum);
    }       
    return 0;
}
//         Output
// Enter elements of 3x3 matrix:
// 4 6 5 7 8 9 3 5 7
// Sum of row 1 = 15
// Sum of row 2 = 24
// Sum of row 3 = 15        