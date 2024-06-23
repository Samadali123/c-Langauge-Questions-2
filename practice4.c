#include<stdio.h>

int main(){
    int start,end;
    printf("start or end batao:\n");
    scanf("%i %i",&start,&end);

    if(start<end){
            for(int i=start; i<=end; i++){
                int sum=0;
        int n=i;
        int copy = n;
        
    
    while(n>0){
        int digit = n%10;
        sum = sum+digit*digit*digit;
        n=n/10;

    }
    }
    }

    else{
        int temp = start;
        start = end;
        end= temp;

        for(int i=start; i<=end; i++){
            int sum =0;
        int n=i;
        int copy = n;
        
    while(n>0){
        int digit = n%10;
        sum = sum+digit*digit*digit;
        n=n/10;

    }
    if(sum == copy)
    {
        printf("%i ",sum);
    }
    }
  

    


    


    }
    

    return 0;
}