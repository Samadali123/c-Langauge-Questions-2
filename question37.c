#include<stdio.h>

int main(){
    int previous =0;
    int next =1;
    printf("%i ",previous);
    printf("%i ",next);

    for(int i=1; i<7; i++){
        int temp=next;
        next=previous+next;
        previous=temp;
        printf("%i ",next);
    }

    return 0;
}