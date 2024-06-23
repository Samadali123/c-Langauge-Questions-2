// #include<stdio.h>

// int main(){
//     int n1;
//     printf("enter n1:\n");
//     scanf("%i",&n1);
//     int n2;
//     printf("enter n2:\n");
//     scanf("%i",&n2);

//     if(n1<n2){
//         for(int i=1; i<=n1; i++){
//             if(n1%i ==0 && n2%i == 0){
//                 printf("%i ",i);
//             }
//         }
//     }
//     else{
//         for(int i=1; i<=n2; i++){
//             if(n1%i == 0 && n2%i == 0){
//                 printf("%i ",i);
//             }
//         }
//     }

//     return 0;

// }

#include<stdio.h>

int main(){
    int n1,n2;
    printf("enter a n1,n2:\n");
    scanf("%i %i",&n1,&n2);

    for(int i=1; i<=n1; i++){
        if(n1%i ==0){
            printf("%i   \n",i);
        }
    }

    for(int i=1; i<=n2; i++){
        if(n2%i == 0){
            printf("%i ",i);
        }
    }
    


    return 0;
}