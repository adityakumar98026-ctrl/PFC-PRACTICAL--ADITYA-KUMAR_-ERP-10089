//Write a function to prints a right angle triangle of stars of height n.
                                               // Name -Aditya kumar               ERP-10089
#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Output
// Enter a number:4
// * 
// * * 
// * * * 
// * * * *