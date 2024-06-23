// print 1 to 11 ignore the 7 and 9 fro  it ..
#include<stdio.h>
int main()
{
    for(int i=1; i<12; i+=2){
        if(i!=7 && i!=9){
            printf("%i ",i);
        }
    }
    return 0;
}