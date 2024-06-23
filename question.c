#include<stdio.h>

int main(){
    int arr[] = {1,2,3,3,2,1};
    int count =  sizeof(arr)/sizeof(int);
    int last = count-1;
    int check = 0;
    for(int i=0; i<=count/2; i++){
        if(arr[i] != arr[last]){
            check = 1;
            break;
        }
        last -- ;
    }

    if(check == 0){
        printf("palindromic array !");
    }
    else{
        printf("not a palindormcic artau ");
    }
    return 0;
}