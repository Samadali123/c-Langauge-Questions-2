#include<stdio.h>

int main(){
    int n;
    printf("enter array elements:\n");
    scanf("%i",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);
    
    }
    printf("array elements in reverse order:\n");
    for(int i=n-1; i>=0; i--){
        printf("%i ",arr[i]);
    
    }


    return 0;
}