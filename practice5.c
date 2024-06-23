#include<stdio.h>

int main(){
    int n;
    printf("enter a number:\n");
    scanf("%i",&n);
    int sum =0;
    int copy =n;

    while(n>0){
        int fact =1;
        
        for(int i=n; i>=1; i--){
         fact = fact*i;
        }
        sum = sum + fact;
        n=n/10;
    }
    if(sum == copy){
     printf("strong number !");
    }
    else{
        printf("not a strong number !");
    }
    
    return 0;
}