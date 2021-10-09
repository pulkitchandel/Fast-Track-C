#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

float celsius_to_fahrenheit(float celsius){
    // celsius to fahrenheit conversion formula
    float fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}
float fahrenheit_to_celsius(float fahrenheit){
    //fahrenheit to celsius conversion formula
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main()
{
    float temp;
    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    printf("%.2f Celsius = %.2f Fahrenheit\n", temp, celsius_to_fahrenheit(temp));
    printf("%.2f Fahrenheit = %.2f Celsius", temp, fahrenheit_to_celsius(temp));

    return 0;
}
