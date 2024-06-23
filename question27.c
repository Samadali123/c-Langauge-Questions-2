// print all the factors of a number nand sum of it !
#include<stdio.h>

int main(){
    int n;
    scanf("%i",&n);
    int sum =0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            if(i==n/2){
            printf("%i ",i);
            sum = sum +i;
        }
        else{
            printf("%i+ ",i);
            sum = sum +i;
        }
    }
    }
    printf("=%i",sum);
    
    
       return 0;
}