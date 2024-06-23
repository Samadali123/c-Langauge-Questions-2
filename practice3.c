#include<stdio.h>

int main(){
    char str1[] = "hello dost kaise ho";
    char str2[] = "hello dost kaise ho";
    int size1 = sizeof(str1)/sizeof(char);
    int size2 = sizeof(str2)/sizeof(char);
    int check = 0;
    if(size1 != size2){
        check = 1;

    }

    else {
        int i=0;
        while(str1[i] != '\0'){
            if(str2[i] != str1[i]){
                check = 1;
                break;
            }
        }
    }

    if(check == 0){
        printf("identical !");
    }
    else{
        printf("not identicals !");
    }
    return 0;
}