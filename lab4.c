#include<stdio.h>

int main()
{
  int i,k,j;
  int a[100] = {45,56,77,14,34,55,1,2,99,70};
       printf("input k(0<=k<9):");
       scanf("%d",&k);
    for(i=k;i>=0;i--)
       {
          printf("%d\n",a[i]);
          if(i==0)
          {
            for(j=9;j>k;j--)
            {
            printf("%d\n",a[j]);
            }
          }
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
 int b[10];
 for(i=0;i<10;i++)
 {
  j=0;
  if(a[i]%2==0)
  {
   b[j]=a[i];
   printf("%d\n",b[j]);
  }
  j++;
 }

    return 0;
}
