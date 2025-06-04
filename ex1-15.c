/*
 * Rewrite of the temperature conversion program of Section 1.2
 */
#include <stdio.h>

float convertFahrenheit2Celsius(float f);
float convertCelsius2Fahrenheit(float c);

int main(void)
{
    printf("Temp |    C   |    F\n");
    printf("----------------------------\n");
    for (int i = -20; i <= 300; i += 20) {
        printf("%4d | %6.1f | %6.1f\n",
                i,
                convertFahrenheit2Celsius(i),
                convertCelsius2Fahrenheit(i));
    }

    return 0;
}

float convertFahrenheit2Celsius(float f)
{
    return ((5.0/9.0) * (f-32.0));
}

float convertCelsius2Fahrenheit(float c)
{
    return ((c * 9.0/5.0) + 32);
}
