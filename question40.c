#include<stdio.h>


int main(){
    int previous =0;
    int sum =0;
    for(int i=1; i<5; i++){
        previous=previous*10+1;
        if(i==4){
            printf("%i",previous);
        }
        else{
            printf("%i+ ",previous);
        }
        sum = sum+previous;
    }
    printf("=%i",sum);

    return 0;
}