#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int searching = 8;
    int check = -1;
    int count = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = count-1;
    int middle = (start + end) / 2;

    while (start <= end)
    {
        
            if (arr[middle] == searching)
            {
                printf("found !");
                check = middle;
                break;
            }
            else if (searching > arr[middle])
            {
                start = middle + 1;
                middle = (start + end) / 2;
            }
            else if (searching < arr[middle])
            {
                end = middle - 1;
                middle = (start + end) / 2;
            }
        }
    
    if (check == -1)
    {
        printf("element not found !");
    }
    else
    {
        printf("element is found at index %i,element is %i", check, arr[check]);
    }
    return 0;
}