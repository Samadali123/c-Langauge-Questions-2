// print the sum of series 1 + 11 +111 +1111 = sum;



#include<stdio.h>
#include<math.h>

int main(){
    
    int last = 0;
    int sum = 0;
    for(int i = 1; i<5; i++){
         last = last*10+1;
         if(i == 4){
             printf("%i ", last);
         }
         else{
             printf("%i+ ", last);
         }
         
         sum = sum + last;
    }
    
    printf("= %i", sum);
    return 0;
}