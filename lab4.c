#include<stdio.h>

int main()
{
  int i,k,j,n;
  int a[100] = {45,56,77,14,34,55,1,2,99,70};
    printf("input k(0<=k<9):");
    scanf("%d",&k);
    for(i=k;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    for(i=9;i>k;i--)
    {
        printf("%d\n",a[i]);
    }
 printf("\n");
 int nmax, p;
 for(i=0;i<9;i++)
    {
        nmax = i;
        for(j=i+1;j<10;j++)
        {
         if(a[j]>a[nmax])
         {
         nmax = j;
         p = a[i];
         a[i] = a[nmax];
         a[nmax] = p;
         }
        }
    }
 int b[100];
 j=0;
 for(i=0;i<10;i++)


 {
  if(a[i]%2==0)
  {
   b[j]=a[i];
   j++;
  }
 }
 printf("input n(0<=n<%d):",j);
 scanf("%d",&n);
 for(i=n;i>=0;i--)
    {
        printf("%d\n",b[i]);
    }
    for(i=(j-1);i>n;i--)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
