#include<stdio.h>

int main(){
    int n;
    printf("enter array elements:\n");
    scanf("%i",&n);

    int arr[n];
    int sum =0;

    for(int i=0; i<n; i++){
        scanf("%i",&arr[i]);
        sum = sum + arr[i];

    }
    printf("mean of array elements is %.2f",(float)sum/n);
    


    return 0;
}