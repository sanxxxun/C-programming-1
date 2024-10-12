#include <stdio.h>

void toBinary(int n)
{
    if (n == 0)
    {
        return;
    }
    toBinary(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int num;
    
    printf("Please enter a number: ");
    scanf("%d", &num);
    
    if (num == 0)
    {
        printf("0\n");
    } 
    else 
    {
        toBinary(num);
        printf("\n");
    }
    return 0;
}