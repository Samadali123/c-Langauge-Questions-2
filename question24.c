// factorial of a number !

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number n:\n");
    scanf("%i",&n);
    int factorial = 1;
    for(int i=n; i>=1; i--){
        factorial = factorial*i;
    }
    printf(" factorial is %i ",factorial);
    return 0;
}