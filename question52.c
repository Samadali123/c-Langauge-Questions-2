#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int count = sizeof(arr)/sizeof(int);
     
     int temp = arr[5];
    for(int i=0; i<count; i++){
        printf("%i ",arr[i]);
    }
    printf("\nafter:");

    for(int i=count-1; i>=0; i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = temp;
    
    for(int i=0; i<count; i++){
        printf("%i ",arr[i]);
    }
    return 0;
}