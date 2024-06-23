// accept a number and print its reverse !
#include<stdio.h>

int main(){
    int n;
    printf(" enter a number :\n");
    scanf("%i",&n);
    int reverse =0;

    while(n>0){
        int rem= n%10;
        reverse = reverse*10+rem;
        n= n/10;

    }
    printf(" reverse of a number is :%i",reverse);
    
    return 0;
}