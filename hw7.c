#include <stdio.h>

int main(void)
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};
    int *fptr = &arr1[0];
    int *bptr = &arr2[0];
    int temp;

    printf("arr1: %d %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
    printf("arr2: %d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

    for (int i = 0; i < 6; i++)
    {
        temp = *fptr;
        *fptr = *bptr;
        *bptr = temp;
        fptr++;
        bptr++;
    }
    
    printf("\nafter swap\n");
    printf("arr1: %d %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
    printf("arr2: %d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);
    
    return 0;
}