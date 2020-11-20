#include <stdio.h>
main()
{
    float marks;
    printf ("Enter your marks :");
    scanf ("%f",&marks);
    if(marks>=40)
    {
        printf ("You are pass");
    }
    else
    {
        printf ("You are fail");
    }
    return 0;
}
