// 3. Print the pattern:                            Name -Aditya kumar               ERP-10089
// A
// AB
// ABC
// ABCD

#include<stdio.h>
int main(){
    int i, j;
    for(i=1; i<=4; i++){
         char ch='A';
        for(j=1; j<=i; j++){
        printf("%c",ch);
          ch++;
      }
       printf("\n");
    }
    return 0;
}

//     OUTPUT 
// A
// AB
// ABC
// ABCD