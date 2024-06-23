#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter a number:\n");
    scanf("%i",&n);
    int previous=0;
    for(int i=1; i<n; i++){
        previous = pow(10,i)+previous;
        printf("%i ",previous);
    }

    
    return 0;
}