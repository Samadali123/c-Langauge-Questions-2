#include<stdio.h>

int main(){
    int n1 = 12;
    int n2 = 24;
    int n3 = 36;

    int hcf;

    for(int i=1; i<=n1 && i<=n2 && i<=n3 ; i++){
            if(n1%i == 0 && n2%i == 0 && n3%i ==0){
                hcf = i;
            }
    }
    printf("hcf of threee numbers is %i",hcf);

    return 0;
}