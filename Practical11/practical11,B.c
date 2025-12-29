//Sum of diagonal elements of 2D array
                // Name - Aditya kumar          ERP-10089
 #include<stdio.h>
int main(){
    int arr[3][3], i, j, sum=0;
    printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
    scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<3; i++){
        sum = sum + arr[i][i];
    }
         printf("Sum of diagonal elements = %d", sum);
    return 0;
}
     // Output
// Enter elements of 3x3 matrix:
// 4 5 9 7 6 5 8 4 2
// Sum of diagonal elements = 12