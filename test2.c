#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    int c = a;
    a=b;
    b=c;
    printf("a is %i\n",a);
    printf("b is %i",b);
    return 0;
}