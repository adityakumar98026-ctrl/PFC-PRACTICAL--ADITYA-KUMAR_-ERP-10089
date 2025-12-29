// Max and min element of an array 
                        //NAME - Aditya kumar           ERP - 10089
#include<stdio.h>
int main(){
    int n, i;
    int arr[100];
    int max, min;
    printf("Enter num of elements:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
        max =arr[i];
        if(arr[i]<min)
        min = arr[i];
    }
    printf("Maximum= %d\n",max);
    printf("Minimum =%d\n",min);
    return 0;
}     

// Output -
// Enter num of elements: 5
// 65 85 75 45 89
// Maximum= 89
// Minimum =45