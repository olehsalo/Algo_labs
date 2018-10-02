#include<stdio.h>


int main ()
{
    //here I am initializing type double variables
    double m, n, a, b, x, c;
    //here I politely ask user to input m and n
    printf("m:\n");
    scanf("%lf", &m);
    printf("n:\n");
    scanf("%lf", &n);

    //here the result is being calculated
    a=--m-++n;
    x=m*n;
    b=x<n++;
    c=n-->m++;
    //here the result is being printed
   printf("%lf\n", a);
   printf("%lf\n", b);
   printf("%lf\n", c);

    return 0;
}
