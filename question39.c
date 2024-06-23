#include<stdio.h>
int main()
{
    int n1= 12;
    int n2= 24;
    int hcf;    // 12: 1 2 3 4 6 12, 24:1 2 3 4 8 12 24
    
    for(int i=1; i<=n2; i++){
        if(n1%i == 0 && n2%i == 0){
            hcf = i;
        }
    }
    printf("hcf of two numbers is %i",hcf);
    
    int lcm = n1*n2/hcf;
    
    printf("\nlcm of two numbers is %i",lcm);
    
    return 0;
}

// lcm of two numvers : 12 : 1 2 3 4  12;
// 24 : 1 2 3 4 6 12 24;
