#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int count = sizeof(arr)/sizeof(int);
    int searching = 6;
    int check =0;

    for(int i=0; i<count; i++){
        if (arr[i] == searching){
            printf("found at index %i,element is %i",i,arr[i]);
            check =1;
            break;
        }
    }
    return 0;
}