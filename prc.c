#include<stdio.h>

int main(){
    int occ[] = {0,0,0,0,0,0,0,0,0,0};
    int arr[] = {1,1,2,2,3,4,4,5,5,6};
    int count = sizeof(arr)/sizeof(int);
    
    for(int i=0; i<count; i++){
        occ[arr[i]]++;
    }

    for(int i=0; i<10; i++){
        printf("%i came %i times\n",i,occ[i]);
    }
    return 0;
}