#include <stdio.h>
/*print fahrenheit-celsius table
for fahr = 0, 20, ..., 300 floatingpoint conversion*/
int main()
{ /*Variable Declaration*/
    float fahr, Celsius;
    float lower, upper, step;

    lower = 0;   /*lower limit of the temperature*/
    upper = 300; /*Upper limit of the temperature*/
    step = 5;    /*step size*/

    fahr = lower;
    // print the table header
    printf("Fahr  Celsius\n");
    printf("-------------------\n");

    while (fahr <= upper)
    {
        Celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0f %7.1f\n", fahr, Celsius);
        fahr = fahr + step;
    }
}