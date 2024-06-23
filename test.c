#include<stdio.h>

int main(){
    int minutes;
    printf("enter no of minutes:\n");
    scanf("%i",&minutes);

    printf("total no of hours is %i",minutes/60);
    printf("remining  minutes is %i",minutes%60);
    
    return 0;
}