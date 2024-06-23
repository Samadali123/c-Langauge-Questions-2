// ask a number and check whether their sum is palindromic or not !
#include<stdio.h>

int main(){
    int n;
    printf("number please:\n");
    scanf("%i",&n);
    int sum =0;

    while(n>0){
        int digit = n%10;
        sum = sum+digit;
        n=n/10;
    }
    printf("sum of digits is :%i\n",sum);

int reverse =0;
int copy =sum;
    while(sum>0){
        int rem = sum%10;
        reverse = reverse*10+rem;
        sum= sum/10;
    }
    if(reverse ==copy){
        printf("palindromic sum !");
    }
    else{
        printf("not a palindromic sum !");
    }
    return 0;
}