#include<stdio.h>
#include<math.h>

int main ()
{
     //here I am initializing type double variables
    double a, n, s;
    //I'm using loop 'for' to calculate "a" and add it to the sum(s)
    for (n = 0; n < 7; n++)
    {
         a = n*n/pow(M_E, pow(n, 1/2));
         s +=a;
         ++n;

    }
    //here the result is being ptinted
    printf("%lf", s) ;
    return 0;
}
