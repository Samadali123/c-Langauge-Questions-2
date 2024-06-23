// print all the factors of aanumber !
#include<stdio.h>

int main(){
    int n;
    printf("enter a number :\n");
    scanf("%i",&n);

   for(int i=1; i<=n/2; i++){
    if(n%i==0){
        printf("%i ",i);
    }
   }
   printf("%i",n);
    return 0;
}