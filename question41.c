#include<stdio.h>

int main(){
    int n;
    printf("enter array elemenst:\n");
    scanf("%i",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);

    }

    for(int i=0; i<n; i++){
        printf("%i ",arr[i]);
        
    }

    return 0;
}