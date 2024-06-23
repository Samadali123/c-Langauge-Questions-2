// print the sum of series 9 99 999 9999 ...
// 10^1-1, 10^2-1, 10^3-1, 10^4-1....
#include<stdio.h>
#include<math.h>

int main()
{
    int sum = 0;
    for(int i=1; i<5; i++){
        sum = sum + pow(10,i)-1;
    }
    
    printf(" sum is %i ",sum);
    return 0;
}