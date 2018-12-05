#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int n, i, k;
 printf("Put the number of strings:");
 scanf("%d",&n);
 char **mas;
 mas=(char**)malloc(n*sizeof(char*));
 for(i=0; i<n; i++)
 {
   mas[i]=(char*)malloc(20*sizeof(char));
   printf("enter word:");
   scanf("%s",mas[i]);
   mas[i]=(char*)realloc(mas[i],sizeof(char)*(strlen(mas[i])));
 }
 for(i=0;i<n;i++)
 {
   printf("%s", mas[i]);
   printf("\n");
 }
 printf("Put the number of string you wanna insert:");
 scanf("%d",&k);
 if(k<0||k>n)
 {
   printf("Put the number of string you wanna insert:");
   scanf("%d",&k);
 }
 char **mas2;
 mas2=(char**)malloc((n+1)*sizeof(char));
 for(i=0; i<k; i++)
 {
   mas2[i]=(char*)malloc(sizeof(char)*(strlen(mas[i])));
   mas2[i]=mas[i];
 }
 mas2[k]=(char*)malloc(20*sizeof(char));
 printf("enter word:");
 scanf("%s",mas2[k]);
 mas2[k]=(char*)realloc(mas2[k],sizeof(char)*(strlen(mas2[i])));
 for(i=k; i<n; i++)
 {
   mas2[i+1]=(char*)malloc(sizeof(char)*(strlen(mas[i])));
   mas2[i+1]=mas[i];
 }
 for(i=0;i<(n+1);i++)
 {
   printf("%s", mas2[i]);
   printf("\n");
 }
 for(i=0;i<n;i++)
 {
   free(mas[i]);
 }
 for(i=0;i<n+1;i++)
 {
   free(mas2[i]);
 }

 return 0;
}
