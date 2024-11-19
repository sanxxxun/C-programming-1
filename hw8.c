#include <stdio.h>
#include <math.h>

double calculate_standard_deviation(double arr[], int size);

int main()
{
    double numbers[5];
    
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &numbers[i]);
    }
    
    double std_dev = calculate_standard_deviation(numbers, 5);

    printf("Standard Deviation = %.3f\n", std_dev);
    
    return 0;
}

double calculate_standard_deviation(double arr[], int size)
{
    double sum = 0.0, mean, variance = 0.0, std_dev;
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    mean = sum / size;
    
    for (int i = 0; i < size; i++)
    {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;
    
    std_dev = sqrt(variance);
    return std_dev;
}