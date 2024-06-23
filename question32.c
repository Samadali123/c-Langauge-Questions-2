// accept a number and check whether it is a palindromic number or not !
#include<stdio.h>

int main(){
    int n;
    printf("enter  a number :\n");
    scanf("%i",&n);

    int reverse =0;
    int copy =n;
    while(n>0){
        int rem = n%10;
        reverse = reverse *10+rem;
        n= n/10;
    }
    if(copy == reverse){
        printf(" yes it is a palindromic number !");
    }
    else{
        printf(" no, it is not a palindromic number !");
    }
    return 0;
}