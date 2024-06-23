// question 34 :Accept a number and check whether a number is perfect 
// number or not !
// perfect number : A number whose sum of factors excluding number
// itself 

#include<stdio.h>
int main()
{
    int n;
    printf("number please :\n");
    scanf("%i",&n);
    int sum =0;
    
    for(int i=1; i<=n/2; i++){
    if(n%i==0){
        sum = sum+i;
    }
    
    }
    if(sum==n){
        printf("yes its a perfect number !");
    }
    else{
        printf("no its not a perfect number !");
    }
    return 0;
}