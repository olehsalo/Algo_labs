#include <stdarg.h>
#include <stdio.h>

int min(int, ...);

int main ()
{
   printf("%d\n", min(5, 102, 2, 15, 43, 56));
   printf("%d\n", min(10, 162, 55, 19, 63, 76, 1002, 6, 13, 4, 62));
   printf("%d\n", min(12, 132, 12, 15, 43, 56, 40, 14, 17, 32, 44, 99, 788 ));
   return 0;
}

int min(int k, ...)
{
   int i, n=0, array[20];
   va_list ap;
   va_start(ap, k);
   for(i=0;i<k;i++)
   {
      array[i]=va_arg(ap, int);
      if(i!=0)
      {
         if(array[i]>array[i-1])
         {
            array[i]=n;
            array[i]=array[i-1];
            array[i-1]=n;
         }
      }
   }
   va_end(ap);
   return array[k-1];
}
