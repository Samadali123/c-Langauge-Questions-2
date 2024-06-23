#include<stdio.h>

int main(){
    int n;
    printf("enter a number :\n");
    scanf("%i",&n);
    int sum =0;
    int copy=n;
    while(n>0){
        int digit =n%10;
        sum = sum+digit;
        n=n/10;
    }
    printf("sum of digit is %i\n",sum);
    if(copy%sum==0){
    printf("harshad number !");
    }
    else{
        printf("no,it is not a harshad number !");
    }
    return 0;
}