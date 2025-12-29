// Sum of all even elements of an array 
            //Name - Aditya kumar               ERP - 10089

#include<stdio.h>
int main(){
    int n, i, sum=0;
    int arr[100];
    printf("Enter numbers of elements :");
    scanf("%d",&n);
    for(int i=0; i<n; i++){ 
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if (arr[i]%2==0)
        sum+=arr[i];
    }
    printf("Sum of even elements = %d", sum);
    return 0;
}            

//      Output
// Enter numbers of elements : 10
// 5 8 6 7 3 9 1 5 2 4 
// Sum of even elements = 20