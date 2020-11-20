#include <stdio.h>
main()
{
    int rad;
    float PI=3.1416,area,CI;
    printf ("\n Enter radius : ");
    scanf ("%d",&rad);
    area=(PI*rad*rad);
    printf  ("\n Area : %f",area);
    CI=(2*PI*rad);

    printf  ("\n Circumference of circle ; %f",CI);
    return(0);

}
