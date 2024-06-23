#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int count = sizeof(arr)/sizeof(int);

    
    int arr2[count];

    for(int i=0; i<count; i++){
        printf("%i ",arr[i]);
    }
    
    int k;
    printf("\nkitna rotate krna hai:");
    scanf("%i",&k);
    
    if(k>count){
        printf("nikal lo make ladle....");
    }
    else{
      int progress = 0;
    for(int i=k; i<count; i++){
        arr2[progress] = arr[i];
        progress++;
    }

    for(int i=0; i<k; i++){
        arr2[progress] = arr[i];
        progress++;
    }

    for(int i=0; i<count; i++){
        printf("%i ",arr2[i]);
    }


    }
    

    return 0;
}