// // #include<stdio.h>

// // int main(){
// //     int arr[] ={1,2,3,4,5,6};
// //     int count = sizeof(arr)/sizeof(int);

// //     int temp = arr[0];

// //     for(int i=1; i<count; i++){
// //         arr[i-1]=arr[i];

// //     }

// //     arr[5] = temp;

// //     for(int i=0; i<count; i++){
// //         printf("%i ",arr[i]);
// //     }
// //     return 0;
// // }

// #include<stdio.h>

// int main(){
    
//     int arr[] = {1,2,3,3,2,1};
//     int count = sizeof(arr)/sizeof(int);
//     int last = count-1;
//     int check =0;

//     for(int i=0; i<=count/2; i++){
//         if(arr[i] != arr[last]){
//             check = 1;
//             break;
//         }
//         last--;
//     }
    

// if(check ==0){
//     printf("palindome hai !");
// }
// else{
//     printf("nahi hai !");
// }
//     return 0;
// }

