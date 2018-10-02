#include<stdio.h>
#include<math.h>

int main ()
{
    //here I am initializing type float variables
    float a, b, c, d, e, f, g, h;
    //here I politely ask user to input a and b
    printf("input a");
    scanf("%f", &a);
    printf("input b");
    scanf("%f", &b);
    //I've divided one big formula into few ones that are smaller
    c=a - b;
    d=pow(c, 3);
    e=pow(a, 3) - 3*a*a*b;
    f=d - e;
    g=pow(b, 3) - 3*a*b*b;
    h=f/g;
    //here the result is being printed
    printf("%f", h);

    return 0;
}
