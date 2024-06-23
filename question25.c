// print all the numbers which are either divisible by 3 0r 5 in a range !

#include<stdio.h>
int main()
{
    int start,end;
    printf(" start or end batao :\n");
    scanf("%i %i",&start,&end);
    for(int i=start; i<=end; i++){
        if(i%3==0 || i%5==0){
           printf("%i ",i); 
        }
    }
return 0;
}