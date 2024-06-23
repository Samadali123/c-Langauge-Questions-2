// print 0 1 1 2 3 5 8 13 21 34 55
#include<stdio.h>
int main()
{
    int first =0;
    int second =1;
    printf("%i %i",first,second);
    for(int i=1; i<10; i++){
        int next = first + second;
        first = second;
        second = next;
        printf(" %i ",next);
    
    }

    return 0;
}