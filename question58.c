#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int count = sizeof(arr)/sizeof(int);
    int k;
    printf("kitna roate krhja hai batao");
    scanf("%i",&k);
    int arr2[count];
    
    int track = 0;

    for(int i = count-k; i<count; i++){
        arr2[track ] = arr[i];
        track++;
    }

    for(int i=0; i<=k; i++){
        arr2[track] = arr[i];
        track++;
    }

    for(int j=0; j<count; j++){
        printf("%i ",arr2[j]);
    }
    return 0;
}