#include <stdio.h>
int main()
{
    int base,hight;
    float area;
    printf ("\n Enter The Base of Triangle : ");
    scanf ("%d", &base);
    printf ("\n Enter The Hight of Triangle : ");
    scanf ("%d", &hight);
    area = (0.5*base*hight);
    printf ("\n Area of Triangle : %f",area);
    return(0);
}
