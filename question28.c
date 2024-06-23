// print the sum of all odd and even numbers separately !
#include<stdio.h>
int main()
{
    int start,end;
    printf(" start or end batao :\n");
    scanf("%i %i",&start,&end);
    int sumodd  =0;
    int sumeven =0;
    for(int i=start; i<=end; i++){
        if(i%2==0){
            sumeven = sumeven +i;
        }
        else{
            sumodd = sumodd +i;
        }
    }
    printf("sum of even numbers is :%i\n",sumeven);
    printf("sum of odd numbers is :%i",sumodd);
    
    return 0;
    
}