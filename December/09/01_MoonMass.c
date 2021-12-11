#include <stdio.h>

int main() 
{
    float moonGravity = 0.17;
    float humanMass = 0;
    printf("Enter your mass: ");
    scanf("%f", &humanMass);
    printf("Your mass on the moon is: %.2f", humanMass * moonGravity);

    return 0;
}