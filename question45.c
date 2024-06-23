#include<stdio.h>

int main(){
    int n;
    printf("enter array elements:\n");
    scanf("%i",&n);
    int arr[n];
    int sum=0;

    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);
    }

    for(int i=0; i<n; i++){
        if(i==n-1){
            printf("%i ",arr[i]);
            sum = sum+arr[i];
        }
        else{
            printf("%i+ ",arr[i]);
            sum = sum+arr[i];
        }
    }
    printf("=%i",sum);

    return 0;
}