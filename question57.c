//selection sort !
#include<stdio.h>
int main()
{
    int arr[] = {1,23,-1,-2,-45,124,900,12000};
    int count = sizeof(arr)/sizeof(int);
    
    for(int j=0; j<count-1; j++){
        for(int i=count-1; i>0; i--){
        if(arr[i-1]>arr[i]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }
    }
    
    for(int i=0; i<count; i++){
        printf("%i ",arr[i]);
    }
    return 0;
}