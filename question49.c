#include<stdio.h>

int main(){
    int occ[] = {0,0,0,0,0,0,0,0,0,0};
    int arr[] = {1,2,2,3,3,4,4,5,6,7};
    int count = sizeof(arr)/sizeof(int);

    for(int i=0; i<count; i++){
        occ[arr[i]]++;
    }

    for(int i=1; i<11; i++){
        printf("%i came %i times\n",i,occ[i]);
    }
    return 0;
}