#include <stdio.h>

void conv(char str[])
{
    int i = 0;
    const int diff = 'a' - 'A';

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += diff;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= diff;
        i++;
    }
}

int main(void)
{
    char str[100];

    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    conv(str);
    printf("Output> %s\n", str);
    return 0;
}