//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result (no decimal part if integer value)
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}

