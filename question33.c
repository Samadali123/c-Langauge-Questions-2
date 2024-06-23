// accept a number and check whther it is a 
// armstrong number or not !

#include<stdio.h>

int main(){
    int n;
    printf(" emter a number :\n");
    scanf("%i",&n);

    
   int sum =0;
    int copy =n;

    while(n>0){
        int remainder = n%10;
        sum =  sum +remainder*remainder*remainder;
        n= n/10;
    }
    if(copy == sum){
        printf(" yes ,it is a armstrong number !\n");
    }
    else{
        printf("no ,it is not a armstrong number !\n");
    }
    
    return 0;
}
    