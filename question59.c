// median of array elemenst!
#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int count = sizeof(arr)/sizeof(int);
    
    int start = 0;
    int end = 8;
    int middle = (start+end)/2;
    
    for(int i=0; i<count; i++){
        if(arr[middle] == arr[i]){
            printf("found  at index %i , element is %i",middle,arr[middle]);
        }
        
    }
    return 0;
}