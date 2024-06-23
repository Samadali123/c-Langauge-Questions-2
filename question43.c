#include<stdio.h>

int main(){
    int n;
    printf("enter array elements:\n");
    scanf("%i",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);

    }
    printf("positive Elements:");
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            printf("%i ",arr[i]);
        }
        
    }

    printf("\nnegative elements:");
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            printf("%i ",arr[i]);
        }
    }
    return 0;
}