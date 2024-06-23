#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = sizeof(arr) / sizeof(int);
    int searching = 7;
    int start = 0;
    int end = 9;
    int middle = (start + end) / 2;
    int check = 0;

    while (start <= end)
    {
        if (arr[middle] == searching)
        {
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
    if (check == 0)
    {
        printf("not found !");
    }
    else
    {
        printf("found at index %i", check);
    }

    return 0;
}