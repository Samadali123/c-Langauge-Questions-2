#include<stdio.h>

int main(){
    int n;
    printf("emter  a number :\n");
    scanf("%i",&n);
    
    int check =0;
    for(int i=2; i<n/2; i++){
        if(n%i==0){
            check =1;
        }
    }
    if(check==0){
        printf("prime number hai sahab !");
    }else{
        printf("nahi h sahab prime number !");
    }
    return 0;
}