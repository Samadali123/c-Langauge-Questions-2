#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int count = sizeof(arr)/sizeof(int);
    
    printf("before rotation");
    for(int i=0; i<count; i++){
        printf("%i ",arr[i]);
    }
    
    int arr2[count];
    int k;
    printf("\nkitna rotate krna hai ");
    scanf("%i",&k);
    
    int progress =0;
    for(int i=count-k; i<count; i++){
        arr2[progress] = arr[i];
        progress++;
    }
    
    for(int i=0; i<count; i++){
        arr2[progress] = arr[i];
        progress++;
    }
    
    for(int i=0; i<count; i++){
        printf("%i ",arr2[i]);
    }
    
    
    return 0;
}