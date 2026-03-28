#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;
    for (int i = 1; i <= n; i++) 
    {
        sum += 1/i;
    }
printf("The sum of the series up to %d terms is: %4f\n", n, sum);
 
    return 0;
}