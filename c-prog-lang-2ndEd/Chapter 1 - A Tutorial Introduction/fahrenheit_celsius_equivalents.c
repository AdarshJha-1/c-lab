#include <stdio.h>

/*
C=(5/9)(F-32)
*/

main()
{
    // int fahrenheit, celsius;
    // int lower, upper, step;

    float fahrenheit, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    while (fahrenheit <= upper)
    {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}