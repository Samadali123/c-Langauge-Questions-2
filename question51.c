#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6};
    int count = sizeof(arr)/sizeof(int);
    
    printf("before left rotation :");
    for(int i=0; i<count; i++){
     printf("%i ",arr[i]);
    }
    int temp = arr[0];
    for(int i=1; i<count; i++){
        arr[i-1] =arr[i];
    }
    

    printf("\nafter left rotation:");
    
    arr[count-1] = temp;

    for(int i=0; i<count; i++){
     printf("%i ",arr[i]);
    }
    return 0;
}