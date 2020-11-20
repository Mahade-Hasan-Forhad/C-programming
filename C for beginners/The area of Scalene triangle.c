   #include <stdio.h>
   #include <math.h>
   int main()
   {
       int s1,s2,angle;
       float area;
       printf ("\n Enter Side1 : ");
       scanf ("%d",&s1);
       printf ("\n Enter Side2 : ");
       scanf ("%d",&s2);
       printf ("\n Enter Angle : ");
       scanf ("%d",&angle);
       area = (s1*s2*sin((M_PI/180)*angle))/2;
       printf ("\n Area of Scalene Triangle : %f", area);
       return(0);
   }
