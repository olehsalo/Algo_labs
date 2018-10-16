#include<stdio.h>
#include<math.h>
#define M_E 2.71
int main ()
{
     //here I am initializing type double variables
    double a, n, s=0;
    //I'm using cycle 'for' to calculate "a" and add it to the sum(s)
    for (n = 0; n < 7; n++)
    {
         a = n*n/pow(M_E, pow(n, 1/2));
         s +=a;


    }
    //here the result is being ptinted
    printf("%lf", s) ;
    return 0;
}
