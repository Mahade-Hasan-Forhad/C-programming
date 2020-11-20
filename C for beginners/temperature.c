#include  <stdio.h>
int  main()
{
    float celsius, fahrenheit;
    printf ("\n enter temperature in celsius :  ");
    scanf ("%f",& celsius);
    fahrenheit = (1.8*celsius)+32;
    printf ("\n temperature in fahrenheit : %f", fahrenheit);
    return (0);

}
