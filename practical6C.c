// 3. ATM Pin authentication                        Name -Aditya kumar               ERP-10089
#include<stdio.h>
int main(){
    int pin, correct_pin =9546;
    printf("Enter ATM PIN:");
    scanf("%d",&pin);
    if(pin==correct_pin){
        printf("Acess Granted");
    }else{
        printf("Wrong PIN! Access Denied");
    }
    return 0;
}
//     Output
// Enter ATM PIN:4586
// Wrong PIN! Access Denied

// Enter ATM PIN:9546
// Acess Granted