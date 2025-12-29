// Max and Min element in 2D array
                    //Name - Aditya kumar     ERP-10089

#include<stdio.h>
int main(){
    int arr[2][2], i, j, max, min;
    printf("Enter elements of 2x2 matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    } max = min = arr[0][0];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }
     printf("Max = %d\n", max);
    printf("Min = %d", min);
     return 0;
}
//     Output
// Enter elements of 2x2 matrix:
// 4 5 6 8
// Max = 8
// Min = 4
