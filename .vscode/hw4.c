#include <stdio.h>

int main() {
    int num, i;

    printf("Please enter a number:");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("It is not a prime number.\n");
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("It is not a prime number.\n");
                break;
            }
            else if (num % (num-1) != 0)
            {
                printf("It is a prime number.\n");
                break;
            }
        }
    }
    
    return 0;
}
