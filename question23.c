//print sum upto n terms ..
#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf(" enter a number n :\n");
    scanf("%i",&n);
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("sum is :%i",sum);
    return 0;
    
}