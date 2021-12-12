#include <stdio.h>

int main() 
{
    float ounces = 0;
    
    printf("Enter ounces: ");
    scanf("%f", &ounces);
    printf("%.f fluid ounces = %.2f US cups!", ounces, ounces / 8);

    return 0;
}