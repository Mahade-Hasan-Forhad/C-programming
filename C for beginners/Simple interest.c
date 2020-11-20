#include <stdio.h>
int main ()
{
    int amount,time,rate,simpleInterest;
    printf ("\n Enter the pricipal amount :  ");
    scanf ("%d",&amount);
    printf ("\n Enter time : ");
    scanf ("%d",&time);
    printf  ("\n Enter Rate of Interest : ");
    scanf ("%d",&rate);
    simpleInterest=(amount*time*rate)/100;
    printf ("\ simple interest : %d",simpleInterest);
    return(0);
}
