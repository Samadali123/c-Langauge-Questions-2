// print the sum of series 4 44 444 4444....
// pichla*10+4, 4*10+4, 44*10+4,444*10+4..

#include<stdio.h>

int main(){
    int sum =0;
    int pichla = 0;
    for(int i=1; i<5; i++){
    pichla  = pichla*10+4;
    sum = sum +pichla;
    }
    printf(" sum  is :%i",sum);
    
    return 0;
}