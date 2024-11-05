#include <stdio.h>

int main(void) 
{
    int arr[5];
    int odd[5], even[5];
    int oddCount = 0, evenCount = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) 
        {
            even[evenCount++] = arr[i];
        }
        else 
        {
            odd[oddCount++] = arr[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) 
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}
