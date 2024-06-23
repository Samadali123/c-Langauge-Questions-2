// // #include<stdio.h>

// // int main(){
// //     int n;
// //     printf("enter  n:\n");
// //     scanf("%i",&n);

// //     for(int i=1; i<=n; i++){
// //         if(n%i==0){
// //             printf("%i ",i);
// //         }
// //     }

// //     return 0;
// // }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter a n:\n");
//     scanf("%i",&n);
//     int rev = 0;
//     int copy =n;
//     while(n>0){
//         int digit = n%10;
//         rev = rev*10+digit;
//         n=n/10;
//     }
//     if(copy == rev){
//         printf("palindprme hai !");
//     }
//     else{
//         printf("nahi hai !");
//     }

//     return 0;



// }

#include<stdio.h>

int main(){
    int n;
    printf("enter a n:\n");
    scanf("%i",&n);
    int sumeven =0;
    int sumodd = 0;
    
    for(int i=1; i<=n; i++){
        if(n%2==0){
            sumeven = sumeven +i;
        }
    }
    return 0;
}