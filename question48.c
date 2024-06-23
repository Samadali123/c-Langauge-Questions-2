#include<stdio.h>

int main(){
    int arr[] = {34,78,31,89,12};
    int count = sizeof(arr)/sizeof(int);

    int smallestindex = 0;
    for(int i=1; i<count; i++){
        if(arr[smallestindex]>arr[i]){
            smallestindex = i;
        }
    }
    printf("smallest index of an array is %i,smallestindex element is %i",smallestindex,arr[smallestindex]);
    
    return 0;
}