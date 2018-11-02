#include<stdio.h>
#define MAX 40

void PrintResult(int setA[MAX], int m, int n);
int main()
{
    int i, x, m, n;
    int setA[MAX];
    printf("enter the number of lines:");
    scanf("%d",&m);
    printf("\n");
    printf("enter the number of columns:");
    scanf("%d",&n);
    for(i=0;i<(n*m*2);i++)
    {
        printf("enter setA:\n");
        scanf("%d",&x);
        setA[i]=x;
    }
    PrintResult(setA, m, n);
    return 0;
}

void PrintResult(int setA[MAX], int m, int n)
{
    int setC[MAX][MAX];
    int i, j, k, h, z, x;
    for(i=0;i<(m*n);i+=m)
    {
        for(j=0;j<(2*m*n);j+=n)
        {
            if(setA[i]==setA[j])
            {
                x=i;
            }
        }
    }
    k=0;
    h=0;
    for(i=x;i<(x+m);i++)
    {
        printf("\n");
        for(j=(n*m);j<2*n*m;j+=n)
            {
                if(setA[i]==setA[j])
                {
                    for(z=j;z<(j+n);z++)
                    {
                        setC[k][h]=setA[z];
                        printf("%d",setC[k][h]);
                        k++;
                        h++;
                    }
                }
            }
    }
    printf("\n");
}
