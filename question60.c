// question 60:
#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,5,5,6,7,7,8,2,2,9};
    int count = sizeof(arr)/sizeof(int);
    
    int n;
    printf("enter a number:\n");
    scanf("%i",&n);
    
    int occ = 0;
    
    for(int i=0; i<count; i++){
        if(n == arr[i]){
            occ++;
        }
    }
    printf("number entered occurning %i times",occ);
    return;
}