// wap to sum of digits of a number !
#include<stdio.h>

int main(){
    int n;
    printf(" Enter a number n:\n");
    scanf("%i",&n);

    int sum =0;
    while(n>0){
        int digit = n%10;
        sum = sum +digit;
        n= n/10;

    }
    printf("sum of digits is :%i",sum);
    
    return 0;
}