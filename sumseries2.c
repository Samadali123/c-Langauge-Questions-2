#include<stdio.h>
#include<math.h>

int main(){
    
    int sum = 0;
    for(int i =1; i<5; i++){
        int series = pow(10,i)-1;
        if(i == 4){
            printf("%i ", series);
        }
        else{
            printf("%i+ ", series);
        }
        
        sum = sum + series;
    }
    
    printf("= %i", sum);
    return 0;
}