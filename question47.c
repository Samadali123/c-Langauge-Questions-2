#include<stdio.h>

int main(){
    int arr[] = {1,2,45,78,43,89};
    int count = sizeof(arr)/sizeof(int);

    int largestindex = 0;
    for(int i=1; i<count; i++){
        if(arr[largestindex]<arr[i]){
            largestindex = i;
        }
    }
    printf("largest index of an array is %i,largest index element is %i",largestindex,arr[largestindex]);
        return 0;
}