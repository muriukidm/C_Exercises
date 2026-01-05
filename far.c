#include <stdio.h>
/*print the conversions of celcius to farenheit
in the following order with a changeable stepsize we can use
20 as the first. 0,20,...,300*/
int main()
{ /*variable declaration*/
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;   // lower bound of the temperature
    upper = 300; // upper bound of the temperature
    step = 20;   // changeable step size

    celsius = lower;
    // print the table header
    printf("celsius fahr\n");
    printf("-------------------\n");

    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%4.0f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}