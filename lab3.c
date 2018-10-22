#include<stdio.h>
#include<math.h>
#define M_E 2.71
int main()
{
    double  x=0.1,n,h=1,a,e,sn,se,k,y;
    for(k=0;k<10;k++)
    {
        y = (pow(M_E, x) - (1/pow(M_E, x)))/2;
        for( n=1;n<20;n++)
        {
            a=x;
            sn=0;
            a *= x*x/((2*n+2)*(2*n+3));
            sn = sn+x+a;
        }
        do
        {
            e=x;
            se=0;
            e *= x*x/((2*h+2)*(2*h+3));
            se = se+x+e;
            h++;
        }
        while(e>0.0001);

        printf("x=%lf SN=%lf SE=%lf y=%lf\n",x,sn,se,y);
        x+= 0.09;
    }
    return 0;
}
