// binary search !

#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int count = sizeof(arr)/sizeof(int);
    int searching = 8;

    int start = 0;
    int end = 9;
    int middle = (start+end)/2;
    int check =0;

    for(int i=0; i<count; i++){
        if(arr[middle] == searching){
            check = middle;
            break;;
        }
        else if( searching > arr[middle]){
            start = middle + 1;
            middle = (start+end)/2;

        }

        else if(searching < arr[middle]){
            start = middle - 1;
            middle = (start+end)/2;
        }

    }

    printf("element you searching is found at index %i",check);
    return 0;
}