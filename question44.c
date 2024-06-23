#include<stdio.h>

int main(){
    int n;
    printf("enter array elements:");
    scanf("%i",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);

    }
    printf("array in asecending order:");
    for(int i=0; i<n; i++){
        printf("%i ",arr[i]);
    }

    printf("\naray in descending order:");
    for(int i=n-1; i>=0; i--){
        printf("%i ",arr[i]);
    }

    return 0;
}