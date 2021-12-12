#include <stdio.h>

int main() 
{
    float days = 0;

    printf("Enter days to convert: ");
    scanf("%f", &days);
    printf("%.f Earth days = %f Jupiter years.", days, days / 4383);

    return 0;
}