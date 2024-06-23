// take a number as input and print its table 
#include<stdio.h>
int main()
{
    int n;
    printf(" enter an number :\n");
    scanf("%i",&n);
    for(int i=1; i<11; i++){
        printf("%i*%i=%i\n",n,i,n*i);
    }
    return 0;
} 