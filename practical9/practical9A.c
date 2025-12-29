//Reverse an array 
                   /* Name - Aditya kumar   ERP-10089*/
#include<stdio.h>
int main(){
    int i, n;
    int arr[100];
    printf("Enter num of elements:");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
}
printf("Reversed Array:\n");
for(int i=n-1; i>=0; i--){
    printf("%d",arr[i]);
}
return 0;
}
/*output
Enter num of elements: 5
Enter Elements:
4 5 6 7 8
Reversed Array:
87654    */
