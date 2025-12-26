// // 2. Sum of even numbers using continue
                        //Name -Aditya kumar               ERP-10089
#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2!=0)
        continue;
        sum+=i;
    }
    printf("sum of even numbers =%d",sum);
    return 0;
}
// output:-

// Enter a number:10
// sum of even numbers =30